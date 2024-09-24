/*
READ two answers,
CALCULATE and WRITE an appropriate message
using only if-else statements.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    char user_citizenship;
    int user_birthday_year;
    int user_age;
    const int current_year = 2024;
    string decision;
    string final_message;

    //Invite, read, and save inputs
    cout << "Are you a Canadian Citizenship ? Y/N" ;
    cout << endl; //line break
    cin >> user_citizenship;

    cout << "What is your birthday year?" ;
    cout << endl; //line break
    cin >> user_birthday_year;

    cout << endl; //line break

    //Calculate
    user_age = current_year - user_birthday_year;

    decision = (user_age >= 18 && (user_citizenship == 'y' || user_citizenship == 'Y')) ?
               "You are eligible" :
               "You are not eligible";

    final_message = (user_age >= 18 && (user_citizenship == 'y' || user_citizenship == 'Y')) ?
                    "Do it!" :
                    "You will be soon!";

    //Display output
    cout << decision << " to vote in a Canadian federal election. "<<final_message;
    cout << endl; //line break
}

