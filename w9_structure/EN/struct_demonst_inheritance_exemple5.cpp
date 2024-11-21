//Program to demonstrate a structure.
#include <iostream>
using namespace std;
//Global Structure declaration (structure tag and members)
struct Student
{
    const int currentYear=2024;
    string name[2];
    int birthyear;

    int calculate_age(){
        int age;
        age = currentYear - birthyear;
        return age;
    }
};

struct Employee : Student {
    float salary;
};

//Main program
int main(){
    //Declare variables and initialize

    Employee currentEmployee;

    //Invite, Read, and Save input data
    //Fisrt student (student number 1)
    cout<<"Enter the Employee's firstname"<<endl;
    cin>>currentEmployee.name[0];
    cout<<"Enter the Employee's lastname "<<endl;
    cin>>currentEmployee.name[1];
    cout<<"Enter the Employee's birthyear"<<endl;
    cin>>currentEmployee.birthyear;
    cout<<"Enter the Employee's salary"<<endl;
    cin>>currentEmployee.salary;

    //Display output
    //Current employee
    cout<<endl<<"CURRENT EMPLOYEE"<<endl;
    cout<<"Firstname : "<<currentEmployee.name[0]<<endl;
    cout<<"Lastname : "<<currentEmployee.name[1]<<endl;
    cout<<"Age : "<<currentEmployee.calculate_age()<<endl;
    cout<<"Salary : "<<currentEmployee.salary<<" $CA"<<endl;
}
