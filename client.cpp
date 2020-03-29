#include "cplug.cpp"

void welcome();
int menu();

class chat
{
    string username, pass;

    public:
    
    chat()
    {
        cout << "\t\t \033[1;33m" << "DRAGON \033[0m" << "\033[1;35m Chat System \033[0m" <<endl; 
    }

    int menu()
    {
        int ch;
        cout << "MENU" << endl;
        cout << "1. Login" << endl;
        cout << "2. Create a new Account" << endl;
        cout << "3. Exit " << endl;
        cout << "\n Enter your choice: " ; cin >> ch;

        switch (ch)
        {
        case 1: create_acc();
                break;
        case 3: return -1;
                break;
        default: cout << "You know what you have entered ";
                // TODO: Use Chrono for sleep
                return -1;
        }
    }

    int create_acc()
    {
        string confpass;
        system("clear");
        do
        {
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter Password: ";
            getline(cin, pass);
            cout<< " Confirm your Password: ";
            getline(cin, confpass);

            if(pass != confpass)
                cerr << "\033[1;31m Passwords Do not Match! Re-enter !\033[0m" << endl;

            system("clear");
            
        } while (pass != confpass);

        
        return 1;
    }

};

int main()
{
    cplug obj;
    chat obj2;
    obj.init_hint_struct();
    if(obj.connect_to_server() == 1)
        exit(0);
    if(obj2.menu() == -1)
        return 0;
    obj.data_to_server();

    return 0;
}

