/*
READ and integer,
CALCULATE and WRITE if this integer is a mi=ultiple of 2 or 3
using if-else if-else statements.
*/
#include <iostream>
using namespace std;
int main()
{
    //Declare variables and constants and initialize
    int user_interger;
    string check_result;

    //Invite, read, and save inputs
    cout<<"Enter an integer.";
    cout << endl; //Line break
    cin>>user_interger;

    //Calculate
    if (user_interger%2==0 && user_interger%3==0)
        check_result = "a multiple of both 2 and 3";
    else if (user_interger%2==0)
        check_result = "a multiple of 2";
    else if (user_interger%3==0)
        check_result = "a multiple of 3";
    else
        check_result = "not a multiple of 2 neither a multiple of 3";

    //Display outputs
    cout << endl; //Line break
    cout<< "You entered " << user_interger << " and this number is "<< check_result << ".";
    cout << endl; //Line break
}




