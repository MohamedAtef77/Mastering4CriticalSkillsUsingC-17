#include "Reader.h"
#include <ctime>

Reader::Reader(const std::string& user, const std::string& pass, const std::string& name, const std::string& mail)
    : username(user), password(pass), fullName(name), email(mail) {
}

std::string Reader::getUsername() const { return username; }
std::string Reader::getPassword() const { return password; }
std::string Reader::getFullName() const { return fullName; }
std::string Reader::getEmail() const { return email; }

const std::vector<ReadingSession>& Reader::getSessions() const { return sessions; }

void Reader::setSessions(const std::vector<ReadingSession>& newSessions) {
    sessions = newSessions;
}

void Reader::addOrUpdateSession(const std::string& bookTitle, int currentPage) {
    long long currentTime = std::time(nullptr);
    for (auto& session : sessions) {
        if (session.bookTitle == bookTitle) {
            session.currentPage = currentPage;
            session.lastReadTime = currentTime;
            return;
        }
    }
    // If not found, add a new session
    sessions.push_back({bookTitle, currentPage, currentTime});
}