#include "System.h"
#include <fstream>
#include <string>

bool fileExists(const std::string& path) {
    std::ifstream f(path);
    return f.good();
}

int main(int argc, char const *argv[])
{
    std::string usersPath = "../../users/users.txt";
    std::string booksPath = "../../books";
    
    // Auto-detect correct relative path based on execution directory
    if (!fileExists(usersPath)) {
        if (fileExists("Section31_OnlineBookReader/users/users.txt")) {
            usersPath = "Section31_OnlineBookReader/users/users.txt";
            booksPath = "Section31_OnlineBookReader/books";
        } else if (fileExists("users/users.txt")) {
            usersPath = "users/users.txt";
            booksPath = "books";
        }
    }

    System app(booksPath, usersPath);
    app.run();
    
    return 0;
}
