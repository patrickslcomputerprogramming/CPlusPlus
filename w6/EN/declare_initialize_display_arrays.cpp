//Declare and initialize and display an unidementional array
#include <iostream>
using namespace std;
int main()
{

    //Declare and initialize variables
    int i;
    float student_grades[7]={10, 20, 30, 40, 50, 60, 70};

    //Display the elements of an array
    for (i=0; i<=6; i++)
        cout<<"Grade "<<i+1<<" = "<<student_grades[i]<<endl;

    cout<<endl;
}
