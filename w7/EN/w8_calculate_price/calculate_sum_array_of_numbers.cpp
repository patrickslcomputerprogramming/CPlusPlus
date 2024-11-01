/*
Program that, includes 2 sub-programs,
used to READ 2 numbers
CALCULATE and SAVE their sum.
*/
#include <iostream>
using namespace std ;
//Declare global variables and constants and initialize
float calculateTotalPrice(float subTotal, float gstTaxRate=0.05, float tvqTaxRate=0.09975);
void replayOrNot();
//Main Program
int main()
{
    //Declare variables and constants and initialize
    float subtotalPrice;
    char includeTaxesOrNot;

    //Invite, read, and save inputs
    cout<<"What is the subtotal price of your purchase? ";
    cin>>subtotalPrice;
    cout<<endl; //Line break
    cout<<"Do you pay the taxes (Y/N) ? ";
    cin>>includeTaxesOrNot;
    cout<<endl; //Line break

    //Calcultate via a subprogram
    //Display outputs
    cout<<"The total price of your purchase is: ";
    //To demonstrate the use of the default values for the arguments
    if (includeTaxesOrNot=='Y')
        cout<<calculateTotalPrice(subtotalPrice);
    else
        cout<<calculateTotalPrice(subtotalPrice, 0, 0);

    cout<<endl; //Line break

    //Re-run the program via a subprogram
    replayOrNot();
}

//Sub-Program to calculate the tax price
float calculateTotalPrice(float subTotal, float gstTaxRate, float tvqTaxRate) {
    //Declare variables and constants and initialize
    float total;

    //Calculate
    total = subTotal + (subTotal * gstTaxRate) + (subTotal * tvqTaxRate);

    //Return outputs
    return total;
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
