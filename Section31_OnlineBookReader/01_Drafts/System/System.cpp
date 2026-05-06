#include "System.h"
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

System::System(const std::string& booksPath, const std::string& usersPath)
    : myLibrary(booksPath), myReaders(usersPath) {
}

int System::ReadInt(int low, int high) {
    int choice;
    while (true) {
        cout << "Enter number in range " << low << " - " << high << ": ";
        if (cin >> choice && choice >= low && choice <= high) {
            return choice;
        }
        cout << "Invalid input. Try again.\n";
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

void System::ReadBookLoop(Reader* user, Book book, int startPageIdx) {
    // Fast-forward to startPageIdx silently to restore the internal state
    std::streambuf* oldCout = std::cout.rdbuf(nullptr);
    for (int i = 0; i < startPageIdx; ++i) {
        book.displayNextPage();
    }
    std::cout.rdbuf(oldCout);
    
    book.displayCurrentPage();
    
    int currentPageIdx = startPageIdx;
    while (true) {
        cout << "\nMenu:\n";
        cout << "\t1: Next Page\n";
        cout << "\t2: Previous Page\n";
        cout << "\t3: Stop Reading\n\n";
        
        int choice = ReadInt(1, 3);
        if (choice == 1) {
            if (currentPageIdx < book.getNumberOfPages() - 1) currentPageIdx++;
            book.displayNextPage();
        } else if (choice == 2) {
            if (currentPageIdx > 0) currentPageIdx--;
            book.displayPreviousPage();
        } else if (choice == 3) {
            myReaders.updateReaderSession(user->getUsername(), book.getTitle(), currentPageIdx + 1);
            break;
        }
    }
}

void System::UserSession(Reader* user) {
    while (true) {
        cout << "\nHello " << user->getFullName() << " | User View\n\n";
        cout << "Menu:\n";
        cout << "\t1: View Profile\n";
        cout << "\t2: List & Select from My Reading History\n";
        cout << "\t3: List & Select from Available Books\n";
        cout << "\t4: Logout\n\n";
        
        int choice = ReadInt(1, 4);
        
        if (choice == 1) {
            cout << "\nName: " << user->getFullName() << "\n";
            cout << "Email: " << user->getEmail() << "\n";
            cout << "User name: " << user->getUsername() << "\n";
        } else if (choice == 2) {
            const auto& sessions = user->getSessions();
            if (sessions.empty()) {
                cout << "\nNo reading history available.\n";
                continue;
            }
            
            for (size_t i = 0; i < sessions.size(); ++i) {
                const auto& session = sessions[i];
                int totalPages = 0;
                for (const auto& b : myLibrary.getLibrary()) {
                    if (b.getTitle() == session.bookTitle) {
                        totalPages = b.getNumberOfPages();
                        break;
                    }
                }
                
                time_t t = session.lastReadTime;
                struct tm * tm = localtime(&t);
                char timeBuf[80];
                strftime(timeBuf, sizeof(timeBuf), "%Y-%m-%d %H:%M:%S", tm);
                cout << i + 1 << ": " << session.bookTitle << " Page: " 
                     << session.currentPage << "/" << totalPages << " - " 
                     << timeBuf << "\n";
            }
            
            cout << "\nWhich session to open?:\n";
            int sessionIdx = ReadInt(1, sessions.size()) - 1;
            
            const auto& session = sessions[sessionIdx];
            int foundIdx = -1;
            for (size_t b = 0; b < myLibrary.getLibrary().size(); ++b) {
                if (myLibrary.getLibrary()[b].getTitle() == session.bookTitle) {
                    foundIdx = b;
                    break;
                }
            }
            
            if (foundIdx != -1) {
                Book selectedBook = myLibrary.getLibrary()[foundIdx];
                int startPageIdx = session.currentPage - 1;
                if (startPageIdx < 0) startPageIdx = 0;
                ReadBookLoop(user, selectedBook, startPageIdx);
            } else {
                cout << "Book no longer available in library.\n";
            }
            
        } else if (choice == 3) {
            cout << "\nOur current book collection:\n";
            const auto& books = myLibrary.getLibrary();
            if (books.empty()) {
                cout << "No books available.\n";
                continue;
            }
            for (size_t i = 0; i < books.size(); ++i) {
                cout << "\t" << i + 1 << " " << books[i].getTitle() << "\n";
            }
            cout << "\nWhich book to read?:\n";
            int bookIdx = ReadInt(1, books.size()) - 1;
            
            Book selectedBook = books[bookIdx];
            
            int startPageIdx = 0;
            for (const auto& session : user->getSessions()) {
                if (session.bookTitle == selectedBook.getTitle()) {
                    startPageIdx = session.currentPage - 1;
                    if (startPageIdx < 0) startPageIdx = 0;
                    break;
                }
            }
            
            ReadBookLoop(user, selectedBook, startPageIdx);
            
        } else if (choice == 4) {
            break;
        }
    }
}

void System::run() {
    while (true) {
        cout << "\nMenu:\n";
        cout << "\t1: Login\n";
        cout << "\t2: Sign Up\n\n";
        
        int choice = ReadInt(1, 2);
        
        if (choice == 1) {
            string username, password;
            cout << "Enter user name (No spaces): ";
            cin >> username;
            cout << "Enter password (no spaces): ";
            cin >> password;
            
            Reader* user = myReaders.authenticateUser(username, password);
            if (user) {
                UserSession(user);
            } else {
                cout << "Invalid user name or password.\n";
            }
        } else if (choice == 2) {
            string username, password, name, email;
            cout << "Enter user name (No spaces): ";
            cin >> username;
            cout << "Enter password (no spaces): ";
            cin >> password;
            cout << "Enter name (no spaces): ";
            cin >> name;
            cout << "Enter email (no spaces): ";
            cin >> email;
            
            myReaders.getUsers().emplace_back(username, password, name, email);
            myReaders.sync();
            cout << "Sign up successful. You can now login.\n";
        }
    }
}
