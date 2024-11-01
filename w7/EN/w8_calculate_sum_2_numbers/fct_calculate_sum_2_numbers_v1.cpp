/*
Program that, includes 2 sub-programs,
used to READ 2 numbers
CALCULATE and SAVE their sum.
*/
#include <iostream>
using namespace std ;
//Declare global variables and constants and initialize
void calculate_sum(float nbr1, float nbr2);
void replayOrNot();
//Main Program
int main()
{
    //Declare variables and constants and initialize
    float number1, number2;

    //Invite, read, and save inputs
    cout<<"Enter a first number: ";
    cin>>number1;
    cout<<endl; //Line break
    cout<<"Enter a second number: ";
    cin>>number2;
    cout<<endl; //Line break

    //Call a subprogram to Display outputs
    calculate_sum(number1, number2);

    //Call a subprogram to re-run the program
    replayOrNot();
}

//Sub-Program to calculate the sum of 2 numbers
void calculate_sum(float nbr1, float nbr2) {
    //Declare variables and constants and initialize
    float sum_nbr;

    //Calculate
    sum_nbr = nbr1 + nbr2;

    //Display outputs
    cout<<nbr1<<" + "<<nbr2<<" = "<<sum_nbr;
    cout<<endl; //Line break
}

//Sub-Program to save the choice to re-run or not the Main Program
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
