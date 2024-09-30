/*
READ a number,
CALCULATE and WRITE the first ten multiplication table of this number.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    int kid_number, i=1, mult_result;

    //Invite, read, and save inputs
    cout << "Enter a number that is between 2 and 9.";
    cout << endl; //Line break
    cin >> kid_number;
    cout << endl; //Line break

    while(i<=10){
        //Calculate
        mult_result = i * kid_number;
        //Display output
        cout << i << " * " << kid_number << " = " << mult_result;
        cout << endl; //Line break
        i++;
    }
}
