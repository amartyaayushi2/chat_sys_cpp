
#include <iostream>
#include <sqlite3.h>
#include <chrono>
#include <fstream>
#include <string.h>
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
int login()
{
    int status = 0;
    do
    {
        cout << "Enter username: ";
        cin >> username;
        ignore;
        cout << "Enter Password: ";
        getline(cin, pass);

        status = login_validator(username, pass);
        ​
        // system("clear");

    } while (status != 1);
}
