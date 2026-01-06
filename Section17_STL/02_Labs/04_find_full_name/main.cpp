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
#include <string>
#include <map>
#include <set>
#include <stack>
#include <vector>
#include <limits>


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
void create_map(map<string, vector<string>> &names_map)
{
    int N{0};
    int name_length{0};
    string temp_string{}, concat_name{};
    vector<string> temp_full_name;

    cout << "Enter number of names: ";
    cin >> N;

    for (auto i = 0; i != N; ++i)
    {
        cout << "Enter the length of the name (number of words): ";
        cin >> name_length;

        cout << "Enter the full name now: ";

        concat_name = "";
        temp_full_name.clear();

        for (auto j = 0; j != name_length; ++j)
        {
            cin >> temp_string;
            temp_full_name.push_back(temp_string);

            // Build the concatenated string
            concat_name += temp_string;
            if (j + 1 != name_length)
            {
                concat_name += " "; // Add space between names but not at the end
            }
        }

        // Fix: Key is the string (concat_name), Value is the vector (temp_full_name)
        names_map[concat_name] = temp_full_name;
    }
}
void respond_to_queries(map<string, vector<string>> &names_map)
{



    int N{0};
    string temp_str{};


    cout << "Enter the number of queries you are willing to search: ";
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(auto i{0}; i != N; ++i)
    {
        cout << "Enter the part of the name: ";
        getline(cin, temp_str);

        for (const auto &[full_name, name_parts] : names_map)
        {
            string temp_concatenated_name{};
            for(int j = 0; j != name_parts.size(); ++j)
            {
                temp_concatenated_name += name_parts[j];
                if(temp_concatenated_name == temp_str)
                {
                    cout << "Matches: " << full_name << endl; 
                }
                if(j + 1 != name_parts.size())
                {
                    temp_concatenated_name += " ";
                }
            }


        }
    }


}
int main(void)
{    
    map<string, vector<string>> names_map;
    
    /* Get the names and fill the map */
    create_map(names_map);
    respond_to_queries(names_map);


   

    return 0;
}