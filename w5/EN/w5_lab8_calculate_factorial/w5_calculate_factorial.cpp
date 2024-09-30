/*
READ an integer,
CALCULATE and WRITE its factorial.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    int userNumberIs, i, factorialIs = 1;

    //Invite, read, and save inputs
    cout << "Enter an integer greater than 0. I will calculate and display its factorial!";
    cout << endl; //Line break
    cin >> userNumberIs;
    cout << endl; //Line break

    for(i=userNumberIs; i>=2; i--){
        //Calculate
        factorialIs = factorialIs * i;
    }

    //Display output
    cout << endl; //Line break
    cout << "Factorial of " << userNumberIs << " is " << factorialIs;
    cout << endl; //Line break
}
