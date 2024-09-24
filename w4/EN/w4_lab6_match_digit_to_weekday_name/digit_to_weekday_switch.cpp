#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    int day_number ;
    string day_name;

    //Invite, read, and save inputs
    cout << "Enter a weekday number from 1 to 7. I will show the weekday name that corresponds to it." ;
    cout << endl; //line break
    cin >> day_number;


    //Calculate
    switch (day_number){
        case 1 :
            day_name = "Monday";
            break;
        case 2:
            day_name = "Tuesday";
            break;
        case 3:
            day_name = "Wednesday";
            break;
        case 4:
            day_name = "Thursday";
            break;
        case 5:
            day_name = "Friday";
            break;
        case 6:
            day_name = "Saturday";
            break;
        case 7:
            day_name = "Sunday";
            break;
        default:
            day_name = "not a weekday number that must be between 1 and 7";
    }

    //Display output
    cout << endl; //line break
    cout << "You entered the number "<<day_number<<" that is "<<day_name<<"." ;
    cout << endl; //line break
}
