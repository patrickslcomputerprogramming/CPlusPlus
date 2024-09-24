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
    int first_number, second_number, gap_between_numbers;
    string comparison_result;

    //Invite, read, and save inputs
    cout << "Enter a first number." ;
    cout << endl; //line break
    cin >> first_number;

    cout << "Enter a second number. " ;
    cout << endl; //line break
    cin >> second_number;

    //Calculate
    (first_number != second_number) ?
        comparison_result = "distinct" :
        comparison_result = "similar";

    //Display output
    cout << endl; //line break

    cout << "You entered "
            << first_number
            << " and "
            << second_number;

    cout << endl; //Line break

    cout << "They are 2 "
            << comparison_result
            <<" numbers!";

    cout << endl; //Line break
}


