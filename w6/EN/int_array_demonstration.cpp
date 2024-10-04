//Unidimensional Arrays - Introduction
#include <iostream>
using namespace std;
int main()
{
    //Declare and initialize variables
    int i, number_of_ages, last_element_index;
    float average_ages, sum_ages;
    //Array elements datatype must be the same
    int set_of_ages [5] = {25, 52, 70, 20, 19};

    //Calculate
    //Use a numbered index to access each array element, starting from 0 for the 1st element
    sum_ages = set_of_ages[0]+set_of_ages[1]+set_of_ages[2];
    //Number of array elements
    number_of_ages = sizeof (set_of_ages)/sizeof (set_of_ages[0]);
    //Average
    average_ages = sum_ages / number_of_ages;
    //Index of last element
    last_element_index = (sizeof (set_of_ages)/sizeof (set_of_ages[0])) - 1;

    //Display outputs
    //Display 1 array element
    cout<<"First age in the array: "<< set_of_ages[0];
    cout<<endl; //Line break
    cout<<"Last age in the array: "<<set_of_ages[last_element_index];
    cout<<endl; //Line break
    cout<<endl; //Line break

    //Display all array elements (A loop must be used)
    for (i=0; i<number_of_ages; i++){
        cout<<"Age #" << i+1 << " in the array " << set_of_ages[i];
        cout<<endl; //Line break
    }

    //Display sum and average of hour salaries
    cout<<endl; //Line break
    cout<<"Sum ages: "<< sum_ages;
    cout<<endl; //Line break
    cout<<endl; //Line break
    cout<<"Average ages: "<< average_ages;
    cout<<endl; //Line break
}
