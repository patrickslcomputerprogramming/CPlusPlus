//Program to demonstrate a structure.
#include <iostream>
using namespace std;
//Global Structure declaration (structure tag and members)
struct Student
{
    string name[2];
    int birthyear;
    int age;
};
//Main program
int main(){
    //Declare variables and initialize
    const int currentYear=2024;
    Student number1, number2;

    //Invite, Read, and Save input data
    //Fisrt student (student number 1)
    cout<<"Enter the first name of Student 1"<<endl;
    cin>>number1.name[0];
    cout<<"Enter the last name of Student 1"<<endl;
    cin>>number1.name[1];
    cout<<"Enter the birthyear of Student 1"<<endl;
    cin>>number1.birthyear;
    //Second student (student number 2)
    cout<<endl;
    cout<<"Enter the first name of Student 2"<<endl;
    cin>>number2.name[0];
    cout<<"Enter the last name of Student 2"<<endl;
    cin>>number2.name[1];
    cout<<"Enter the birthyear of Student 2"<<endl;
    cin>>number2.birthyear;

    //Calculate
    number1.age = currentYear - number1.birthyear;
    number2.age = currentYear - number2.birthyear;

    //Display output
    //Fisrt student (student number 1)
    cout<<endl<<"STUDENT1"<<endl;
    cout<<"Firstname : "<<number1.name[0]<<endl;
    cout<<"Lastname : "<<number1.name[1]<<endl;
    cout<<"Age : "<<number1.age<<endl;
    //Second student (student number 2)
    cout<<endl<<"STUDENT2"<<endl;
    cout<<"Firstname : "<<number2.name[0]<<endl;
    cout<<"Lastname : "<<number2.name[1]<<endl;
    cout<<"Age : "<<number2.age<<endl;
}
