/*
 * ********************************************************************************************************************
 *
 *   *****   *************************   **************   ***********************
 *  ******   *************************   **************   ***********************
 *  **       ***                       **               ***
 *  **       ***                       **               ***
 *  **       *************************   **************   ***********************
 *  **       *************************   **************   ***********************
 *  **       ***                       **               ***
 *  **       ***                       **               ***
 *  ******   ***                       **************   ***
 *   *****   ***                       **************   ***
 *
 * ********************************************************************************************************************
 *
 *   Copyright (c) 2021-2024, Sci-Fi Robotics Ltd.
 *   All rights reserved.
 *
 *   This library is free software; you can redistribute it and/or
 *   modify it under the terms of the MIT License.
 *
 *   This library is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the MIT
 *   License for more details.
 *
 *   You should have received a copy of the MIT License along with
 *   this library; if not, write to info@scifi-robotics.com.
 *
 * ********************************************************************************************************************
 *
 *   AUTHOR: Your Name.
 *
 *   DATE: 12/21/2023
 *
 *   PROJECT: C++ How To Program.
 *
 *   DESCRIPTION:
 *     A brief description of the program.
 *
 * ********************************************************************************************************************
 */

/**********************************************************************************************************************
 *  FILE INCLUSIONS
 *********************************************************************************************************************/
#include <iostream>
#include <queue>
#include <fstream>
#include <map>
using namespace std;
/**********************************************************************************************************************
 *  GLOBAL CONSTANTS & VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  TYPE DEFINITIONS & STRUCTS/CLASSES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL & GLOBAL MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION DECLARATIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION DEFINITIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  MAIN FUNCTION
 *********************************************************************************************************************/
struct User
{
    string UserName; 
    string Password;

    User(string uname="",string pw = "")
    {
        UserName = uname; 
        Password = pw; 
    }
};

struct Users
{
    map<int,User> users; 

    Users() /* Default Constructor */
    {

    }

    void LoadUsers(void)
    {
        fstream file("Users_Data.txt", ios::in);

        // Create the file if it doesn't exist
        if (!file)
        {
            ofstream create("Users_Data.txt");
            create.close();

            file.open("Users_Data.txt", ios::in);
            if (!file)
            {
                cerr << "Failed to open Users_Data.txt\n";
                return;
            }
        }

        users.clear(); // prevent duplicates if called multiple times

        string username;
        string password;
        int index = 0;

        while (getline(file, username))
        {
            if (!getline(file, password))
            {
                cerr << "WARNING: Corrupted file (odd number of lines)\n";
                break;
            }

            users.insert({index++, User(username, password)});
        }

        file.close();
    }
    void AppendUser(const string &username, const string &password)
    {
        // Open file strictly for appending
        ofstream file("Users_Data.txt", ios::app);

        if (!file)
        {
            cerr << "Failed to open Users_Data.txt for appending\n";
            return;
        }

        file << username << '\n'
             << password << '\n';

        file.close();

        // Optional but recommended:
        // keep memory in sync with disk without reloading everything
        int index = users.size();
        users.insert({index, User(username, password)});
    }

    void DeleteUser(const string &username)
    {
        // ---- Remove from map first ----
        bool found = false;

        for (auto it = users.begin(); it != users.end(); ++it)
        {
            if (it->second.UserName == username)
            {
                users.erase(it);
                found = true;
                break;
            }
        }

        if (!found)
        {
            cerr << "User not found\n";
            return;
        }

        // ---- Rewrite file ----
        ofstream temp("Temp_Users.txt");

        if (!temp)
        {
            cerr << "Failed to create temp file\n";
            return;
        }

        for (const auto &pair : users)
        {
            temp << pair.second.UserName << '\n'
                 << pair.second.Password << '\n';
        }

        temp.close();

        // Replace original file
        remove("Users_Data.txt");
        rename("Temp_Users.txt", "Users_Data.txt");
    }
    void PrintUsers(const string &title) const
    {
        cout << "\n=== " << title << " (count=" << users.size() << ") ===\n";

        for (const auto &p : users)
        {
            cout << "[" << p.first << "] "
                 << p.second.UserName << "\n"; // Password removed
        }
    }
};

int main()
{
    Users u;

    // Load existing users (creates file if missing)
    u.LoadUsers();
    u.PrintUsers("After LoadUsers");

    // Append test users
    u.AppendUser("ID_TEST_1", "PW_TEST_1");
    u.AppendUser("ID_TEST_2", "PW_TEST_2");
    u.PrintUsers("After AppendUser x2");

    // Reload to verify persistence
    u.LoadUsers();
    u.PrintUsers("After re-LoadUsers");

    // Delete one user
    u.DeleteUser("ID_TEST_1");
    u.PrintUsers("After DeleteUser(ID_TEST_1)");

    // Final reload to confirm deletion persisted
    u.LoadUsers();
    u.PrintUsers("After final LoadUsers");

    // Attempt deleting a non-existing user
    u.DeleteUser("ID_DOES_NOT_EXIST");

    return 0;
}
