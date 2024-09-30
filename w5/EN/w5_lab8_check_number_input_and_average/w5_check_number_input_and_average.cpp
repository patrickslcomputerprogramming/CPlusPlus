/*
READ an indicated quantity of numbers,
CALCULATE and WRITE their sum and average.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    float eachnumber, numbersSum=0, numbersAverage;
    int numbersQuantity, i;

    //Invite, read, and save inputs
    cout << "How many numbers are there in your dataset?";
    cout << endl; //Line break
    cin >> numbersQuantity;
    cout << endl; //Line break

    for(i=1; i<=numbersQuantity; i++){
        //Invite, read, and save inputs
        cout << "Enter number #" << i;
        cout << endl; //Line break
        cin >> eachnumber;

        //Calculate
        numbersSum = numbersSum + eachnumber;
    }

    //Calculate
    numbersAverage = numbersSum / numbersQuantity;

    //Display output
    cout << endl; //Line break
    cout << "Quantity of numbers : " << numbersQuantity << endl;
    cout << "Sum of numbers : " << numbersSum << endl;
    cout << "Average of numbers : " << numbersAverage << endl;
    cout << endl; //Line break
}
