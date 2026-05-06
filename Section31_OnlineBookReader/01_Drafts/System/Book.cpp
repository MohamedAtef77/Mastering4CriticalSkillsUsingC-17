#include "Book.h"
#include <iostream>
#include <fstream>
#include <string>

Book::Book(const std::string& title, const std::string& filePath) 
    : title(title), filePath(filePath), currentPage(0) {
    loadBook();
}

void Book::loadBook() {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open book file " << filePath << std::endl;
        return;
    }

    std::string line;
    std::string pageContent = "";
    int lineCount = 0;

    while (std::getline(file, line)) {
        pageContent += line + "\n";
        lineCount++;

        if (lineCount == 25) {
            pages.push_back(pageContent);
            pageContent = "";
            lineCount = 0;
        }
    }

    if (lineCount > 0) {
        pages.push_back(pageContent);
    }
}

void Book::displayNextPage() {
    if (currentPage < (int)pages.size() - 1) {
        currentPage++;
    } else {
        std::cout << "Already at the last page.\n";
    }
    displayCurrentPage();
}

void Book::displayPreviousPage() {
    if (currentPage > 0) {
        currentPage--;
    } else {
        std::cout << "Already at the first page.\n";
    }
    displayCurrentPage();
}

void Book::displayCurrentPage() const {
    if (pages.empty()) {
        std::cout << "Book is empty.\n";
        return;
    }
    std::cout << "\n--- Page " << (currentPage + 1) << " of " << pages.size() << " ---\n";
    std::cout << pages[currentPage];
    std::cout << "-----------------------\n";
}

int Book::getNumberOfPages() const {
    return pages.size();
}

std::string Book::getTitle() const {
    return title;
}
