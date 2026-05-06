#include "Readers.h"
#include <fstream>
#include <iostream>
#include <algorithm>

void trimRight(std::string& str) {
    if (!str.empty() && str.back() == '\r') {
        str.pop_back();
    }
}

Readers::Readers(const std::string& usersFilePath) : filePath(usersFilePath) {
    loadUsers();
}

void Readers::loadUsers() {
    users.clear();
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Warning: Could not open users file " << filePath << std::endl;
        return;
    }

    std::string username, password, fullName, email, sessionCountStr;
    while (std::getline(file, username)) {
        if (username.empty()) continue; // Skip empty lines
        
        std::getline(file, password);
        std::getline(file, fullName);
        std::getline(file, email);
        std::getline(file, sessionCountStr);
        
        trimRight(username);
        trimRight(password);
        trimRight(fullName);
        trimRight(email);
        trimRight(sessionCountStr);
        
        Reader reader(username, password, fullName, email);
        
        int sessionCount = 0;
        try {
            sessionCount = std::stoi(sessionCountStr);
        } catch (...) {
            sessionCount = 0;
        }

        std::vector<ReadingSession> sessions;
        for (int i = 0; i < sessionCount; ++i) {
            std::string bookTitle, pageStr, timeStr;
            std::getline(file, bookTitle);
            std::getline(file, pageStr);
            std::getline(file, timeStr);
            
            trimRight(bookTitle);
            trimRight(pageStr);
            trimRight(timeStr);
            
            ReadingSession session;
            session.bookTitle = bookTitle;
            try {
                session.currentPage = std::stoi(pageStr);
                session.lastReadTime = std::stoll(timeStr);
            } catch (...) {
                session.currentPage = 0;
                session.lastReadTime = 0;
            }
            sessions.push_back(session);
        }
        reader.setSessions(sessions);
        users.push_back(reader);
    }
}

void Readers::saveUsers() const {
    std::ofstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open users file for writing " << filePath << std::endl;
        return;
    }

    for (const auto& reader : users) {
        file << reader.getUsername() << "\n"
             << reader.getPassword() << "\n"
             << reader.getFullName() << "\n"
             << reader.getEmail() << "\n";
             
        const auto& sessions = reader.getSessions();
        file << sessions.size() << "\n";
        
        for (const auto& session : sessions) {
            file << session.bookTitle << "\n"
                 << session.currentPage << "\n"
                 << session.lastReadTime << "\n";
        }
    }
}

std::vector<Reader>& Readers::getUsers() { return users; }
const std::vector<Reader>& Readers::getUsers() const { return users; }

Reader* Readers::authenticateUser(const std::string& username, const std::string& password) {
    for (auto& reader : users) {
        if (reader.getUsername() == username && reader.getPassword() == password) {
            return &reader;
        }
    }
    return nullptr;
}

void Readers::updateReaderSession(const std::string& username, const std::string& bookTitle, int currentPage) {
    for (auto& reader : users) {
        if (reader.getUsername() == username) {
            reader.addOrUpdateSession(bookTitle, currentPage);
            saveUsers(); // Sync with file immediately
            return;
        }
    }
}

void Readers::sync() {
    saveUsers();
}