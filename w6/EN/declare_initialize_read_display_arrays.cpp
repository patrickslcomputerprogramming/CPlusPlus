//Declare and initialize and display an unidementional array
#include <iostream>
using namespace std;
int main()
{

    //Declare and initialize variables
    int i;
    float student_grades[10];

    //Save the elements of an array using the keyboard
    for (i=0; i<=9; i++){
        cout<<"Enter grade "<<i+1<<" : "<<endl;
        cin>>student_grades[i];
    }

    cout<<endl;

    //Display the elements of an array
    for (i=0; i<=9; i++)
        cout<<"Grade "<<i+1<<" = "<<student_grades[i]<<endl;

    cout<<endl;
}
