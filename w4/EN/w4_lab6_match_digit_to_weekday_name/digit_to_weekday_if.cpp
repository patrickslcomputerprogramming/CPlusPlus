#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    int day_number ;
    string day_name;

    //Invite, read, and save inputs
    cout << "Enter a weekday number from 1 to 7. I will show the weekday name that corresponds to it." ;
    cout << endl; //Line break
    cin >> day_number;


    //Calculate
    if (day_number==1)
        day_name = "Monday";
    else if (day_number==2)
        day_name = "Tuesday";
    else if (day_number==3)
        day_name = "Wednesday";
    else if (day_number==4)
        day_name = "Thursday";
    else if (day_number==5)
        day_name = "Friday";
    else if (day_number==6)
        day_name = "Saturday";
    else if (day_number==7)
        day_name = "Sunday";
    else
        day_name = "not a weekday number that must be between 1 and 7";

    //Display output
    cout << endl; //Line break
    cout << "You entered the number "<<day_number<<" that is "<<day_name<<"." ;
    cout << endl; //Line break
}



