/*
READ a number until it is positive, using a loop.
CALCULATE and WRITE when it greater than 0 or not,
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    float numberOne, numberTwo ;
    string comparison_result ;

    //Invite, read, and save inputs
    //Number 1
    cout << "Enter a first number: ";
    cout << endl; //Line break
    cin >> numberOne;
    cout << endl; //Line break
    //Number 2
    cout << "Enter a second number: ";
    cout << endl; //Line break
    cin >> numberTwo;
    cout << endl; //Line break

    //Calculate
    //Both numbers are greater than or equal to zero
    if(numberOne>=0 && numberTwo>=0)
        comparison_result = "Both numbers are greater than or equal to zero";
    //Only one of the 2 numbers is greater than or equal to zero
    else if (numberOne>=0 || numberTwo>=0)
        comparison_result = "Only one of the 2 numbers is greater than or equal to zero";
    //Neither of the 2 numbers is greater than or equal to zero
    else
        comparison_result = "Neither of the 2 numbers is greater than or equal to zero";

    //Display outputs
    cout << comparison_result;
    cout << endl; //Line break
}
