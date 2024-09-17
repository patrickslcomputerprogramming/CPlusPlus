/*
READ the side of a square in meters,
CALCULATE and WRITE the perimeter of this square in meters
and the area of this square in square meters.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    float square_side;
    float square_perimeter;
    float square_area;

    //Invite, read, and save inputs
    cout << "Enter the side of the square in meters" ;
    cout << endl; //line break
    cin >> square_side;

    //Calculate
    square_perimeter = square_side * 4;
    square_area = square_side * square_side;

    //Display output
    cout << endl; //line break
    cout << "The perimeter of the square in meters is " << endl << square_perimeter;
    cout << endl; //line break
    cout << "The area of the square in square meters is "<< endl << square_area;
    cout << endl; //line break
}

