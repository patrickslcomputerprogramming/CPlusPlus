/*
READ a temperature in degrees Fahrenheit,
CALCULATE and WRITE this temperature in degree Celcius.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Display program title
    cout << "This program will READ a temperature in degrees Fahrenheit,"<<endl
         << "CALCULATE and WRITE this temperature in degree Celcius."<<endl<<endl;

    //Declare variables and constants and initialize
    float celcius_temp ;
    float fahrenheit_temp ;

    //Configure to display only 2 digits after decimal point
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Invite, read, and save inputs
    cout << "Enter a Temperature in degrees Fahrenheit: " << endl ;
    cin >> fahrenheit_temp ;

    //Calculate
    celcius_temp  =  (fahrenheit_temp - 32)/1.8 ;

    //Display output
    cout << endl << fahrenheit_temp << " degrees Fahrenheit corresponds to : " << celcius_temp << " degrees Celcius." << endl ;
}
