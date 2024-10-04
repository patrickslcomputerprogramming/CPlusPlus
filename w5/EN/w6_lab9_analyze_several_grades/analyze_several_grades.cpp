/*
READ several grades on 100%.
CALCULATE and WRITE the number of grades, the number of grades greater or equal to 60%,
the number of grades lower that 60%, the highest and lowest grade,
using a loop and conditions.
*/
#include <iostream>
#include<time.h>
using namespace std;
int main()
{
    //Declare variables and constants and initialize
    int i, amountOfGrades, amountOfFailure, amountOfSuccess=0;
    float oneSingleGrade, highestGrade, lowestGrade;

    //Invite, read, and save inputs
    cout<<"Please, enter below the quantity of grades on 100% you want to analyze."<<endl;
    cin>>amountOfGrades;

    for (i=1; i<=amountOfGrades; i++){

        //Invite, read, and save inputs
        cout<<endl<<"Enter the grade #"<<i<<" on 100%"<<endl;
        cin>>oneSingleGrade;

        //Calulate

        //Identify the highest and the lowest grades
        //Consider the 1st grade read as the greatest and the lowest (reference)
        if (i==1){
            highestGrade = oneSingleGrade;
            lowestGrade = oneSingleGrade;
        }
        //Highest grade
        if (oneSingleGrade>highestGrade)
            highestGrade=oneSingleGrade;
        //Lowest grade
        else if (oneSingleGrade<lowestGrade)
            lowestGrade=oneSingleGrade;

        //Count quantity of grades >= 60 (Success)
        if (oneSingleGrade<60)
            continue;
        amountOfSuccess = amountOfSuccess + 1;
    }

    //Calculate
    //Count quantity of grades < 60 (Failure)
    amountOfFailure = amountOfGrades - amountOfSuccess;

    //Display outputs
    cout<<endl; //Line break
    cout<< "Number of grades read: " << amountOfGrades;
    cout<<endl; //Line break
    cout<< "Number of grades that are greater than or equal to 60% (Success!): " << amountOfSuccess;
    cout<<endl; //Line break
    cout<<"Number of grades lower than 60% (Failure!): " << amountOfFailure;
    cout<<endl; //Line break
    cout<< "Highest grade: " << highestGrade;
    cout<<endl; //Line break
    cout<<"Lowest grade: " << lowestGrade;
    cout<<endl; //Line break
}
