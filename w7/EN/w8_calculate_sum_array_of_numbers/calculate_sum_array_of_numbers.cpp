/*
Program that, includes 2 sub-programs,
used to READ 2 numbers
CALCULATE and SAVE their sum.
*/
#include <iostream>
using namespace std ;
//Declare global variables and constants and initialize
float calculate_sum(float arrayOfNumbers[], int quantityOfArrayElements);
void replayOrNot();
//Main Program
int main()
{
    //Declare variables and constants and initialize
    int quantityOfNumbers;
    int i;
    float sumOfNumbers;

    //Invite, read, and save inputs
    cout<<"How many numbers will you write: ";
    cin>>quantityOfNumbers;
    cout<<endl; //Line break

    //Declare variables and constants and initialize
    float setOfNumbers[quantityOfNumbers];

    //Invite, read, and save inputs
    for (i=0; i<quantityOfNumbers; i++){
        cout<<"Enter the number #:"<<i+1<<" : ";
        cin>>setOfNumbers[i];
    }

    //Calcultate via a subprogram
    //Display outputs
    cout<<endl; //Line break
    cout<<"The "<<quantityOfNumbers<<" numbers entered are : ";
    for (i=0; i<quantityOfNumbers; i++){
        cout<<setOfNumbers[i]<<"   ";
    }
    cout<<endl; //Line break
    cout<<"Their sum is equal to: "<<calculate_sum(setOfNumbers, quantityOfNumbers);
    cout<<endl; //Line break

    //Re-run the program via a subprogram
    replayOrNot();
}

//Sub-Program to calculate the sum of a set of numbers within an array
float calculate_sum(float arrayOfNumbers[], int quantityOfArrayElements) {
    //Declare variables and constants and initialize
    int i;
    float sumOfArrayElements = 0;

    //Display outputs
    for (i=0; i<quantityOfArrayElements; i++){
        sumOfArrayElements = sumOfArrayElements + arrayOfNumbers[i];
    }

    //Return outputs
    return sumOfArrayElements;
}

//Sub-Program to re-run or not the Main Program
void replayOrNot(){
    //Declare variables and constants and initialize
    char response;

    //Invite, read, and save inputs
    cout<<endl; //Line break
    cout<<"Do you want to replay the program?"<<endl
        <<"Press Y to replay or any other key to quit: ";
    cin>>response;
    cout<<endl; //Line break

    //Calculate and return
    //Display outputs
    if (response == 'Y'|| response == 'y'){
        main();
    }
    else{
        cout<<"Goodbye! Hope to see you again soon!";
        cout<<endl; //Line break
        return;
    }
}
