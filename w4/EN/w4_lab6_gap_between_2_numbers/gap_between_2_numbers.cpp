/*
READ two numbers,
CALCULATE and WRITE the gap between them
using only 1 if statement.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    int first_number, second_number, gap_between_numbers;

    //Invite, read, and save inputs
    cout << "Enter a first number." ;
    cout << endl; //line break
    cin >> first_number;

    cout << "Enter a second number, different from the first number. " ;
    cout << endl; //line break
    cin >> second_number;

    //Calculate
    gap_between_numbers = first_number - second_number;
    if(first_number < second_number)
        gap_between_numbers = second_number - first_number;

    //Display output
    cout << endl; //line break

    cout << "The gap between "
            << first_number
            << " and "
            << second_number
            << " is "
            << gap_between_numbers;

    cout << endl; //Line break
}


