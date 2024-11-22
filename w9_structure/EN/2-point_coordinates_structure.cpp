//Send to the fct the structure variable value
#include <iostream>
using namespace std ;

struct Point
{
    char name ;
    float xAxis, yAxis ;
} ;

main()
{
    //Declare variables
    void display_info (Point current_point) ;

    //Create a variable from the structure point
    Point a_point ;

    //Input values for the structure variables
    cout<<"Enter the name of your point (i.e A,B,C...):"<<endl;
    cin>>a_point.name;
    cout<<"Enter the abscissa (x-axis) of your point :"<<endl;
    cin>>a_point.xAxis;
    cout<<"Enter the ordinate (y-axis) of your point :"<<endl;
    cin>>a_point.yAxis;

    //Call a function to display the values assigned
    display_info (a_point);
}

void display_info (Point current_point)
{
    //Display output data
    cout <<endl<<"There is your point coordinate below:"<<endl;
    cout<<current_point.name<< "("<< current_point.xAxis << "," <<current_point.yAxis << ")"<<endl;
}
