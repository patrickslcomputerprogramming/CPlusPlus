#include <iostream>
using namespace std;
//Declare global variables
struct distance
{
    float feet;
    float inches;
};

struct room
{
    struct distance length;
    struct distance width;
    struct distance area;
};


int main( )
{
    //Declare variables
    void lire_length_width (room &calcul_area1);
    void calculer_area (room &calcul_area1);
    room saisie1;
    //Invite, Read, and Save input data
    lire_length_width(saisie1);
    //Calculate
    //Display output data
    calculer_area(saisie1);
}

//Function to collect input data
void lire_length_width (room &calcul_area1)
{
    cout<<endl<<"COLLECT INPUT DATA"<<endl;
    //Invite, Read, and Save input data
    cout<<"Enter the part of the LENGHT of the room that is calculated in feet: "<<endl;
    cin>>calcul_area1.length.feet;
    cout<<"Enter the part of the LENGHT of the room that is calculated in inches: "<<endl;
    cin>>calcul_area1.length.inches;
    cout<<endl;
    cout<<"Enter the part of the WIDTH of the room that is calculated in feet: "<<endl;
    cin>>calcul_area1.width.feet;
    cout<<"Enter the part of the WIDTH of the room that is calculated in inches: "<<endl;
    cin>>calcul_area1.width.inches;
}

//Function to calculate and display output data
void calculer_area (room &calcul_area1)
{
    //Calculate and save area in feet
    calcul_area1.area.feet = ((calcul_area1.length.feet+(calcul_area1.length.inches/12))
            * (calcul_area1.width.feet+(calcul_area1.width.inches/12)));
    //Calculate and save area in inches
    calcul_area1.area.inches = (((calcul_area1.length.feet * 12) + calcul_area1.length.inches)
            * ((calcul_area1.width.feet * 12) + calcul_area1.width.inches));
    //Display outputs data
    cout<<endl<<"DISPLAY OUTPUT DATA"<<endl;
    cout<<"Area of room = "<<calcul_area1.area.feet<<" square feet OR "<<calcul_area1.area.inches<<" square inches\n";
}


