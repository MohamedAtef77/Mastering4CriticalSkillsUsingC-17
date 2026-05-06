#ifndef READERS_H
#define READERS_H

#include "Reader.h"
#include <vector>
#include <string>

class Readers {
private:
    std::string filePath;
    std::vector<Reader> users;

    void loadUsers();
    void saveUsers() const;

public:
    Readers(const std::string& usersFilePath);
    
    std::vector<Reader>& getUsers();
    const std::vector<Reader>& getUsers() const;
    
    Reader* authenticateUser(const std::string& username, const std::string& password);
    void updateReaderSession(const std::string& username, const std::string& bookTitle, int currentPage);
    
    // Explicitly sync to file if a reader was modified directly
    void sync();
};

#endif // READERS_H