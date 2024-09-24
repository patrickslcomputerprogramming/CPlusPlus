/*
READ two numbers,
CALCULATE and WRITE if they are equivalent or distinct
using only if - else statements.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    string user_name, user_title;
    int user_title_category;

    //Invite, read, and save inputs
    cout << "Please, enter your name." ;
    cout << endl; //Line break
    cin >> user_name;

    cout << endl; //Line break
    cout << "Please, enter your title." ;
    cout << endl; //Line break
    cout << "Enter 1 for Mister, 2 for Madam, or 3." ;
    cout << endl; //line break
    cin >> user_title_category;

    //Calculate
    if (user_title_category == 1)
        user_title = "Mister";
    else if (user_title_category == 2)
        user_title = "Madam";
    else
        user_title = "";

    //Display output
    cout << endl; //Line break

    cout << "Welcome to Quebec "
            << user_title
            << " "
            << user_name;

    cout << endl; //Line break
}


