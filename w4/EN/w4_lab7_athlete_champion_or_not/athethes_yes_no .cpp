/*
READ two answers,
CALCULATE and WRITE an appropriate message
using only 1 if statement.
*/
#include <iostream>
using namespace std;
int main()
{
    //Declare variables and constants and initialize
    char answer1, answer2;
    string congrats_msg ="";
    string thanks_msg = "Thank you for participating in our sports game tournament!";

    //Invite, read, and save inputs
    cout << "Do you meet other athletes? (Y/N)";
    cout << endl; //Line break
    cin >> answer1;

    cout << endl; //Line break
    cout << "Do you win a medal? (Y/N)"<<endl;
    cin >> answer2;

    //Calculate
    if ((answer1=='Y' || answer1=='y') && (answer2=='Y' || answer2=='y'))
        congrats_msg = "You are a real champion!";

    //Display outputs
    cout << endl; //Line break
    cout<< thanks_msg << endl;
    cout<< congrats_msg << endl;
}



