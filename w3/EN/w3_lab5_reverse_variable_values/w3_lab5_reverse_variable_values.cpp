/*
Program that reads and saves 2 numbers in 2 variables
and reverse the values saved in the variables
*/
#include <iostream>
using namespace std;
int main()
{
//Declare and Initialize Variables
int nbr1, nbr2;

//Invite Read and Save inputs
cout<<"Enter a 1st number"<<endl;
cin>>nbr1;
cout<<"Enter a 2nd number different than the 1st one"<<endl;
cin>>nbr2;

//Display Outputs 1
cout<<endl<<"I saved " << nbr1<<" in a variable named nbr1.\n";
cout<<"I saved "<<nbr2<<" in a variable named nbr2.\n";
cout<<"Now, I will reverse the values saved in nbr1 and nbr2,\n";
cout<<"using these 3 operations: nbr1=nbr1+nbr2, nbr2=nbr1-nbr2, and nbr1=nbr1-nbr2.\n";

//Conduct Calculations
nbr1=nbr1+nbr2;
nbr2=nbr1-nbr2;
nbr1=nbr1-nbr2;

//Display Outputs 2
cout<<endl<<"At the end nbr1 is equal to : "<<nbr1<<" and nbr2 is equal to: "<<nbr2<<"."<<endl;
}
