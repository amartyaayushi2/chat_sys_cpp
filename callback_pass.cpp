#include <iostream>
#include <sqlite3.h>
#include <chrono>
#include <fstream>
#include <string.h>
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
using namespace std;

static int callback_pass(void *data, int argc, char **argv, char **azColName)
{
        cerr << (const char *)data;
        char *p;
        ​
            string id = argv[argc - 1];
        // cout << id;
        fstream fout("id_no.txt", ios::out | ios::binary);
        fout << id;
        fout.close();
        ​ return 0;
}