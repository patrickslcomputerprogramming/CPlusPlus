//Unidimensional Arrays - Introduction
#include <iostream>
using namespace std;
int main()
{
    //Declare and initialize variables
    int i, number_of_salaries, last_element_index;
    float average_hour_salaries, sum_hour_salaries;
    //Array elements datatype must be the same
    float set_of_hour_salaries [3] = {50.20, 25.60, 70.90};

    //Calculate
    //Use a numbered index to access each array element, starting from 0 for the 1st element
    sum_hour_salaries = set_of_hour_salaries[0]+set_of_hour_salaries[1]+set_of_hour_salaries[2];
    //Number of array elements
    number_of_salaries = sizeof (set_of_hour_salaries)/sizeof (set_of_hour_salaries[0]);
    //Average
    average_hour_salaries = sum_hour_salaries / number_of_salaries;
    //Index of last element
    last_element_index = (sizeof (set_of_hour_salaries)/sizeof (set_of_hour_salaries[0])) - 1;

    //Display outputs
    //Display 1 array element
    cout<<"First salary in the array: "<< set_of_hour_salaries[0];
    cout<<endl; //Line break
    cout<<"Last salary in the array: "<<set_of_hour_salaries[last_element_index];
    cout<<endl; //Line break
    cout<<endl; //Line break

    //Display all array elements (A loop must be used)
    for (i=0; i<number_of_salaries; i++){
        cout<<"Salary #" << i+1 << " in the array " << set_of_hour_salaries[i];
        cout<<endl; //Line break
    }

    //Display sum and average of hour salaries
    cout<<endl; //Line break
    cout<<"Sum hour salary: "<< sum_hour_salaries;
    cout<<endl; //Line break
    cout<<endl; //Line break
    cout<<"Average hour salary: "<< average_hour_salaries;
    cout<<endl; //Line break
}
