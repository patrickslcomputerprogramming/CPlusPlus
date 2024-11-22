/*
Program that reads information about a conference,
save it within a structure, and display it.
*/
#include <iostream>
using namespace std ;
//Declare global variable
//Declare structure conference
struct Conference{
    string name;
    string location;
    int duration[3];
};

//Main program
int main ()
{
     //Declare variables
     Conference current_conf;
     string time_elements[]={"Hours", "Minutes", "Seconds"};
     int i;

     //Invite,read, and save input data
     cout<<"COLLECT INPUT DATA"<<endl;
     cout << "Enter the name: " << endl;
     cin >> current_conf.name;

     cout << "Enter the location: " << endl;
     cin >> current_conf.location;

     cout << "Enter the duration." << endl;
     for (i=0; i<3; i++){
         cout << "Enter " <<time_elements[i]<<": "<<endl;
         cin >> current_conf.duration[i];
     }

    //Display output data
    cout<< "OUTPUT DATA"<<endl;
    cout << "The conference name is     -> " << current_conf.name << endl;
    cout << "The conference location is -> " << current_conf.location << endl;
    cout << "The conference duration is -> " << current_conf.duration[0] << ":"
        << current_conf.duration[1] << ":" << current_conf.duration[2] <<" H"<<endl;
}
