/*
READ first name and last name,
CALCULATE and WRITE full name that is a combination of them.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    string first_name ;
    string last_name ;
    string full_name ;

    //Invite, read, and save inputs
    cout << "INPUT:" ;
    cout << endl ; //Line break
    cout << "Enter First Name:" ;
    cout << endl ; //Line break
    cin >>  first_name;
    cout << "Enter Last Name:" ;
    cout << endl ; //Line break
    cin >>  last_name ;

    //Calculate
    full_name=first_name + " " + last_name ;

    //Display output
    cout << endl ; //Line break
    cout << "OUTPUT:" ;
    cout << endl ; //Line break
    cout << "First Name: "<< first_name ;
    cout << endl ; //Line break
    cout << "Last Name: "<< last_name ;
    cout << endl ; //Line break
    cout << "Full Name: "<< full_name ;
    cout << endl ; //Line break
}

