#ifndef SYSTEM_H
#define SYSTEM_H

#include "Books.h"
#include "Readers.h"
#include <string>

class System {
private:
    Books myLibrary;
    Readers myReaders;

    int ReadInt(int low, int high);
    void ReadBookLoop(Reader* user, Book book, int startPageIdx);
    void UserSession(Reader* user);

public:
    System(const std::string& booksPath, const std::string& usersPath);
    void run();
};

#endif // SYSTEM_H
