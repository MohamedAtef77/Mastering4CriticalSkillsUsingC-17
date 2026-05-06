#include "Books.h"
#include <iostream>
#include <dirent.h>
#include <algorithm>

Books::Books(const std::string& directoryPath) {
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir(directoryPath.c_str())) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            std::string fileName = ent->d_name;
            if (fileName.length() >= 4 && fileName.substr(fileName.length() - 4) == ".txt") {
                std::string title = fileName.substr(0, fileName.length() - 4);
                std::replace(title.begin(), title.end(), '_', ' ');
                std::string fullPath = directoryPath + "/" + fileName;
                library.emplace_back(title, fullPath);
            }
        }
        closedir(dir);
    } else {
        std::cerr << "Error: Could not open directory " << directoryPath << std::endl;
    }
}

std::vector<Book>& Books::getLibrary() {
    return library;
}

const std::vector<Book>& Books::getLibrary() const {
    return library;
}

void Books::displayAllBooks() const {
    std::cout << "Available Books in the Library:\n";
    for (size_t i = 0; i < library.size(); ++i) {
        std::cout << i + 1 << ". " << library[i].getTitle() 
                  << " (" << library[i].getNumberOfPages() << " pages)\n";
    }
}
