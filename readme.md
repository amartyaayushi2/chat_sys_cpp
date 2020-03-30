Dragon Chat System

#Install SQLite3 on Ubuntu Linux
Today, almost all the flavours of Linux OS are being shipped with SQLite. So you just issue the following command to check if you already have SQLite installed on your machine.

            $sqlite3
            SQLite version 3.7.15.2 2013-01-09 11:53:05
            Enter ".help" for instructions
            Enter SQL statements terminated with a ";"
            sqlite>
            If you do not see the above result, then it means you do not have SQLite installed on your Linux machine. Following are the following steps to install SQLite −

                Step 1 − Go to SQLite download page and download sqlite-autoconf-*.tar.gz from source code section.

                Step 2 − Run the following command −

                $tar xvfz sqlite-autoconf-3071502.tar.gz
                $cd sqlite-autoconf-3071502
                $./configure --prefix=/usr/local
                $make
                $make install
                The above command will end with SQLite installation on your Linux machine. Which you can verify as explained above.

#Install SQLite 3 library for C++

#g++ main.cpp -o main -l sqlite3
	g++ is the compiler we are using for this Project.
	Here < -l sqlite3 > is for sqlite library we are using

#main.cpp
	int main()
		Main Function

        dbms()
            Creates and maintains the table for storage and maintaining of USERS ID's and PASSWORDS

        int menu()
            Function for menu services like Login, Sign up..

        int create_ac()
            Function for creating an account

         int create_to_dbms(string uname, string pass)
            Function for passing on usernsme and password to database

        int login()
            Function for logging in

        ​
        int login_validator(string user, string pass)
            Function for login credentials verification
