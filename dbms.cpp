#include <iostream>
#include <sqlite3.h>
#include <string.h>

using namespace std;

class dbms
{
    // Data Members
    char* err;
    sqlite3* DB;
    int id;

    // Member Functions
    static int callback(void *data, int argc, char **argv, char **azColName)
    {
        int i;
        cerr << (const char*)data;

        for(i = 0; i<argc; i++)
        {
            cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << endl ;

        }

        cout << "\n";    
        return 0;
    }

    public:

    dbms()
    {
        sqlite3_open("pass_database.db", &DB);

        string create = "CREATE TABLE IF NOT EXISTS CREDENTIALS ( " \
                        "SNO INT, "                                 \
                        "USERNAME CHAR(32), "                       \
                        "PASSWORD CHAR(32) );"; 

        int rc = sqlite3_exec(DB, create.c_str(), NULL, 0, &err);
        
        if(rc)
            cout << err << endl;

        // Init ID count
        id = 0;
        string sql = "SELECT MAX(SNO) FROM CREDENTIALS; ";        
        sqlite3_exec(DB, sql.c_str(), callback_id, 0, &err);
    }

    int create_acc(string usname, string pass)
    {
        string create;
        create = "INSERT INTO CREDENTIALS VALUES ";
    }

    static int callback_id(void *data, int argc, char **argv, char **azColName)
    {
        cerr << (const char*)data;

        id = atoi(argv[argc - 1]);

        return 0;
    }

};


int main()
{
    dbms obj;

    return 0;
}

/*

int main()
{
    sqlite3 *DB;
    char* msgErr;
    string sql;
    getline(cin, sql);
    const char* data = "\n";
    // strcpy(data.c_str(), "Call back funct called \n ");
    // strcpy(data.c_str(), " \n ");

    if(sql.c_str()[strlen(sql.c_str()) - 1] != ';')
        sql += ";";
    
    sqlite3_open("pass_database.db", &DB);
    // sqlite3_exec(DB, "CREATE TABLE IF NOT EXISTS CREDENTIALS ( SNO INT, USER_NAME CHAR(16),  PASSWORD CHAR(32)); ", NULL, 0, &msgErr);
    // cout << msgErr << endl;
    
    sqlite3_exec(DB, sql.c_str() , callback, (void*)data,  &msgErr);

    cout << msgErr << endl;


    return 0;
}

*/