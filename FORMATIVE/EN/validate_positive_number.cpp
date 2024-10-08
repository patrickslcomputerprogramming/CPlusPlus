/*
READ a number until it is positive, using a loop.
CALCULATE and WRITE when it is greater than 0 or not,
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    float number_entered;

    do{
        //Invite, read, and save inputs
        cout << "Enter a number that is greater than zero: ";
        cout << endl; //Line break
        cin >> number_entered;
        //Calculate
        if (number_entered<=0){
            //Display outputs
            cout << endl; //Line break
            cout << "Number not greater than 0. Try again!";
            cout << endl; //Line break
        }
    } while (number_entered<=0);

    //Display outputs
    cout << endl; //Line break
    cout << "You entered "<< number_entered <<" that is greater than 0. Good job!";
    cout << endl; //Line break
}
