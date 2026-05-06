#ifndef BOOKS_H
#define BOOKS_H

#include "Book.h"
#include <vector>
#include <string>

class Books {
private:
    std::vector<Book> library;

public:
    Books(const std::string& directoryPath);
    
    std::vector<Book>& getLibrary();
    const std::vector<Book>& getLibrary() const;
    void displayAllBooks() const;
};

#endif // BOOKS_H
