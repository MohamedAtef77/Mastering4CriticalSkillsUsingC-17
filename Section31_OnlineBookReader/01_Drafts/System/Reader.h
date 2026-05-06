#ifndef READER_H
#define READER_H

#include <string>
#include <vector>

struct ReadingSession {
    std::string bookTitle;
    int currentPage;
    long long lastReadTime; // Timestamp
};

class Reader {
private:
    std::string username;
    std::string password;
    std::string fullName;
    std::string email;
    std::vector<ReadingSession> sessions;

public:
    Reader(const std::string& user, const std::string& pass, const std::string& name, const std::string& mail);
    
    std::string getUsername() const;
    std::string getPassword() const;
    std::string getFullName() const;
    std::string getEmail() const;
    
    const std::vector<ReadingSession>& getSessions() const;
    
    void addOrUpdateSession(const std::string& bookTitle, int currentPage);
    void setSessions(const std::vector<ReadingSession>& newSessions);
};

#endif // READER_H