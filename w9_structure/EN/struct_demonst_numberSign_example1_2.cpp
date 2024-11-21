//Program to demonstrate a structure.
#include <iostream>
using namespace std;
//Global Structure declaration (structure tag and members)
struct Student
{
    string name[2];
    int birthyear;
    int age;
}number1 ;
//Main program
int main(){
    //Declare variables and initialize
    const int currentYear=2024;

    //Invite, Read, and Save input data
    //Fisrt student (student number 1)
    cout<<"Enter the first name of Student 1"<<endl;
    cin>>number1.name[0];
    cout<<"Enter the last name of Student 1"<<endl;
    cin>>number1.name[1];
    cout<<"Enter the birthyear of Student 1"<<endl;
    cin>>number1.birthyear;

    //Calculate
    number1.age = currentYear - number1.birthyear;

    //Display output
    //Fisrt student (student number 1)
    cout<<endl<<"STUDENT1"<<endl;
    cout<<"Firstname : "<<number1.name[0]<<endl;
    cout<<"Lastname : "<<number1.name[1]<<endl;
    cout<<"Age : "<<number1.age<<endl;
}
