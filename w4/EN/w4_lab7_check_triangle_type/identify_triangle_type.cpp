/*
READ 3 triangle sides,
CALCULATE and WRITE triangle type
using only if-else if-else statements.
*/
#include <iostream>
using namespace std;
int main()
{
    //Declare variables and constants and initialize
    string tri_unit, type_description, tri_type;
    float tri_side1, tri_side2, tri_side3;

    //Invite, read, and save inputs
    cout << "You will enter 3 numbers that are the lenght of the 3 sides of your triangle"<<endl;
    cout << "And I will identify its type: equilateral, isoceles, or scalene"<<endl;
    cout <<endl<<"What is the unit of the sides of your triangle: km, m, dm, cm ?"<<endl;
    cin >> tri_unit;
    cout <<endl<<"What is the lenght of the 1st side of your triangle"<<endl;
    cin >> tri_side1;
    cout <<endl<<"What is the lenght of the 2nd side of your triangle"<<endl;
    cin >> tri_side2;
    cout <<endl<<"What is the lenght of the 3rd side of your triangle"<<endl;
    cin >> tri_side3;

    //Calculate
    if (tri_side1==tri_side2 && tri_side1==tri_side3) {
        tri_type = "equilateral";
        type_description = "3 sides of equal length";
    }
    else if (tri_side1!=tri_side2 && tri_side1!=tri_side3 && tri_side2!=tri_side3) {
        tri_type = "scalene";
        type_description = "3 sides of unequal length";
    }
    else {
        tri_type = "isosceles";
        type_description = "2 sides of equal length";
    }

    //Display output
    cout<<endl<<"The sides of your triangle are "<<tri_side1<<" "<<tri_unit<<", "
                                                 <<tri_side2<<" "<<tri_unit<<", and "
                                                 <<tri_side3<<" "<<tri_unit<<".";
    cout<<endl<<"Consequently, it is "<<tri_type<<" because it includes "<<type_description<<".";
    cout << endl; //line break
}



