/*
READ a temperature in degrees Fahrenheit,
CALCULATE and WRITE this temperature in degree Celcius.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    float celcius_temp ;
    float fahrenheit_temp ;

    //Invite, read, and save inputs
    cout << "Enter a Temperature in degrees Fahrenheit: " ;
    cin >> fahrenheit_temp ;

    //Calculate
    celcius_temp  =  (fahrenheit_temp - 32)/1.8 ;

    //Display output
    cout << fahrenheit_temp << " degrees Fahrenheit corresponds to : " << celcius_temp << " degrees Celcius." ;
}
