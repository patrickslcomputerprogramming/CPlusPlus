//Create stucture members that are of type structure
#include <iostream>
using namespace std ;
//Global Variables
//Structures
struct Date
{
   int month;
   int year;
} ;

struct Person
{
   string name;
   struct Date  hiring_date;
   struct Date  job_date;
} ;
//Variables
int nbrEmployees;
void readInfoEmployee ();
void readNbrEmployee ();
void displayInfoEmployee (Person emp[]);


//Main program
main()
{
    //Invite, Read and Save
    //Display Outputs
    readNbrEmployee ();
    readInfoEmployee ();
}

//User-defined Function to read information about the employees
void readInfoEmployee ()
{
    //Declare and initialize Variables
    Person employee[nbrEmployees] ;

    char answerYN;
    int i;
    //Invite, Read, and Save Inputs
    cout<<"Write info about "<<nbrEmployees<<" employees, I'll display them";
    for (i=0; i<nbrEmployees; i++){
        cout<<endl<<"Enter the name of the employee #"<<i+1<<endl;
        cin>>employee[i].name;
        cout<<"Enter the hiring date of the employee #"<<i+1<<endl;
        cout<<"Month: ";
        cin>>employee[i].hiring_date.month;
        cout<<"Year: ";
        cin>>employee[i].hiring_date.year;

        cout<<"Does the hiring date is the same than the job date? (y/n)"<<endl;
        cin>>answerYN;
        if (answerYN=='y' or answerYN=='Y'){
            employee[i].job_date.month = employee[i].hiring_date.month;
            employee[i].job_date.year = employee[i].hiring_date.year;
        }
        else{
        cout<<"Enter the job date of the employee #"<<i+1<<endl;
        cout<<"Month: ";
        cin>>employee[i].job_date.month;
        cout<<"Year: ";
        cin>>employee[i].job_date.year;
        }
    }
    displayInfoEmployee (employee);
}

//User-defined Function to read the number of employees
void readNbrEmployee (){
    //Invite, Read, and Save Inputs
    cout<<"How many employees do you want to record?"<<endl;
    cin>>nbrEmployees;
}

//User-defined Function to display information
void displayInfoEmployee (Person emp[])
{
    //Declare Variables
    int i;
    //Invite, Read, and Save Inputs
    for (i=0; i<nbrEmployees; i++){
        cout<<endl<<"RESULTS for employee #"<<i+1<<endl;
        cout<<"Name               \t: "<<emp[i].name<<endl;
        cout<<"Hiring Date (MM:YYYY)\t: "<<emp[i].hiring_date.month<<"/"<<emp[i].hiring_date.year<<endl;
        cout<<"Job Date    (MM:YYYY)\t: "<<emp[i].job_date.month<<"/"<<emp[i].job_date.year<<endl<<endl;
    }
}
