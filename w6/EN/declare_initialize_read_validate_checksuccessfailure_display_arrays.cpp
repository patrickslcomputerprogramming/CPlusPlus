//Declare and initialize and display an unidementional array
#include <iostream>
using namespace std;
int main()
{

    //Declare and initialize variables
    const int passing_grade = 60;

    int i;
    int array_size = 0;
    float student_grades[array_size];
    float user_typing;
    int success = 0, failure = 0;
    float sum_grades = 0;
    float average_grades;

    //Invite the user to write the number of grades to save (size of the array)
    cout<<"How many grades would you like to enter?"<<endl;
    cin>>array_size;

    cout<<endl;
    //Save the elements of an array using the keyboard
    for (i=0; i<array_size; i++){
        //Invite, read, and validate each grade
        do{
            cout<<"Enter grade "<<i+1<<" : "<<endl;
            cin>>user_typing;

            if(user_typing<0 or user_typing>100)
                cout<<"Error!!! ";
        }while (user_typing<0 or user_typing>100);

        //Save each grade to the array
        student_grades[i]= user_typing;

        //Count success and failure according to the passing grade
        if (student_grades[i]>=passing_grade)
            success = success + 1;
        else
            failure = failure + 1;

        //Calculate the sum of the grades
        sum_grades = sum_grades + student_grades[i];
    }

    //Calculate the average
    average_grades = sum_grades/array_size;

    cout<<endl;
    //Display the elements of an array
    for (i=0; i<array_size; i++)
           cout<<i+1<<" = "<<student_grades[i]<<endl;

    cout<<endl;

    //Display success, failure and average
    cout<<"Average = "<<average_grades<<endl;
    cout<<"Amount of success = "<<success<<endl;
    cout<<"Amount of failure = "<<failure<<endl;

}
