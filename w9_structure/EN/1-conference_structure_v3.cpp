//Program that read conference information using structures and array
#include <iostream>
#include <iomanip>
using namespace std;

//Global variables
//Structure declaration (structure tag and members)
struct Conference
{
    string name;
    string location;
    int duration [3];
};

int main( )
{
    //Declare and Intitialize variables
    Conference summer;

    //Invite, Read, and Save Inputs
    cout<<"Enter the conference name for summer"<<endl;
    cin>>summer.name;
    cout<<"Enter the conference location for summer"<<endl;
    cin>>summer.location;

    cout<<"Enter the conference duration for summer"<<endl;

    do{
        cout<<"Hours (Must be Greater than 0)                     :";
        cin>>summer.duration[0];
    }while (summer.duration[0]<0);

    do{
        cout<<"Minutes (Must be Greater than 0 and Lower than 61) :";
        cin>>summer.duration[1];
    }while (summer.duration[1]<0 || summer.duration[1]>60);

    do{
        cout<<"Seconds (Must be Greater than 0 and Lower than 61) :";
        cin>>summer.duration[2];
    }while (summer.duration[2]<0 || summer.duration[2]>60);

    //Display Outputs
    cout<<endl<<"SUMMER CONFERENCE "<<endl;
    cout<<"Conference Name                 : "<<summer.name<<endl;
    cout<<"Conference Location             : "<<summer.location<<endl;
    cout<<"Conference Duration (HH:MM:SS)  : "<<summer.duration[0]<<":"<<summer.duration[1]<<":"<<summer.duration[2]<<endl;
}


