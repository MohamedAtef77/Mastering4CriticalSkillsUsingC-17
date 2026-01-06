/*
 * ********************************************************************************************************************
 *  (header unchanged)
 * ********************************************************************************************************************
 */

/**********************************************************************************************************************
 *  FILE INCLUSIONS
 *********************************************************************************************************************/
#include <iostream>
#include <algorithm>
#include <set>      // NEW
#include <iterator> // optional (not required here)
using namespace std;

/**********************************************************************************************************************
 *  GLOBAL CONSTANTS & VARIABLES
 *********************************************************************************************************************/
#define BOOK_MAX_NO_OF_BORROWERS 1000
#define BOOKS_MAX_NO_OF_BOOKS 1000
#define USER_MAX_NO_OF_BOOKS_BORROWED 100
#define USERS_MAX_NO_OF_USERS 1000

/**********************************************************************************************************************
 *  TYPE DEFINITIONS & STRUCTS/CLASSES
 *********************************************************************************************************************/
enum MenuChoice
{
    ADD_BOOK = 1,
    SEARCH_BOOKS_BY_PREFIX,
    PRINT_WHO_BORROWED_BOOK_BY_NAME,
    PRINT_LIBRARY_BY_ID,
    PRINT_LIBRARY_BY_NAME,
    ADD_USER,
    USER_BORROW_BOOK,
    USER_RETURN_BOOK,
    PRINT_USERS,
    EXIT
};

struct Book
{
    /* Data Members */
    int id;
    string name;
    int quantity;

    // REPLACED: int borrowers_ids[BOOK_MAX_NO_OF_BORROWERS]{};
    // REPLACED: int borrowers_count;
    std::set<int> borrowers_ids; // unique borrower IDs, always sorted

    /* Member Functions */
    Book(const int &bookId = 0, const string &BookName = "")
    {
        id = bookId;
        name = BookName;
        quantity = 0;
        // borrowers_ids empty by default
    }

    string GetName(void) const { return name; }
    int GetId(void) const { return id; }
    int GetCurrentQuantity(void) const { return quantity; }

    void SetName(const string &newName) { name = newName; }
    void SetId(int newId) { id = newId; }
    void SetCurrentQuantity(int newQuantity) { quantity = newQuantity; }

    bool Borrow(int userId)
    {
        if (quantity <= 0)
            return false;

        // if already borrowed, don't decrement quantity
        if (borrowers_ids.find(userId) != borrowers_ids.end())
            return false;

        // optional capacity guard to preserve old limit
        if (static_cast<int>(borrowers_ids.size()) >= BOOK_MAX_NO_OF_BORROWERS)
            return false;

        borrowers_ids.insert(userId);
        --quantity;
        return true;
    }

    bool Return(int userId)
    {
        auto it = borrowers_ids.find(userId);
        if (it == borrowers_ids.end())
            return false; // can't return a book you didn't borrow

        borrowers_ids.erase(it);
        ++quantity;
        return true;
    }

    void Read()
    {
        cout << "Enter book info: id, name, and total quantity: ";
        cin >> id >> name >> quantity;
        borrowers_ids.clear();
    }

    void Print() const
    {
        cout << "ID: " << id
             << " Name: " << name
             << " Available Quantity: " << quantity
             << " Borrowers Count: " << borrowers_ids.size()
             << endl;

        if (!borrowers_ids.empty())
        {
            cout << "Borrowers IDs: ";
            for (auto it = borrowers_ids.begin(); it != borrowers_ids.end();)
            {
                cout << *it;
                if (++it != borrowers_ids.end())
                    cout << ", ";
            }
            cout << endl;
        }
    }

    // Keep the same interface, but now copy from set into the provided array
    bool GetIdsOfBorrowers(int borrowersCount, int borrowersIdsArr[])
    {
        if (borrowersIdsArr == nullptr || borrowersCount <= 0)
            return false;

        int i = 0;
        for (int id : borrowers_ids)
        {
            if (i >= borrowersCount)
                break;
            borrowersIdsArr[i++] = id;
        }
        return true;
    }

    // NEW helper (optional) if you want a count like before
    int GetBorrowersCount() const
    {
        return static_cast<int>(borrowers_ids.size());
    }
};

struct Books
{
    /* Data Members */
    Book books_by_id[BOOKS_MAX_NO_OF_BOOKS];
    int books_count{0};

    /* Member Functions */
    bool InsertBook(const Book &bk)
    {
        int i{0};

        if (books_count >= BOOKS_MAX_NO_OF_BOOKS)
            return false;

        for (i = 0; i < books_count; ++i)
        {
            if (books_by_id[i].GetId() == bk.GetId())
                break;
        }

        if (i == books_count)
        {
            books_by_id[books_count] = bk;
            books_count++;

            sort(books_by_id, books_by_id + books_count,
                 [](const Book &a, const Book &b)
                 { return a.id < b.id; });

            return true;
        }
        return false;
    }

    bool RemoveBook(const Book &bk)
    {
        int bookId = bk.GetId();
        int idx_id = -1;
        for (int i = 0; i < books_count; ++i)
        {
            if (books_by_id[i].GetId() == bookId)
            {
                idx_id = i;
                break;
            }
        }

        if (idx_id == -1)
            return false;

        for (int i = idx_id; i < books_count - 1; ++i)
            books_by_id[i] = books_by_id[i + 1];

        books_count--;
        return true;
    }

    bool EditBookQuantity(const Book &bk)
    {
        int bookId = bk.GetId();
        int newQuantity = bk.GetCurrentQuantity();
        for (int i = 0; i < books_count; ++i)
        {
            if (books_by_id[i].GetId() == bookId)
            {
                books_by_id[i].SetCurrentQuantity(newQuantity);
                return true;
            }
        }
        return false;
    }

    void PrintBooksById() const
    {
        for (int i = 0; i < books_count; ++i)
            books_by_id[i].Print();
    }

    void PrintBooksByName() const
    {
        const Book *temp_ptrs[BOOKS_MAX_NO_OF_BOOKS];
        for (int i = 0; i < books_count; ++i)
            temp_ptrs[i] = &books_by_id[i];

        sort(temp_ptrs, temp_ptrs + books_count,
             [](const Book *a, const Book *b)
             { return a->GetName() < b->GetName(); });

        for (int i = 0; i < books_count; ++i)
            temp_ptrs[i]->Print();
    }

    bool BorrowBook(const int &userId, string bookName)
    {
        for (int i = 0; i < books_count; ++i)
            if (books_by_id[i].GetName() == bookName)
                return books_by_id[i].Borrow(userId);
        return false;
    }

    bool BorrowBook(const int &userId, const int &bookId)
    {
        for (int i = 0; i < books_count; ++i)
            if (books_by_id[i].GetId() == bookId)
                return books_by_id[i].Borrow(userId);
        return false;
    }

    bool ReturnBook(const int &userId, string bookName)
    {
        for (int i = 0; i < books_count; ++i)
            if (books_by_id[i].GetName() == bookName)
                return books_by_id[i].Return(userId);
        return false;
    }

    bool ReturnBook(const int &userId, const int &bookId)
    {
        for (int i = 0; i < books_count; ++i)
            if (books_by_id[i].GetId() == bookId)
                return books_by_id[i].Return(userId);
        return false;
    }

    void SearchBooksByPrefix(const string &prefix)
    {
        bool found = false;
        for (int i = 0; i < books_count; ++i)
        {
            if (books_by_id[i].GetName().find(prefix) == 0)
            {
                cout << books_by_id[i].GetName() << endl;
                found = true;
            }
        }
        if (!found)
            cout << "no books with such prefix are found" << endl;
    }

    int GetIdByName(const string &name) const
    {
        for (int i = 0; i < books_count; ++i)
            if (books_by_id[i].GetName() == name)
                return books_by_id[i].GetId();
        return -1;
    }

    int GetBooksCount() const { return books_count; }
};

struct User
{
    /* Data Members */
    string name{};
    int id;

    // REPLACED: int borrowed_books_ids[USER_MAX_NO_OF_BOOKS_BORROWED]{};
    // REPLACED: int borrowed_books_count{0};
    std::set<int> borrowed_books_ids; // unique book IDs, always sorted

    /* Member Functions */
    User() : id(-1) {}
    User(const int &_id, const string &_name)
    {
        name = _name;
        id = _id;
    }

    string GetName(void) const { return name; }
    int GetId(void) const { return id; }

    void Read()
    {
        cout << "Enter user name and id: ";
        cin >> name >> id;
    }

    void Borrow(int book_id)
    {
        // preserve the old max capacity
        if (static_cast<int>(borrowed_books_ids.size()) >= USER_MAX_NO_OF_BOOKS_BORROWED)
            return;

        borrowed_books_ids.insert(book_id);
    }

    bool Return(int book_id)
    {
        return borrowed_books_ids.erase(book_id) > 0;
    }

    void Print() const
    {
        cout << "user " << name << " id " << id << " borrowed books ids: ";
        if (borrowed_books_ids.empty())
        {
            cout << "None";
        }
        else
        {
            for (auto it = borrowed_books_ids.begin(); it != borrowed_books_ids.end();)
            {
                cout << *it;
                if (++it != borrowed_books_ids.end())
                    cout << " ";
            }
        }
        cout << endl;
    }
};

struct Users
{
    /* Data Members */
    User users_list[USERS_MAX_NO_OF_USERS];
    int users_count{0};

    /* Member Functions */
    bool InsertUser(const User &user)
    {
        if (users_count >= USERS_MAX_NO_OF_USERS)
            return false;

        for (int i = 0; i < users_count; ++i)
            if (users_list[i].id == user.id)
                return false;

        users_list[users_count++] = user;
        return true;
    }

    bool RemoveUser(int userId)
    {
        int idx = -1;
        for (int i = 0; i < users_count; ++i)
        {
            if (users_list[i].id == userId)
            {
                idx = i;
                break;
            }
        }

        if (idx == -1)
            return false;

        for (int i = idx; i < users_count - 1; ++i)
            users_list[i] = users_list[i + 1];

        users_count--;
        return true;
    }

    void PrintUsers() const
    {
        for (int i = 0; i < users_count; ++i)
            users_list[i].Print();
    }

    bool BorrowBook(const string &userName, int bookId)
    {
        for (int i = 0; i < users_count; ++i)
        {
            if (users_list[i].name == userName)
            {
                users_list[i].Borrow(bookId);
                return true;
            }
        }
        return false;
    }

    bool ReturnBook(const string &userName, int bookId)
    {
        for (int i = 0; i < users_count; ++i)
        {
            if (users_list[i].name == userName)
                return users_list[i].Return(bookId);
        }
        return false;
    }

    int GetIdByName(const string &userName) const
    {
        for (int i = 0; i < users_count; ++i)
            if (users_list[i].name == userName)
                return users_list[i].id;
        return -1;
    }

    int GetUsersCount(void) const { return users_count; }
};

struct Library
{
    Books library_books;
    Users library_users;

    bool AddBook(const Book &bk) { return library_books.InsertBook(bk); }

    void SearchBookByPrefix(const string &prefix)
    {
        if (library_books.GetBooksCount() == 0)
        {
            cout << "No books available in the library." << endl;
            return;
        }
        library_books.SearchBooksByPrefix(prefix);
    }

    void PrintLibraryBooksById(void)
    {
        if (library_books.GetBooksCount() == 0)
        {
            cout << "No books available in the library." << endl;
            return;
        }
        library_books.PrintBooksById();
    }

    void PrintLibaryBooksByName(void)
    {
        if (library_books.GetBooksCount() == 0)
        {
            cout << "No books available in the library." << endl;
            return;
        }
        library_books.PrintBooksByName();
    }

    bool AddUser(const User &usr) { return library_users.InsertUser(usr); }

    void PrintUsers(void)
    {
        if (library_users.GetUsersCount() == 0)
        {
            cout << "No users registered in the system." << endl;
            return;
        }
        library_users.PrintUsers();
    }

    bool UserBorrowBook(const Book &bk, const User &usr)
    {
        if (library_books.BorrowBook(usr.GetId(), bk.GetName()))
        {
            library_users.BorrowBook(usr.GetName(), bk.GetId());
            return true;
        }
        return false;
    }

    bool UserReturnBook(const Book &bk, const User &usr)
    {
        bool retVal{false};
        retVal = library_books.ReturnBook(usr.GetId(), bk.GetName());
        retVal &= library_users.ReturnBook(usr.GetName(), bk.GetId());
        return retVal;
    }

    void PrintBookBorrowersByBookName(const string &bk_name)
    {
        int book_idx = -1;
        for (int i = 0; i < library_books.GetBooksCount(); ++i)
        {
            if (library_books.books_by_id[i].GetName() == bk_name)
            {
                book_idx = i;
                break;
            }
        }

        if (book_idx == -1)
        {
            cout << "Invalid book name." << endl;
            return;
        }

        // With set, you can iterate directly (no need for temp C array),
        // but I'll keep your old flow and just adapt the "count".
        int b_ids[BOOK_MAX_NO_OF_BORROWERS];
        library_books.books_by_id[book_idx].GetIdsOfBorrowers(BOOK_MAX_NO_OF_BORROWERS, b_ids);

        int borrowers_count = library_books.books_by_id[book_idx].GetBorrowersCount();

        for (int i = 0; i < borrowers_count; ++i)
        {
            for (int j = 0; j < library_users.GetUsersCount(); ++j)
            {
                if (library_users.users_list[j].GetId() == b_ids[i])
                    cout << library_users.users_list[j].GetName() << endl;
            }
        }
    }

    int GetQuery(void)
    {
        int choice;
        cout << "------------------------------------------" << endl;
        cout << "Library Menu;" << endl;
        cout << "1) add_book" << endl;
        cout << "2) search_books_by_prefix" << endl;
        cout << "3) print_who_borrowed_book_by_name" << endl;
        cout << "4) print_library_by_id" << endl;
        cout << "5) print_library_by_name" << endl;
        cout << "6) add_user" << endl;
        cout << "7) user_borrow_book" << endl;
        cout << "8) user_return_book" << endl;
        cout << "9) print_users" << endl;
        cout << "10) Exit" << endl;
        cout << "\nEnter your menu choice [1 - 10]: ";
        cin >> choice;
        return choice;
    }

    bool HandleQuery(int choice)
    {
        bool retVal{true};
        Book temp_book(0, "");
        User temp_user(0, "");
        string prefix;
        string book_name;
        string user_name;

        switch (choice)
        {
        case ADD_BOOK:
            temp_book.Read();
            AddBook(temp_book);
            break;
        case SEARCH_BOOKS_BY_PREFIX:
            cout << "Enter book name prefix: ";
            cin >> prefix;
            SearchBookByPrefix(prefix);
            break;
        case PRINT_WHO_BORROWED_BOOK_BY_NAME:
            cout << "Enter book name: ";
            cin >> book_name;
            PrintBookBorrowersByBookName(book_name);
            break;
        case PRINT_LIBRARY_BY_ID:
            PrintLibraryBooksById();
            break;
        case PRINT_LIBRARY_BY_NAME:
            PrintLibaryBooksByName();
            break;
        case ADD_USER:
            temp_user.Read();
            AddUser(temp_user);
            break;
        case USER_BORROW_BOOK:
            cout << "Enter user name and book name: ";
            cin >> user_name >> book_name;
            {
                int u_id = library_users.GetIdByName(user_name);
                int b_id = library_books.GetIdByName(book_name);
                if (u_id == -1 || b_id == -1)
                    cout << "Invalid user or book name." << endl;
                else if (!UserBorrowBook(Book(b_id, book_name), User(u_id, user_name)))
                    cout << "Borrowing failed." << endl;
            }
            break;
        case USER_RETURN_BOOK:
            cout << "Enter user name and book name: ";
            cin >> user_name >> book_name;
            {
                int u_id = library_users.GetIdByName(user_name);
                int b_id = library_books.GetIdByName(book_name);
                if (u_id == -1 || b_id == -1)
                    cout << "Invalid user or book name." << endl;
                else if (!UserReturnBook(Book(b_id, book_name), User(u_id, user_name)))
                    cout << "Return failed." << endl;
            }
            break;
        case PRINT_USERS:
            PrintUsers();
            break;
        case EXIT:
            cout << "Exiting system..." << endl;
            retVal = false;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        return retVal;
    }

    void Thread(void)
    {
        int choice = GetQuery();
        while (choice != EXIT)
        {
            HandleQuery(choice);
            choice = GetQuery();
        }
    }
};

/**********************************************************************************************************************
 *  MAIN FUNCTION
 *********************************************************************************************************************/
int main()
{
    Library lib;
    lib.Thread();
    return 0;
}
