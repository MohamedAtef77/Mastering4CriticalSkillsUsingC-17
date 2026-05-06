#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>

class Book {
private:
    std::string title;
    std::string filePath;
    std::vector<std::string> pages;
    int currentPage;

    void loadBook();

public:
    Book(const std::string& title, const std::string& filePath);
    
    void displayNextPage();
    void displayPreviousPage();
    void displayCurrentPage() const;
    int getNumberOfPages() const;
    std::string getTitle() const;
};

#endif // BOOK_H
