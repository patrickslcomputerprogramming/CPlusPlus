/*
READ
CALCULATE and WRITE
*/
#include <iostream>
#include <limits>
using namespace std;
int main()
{
//Declare variables and constants and initialize
    int number_int;
    float number_float;
    char symbol;
    float sum_or_product(int nbr1, float nbr2, char sign);
    void restart_function();
//Invite, Read, Validate and Save input data
    //Number Int
    do{
        cout << "Enter a integer: "<< endl;
        cin >> number_int;

        if(!cin)
        {
            cout<<"You didn't enter a number:"<<endl;
            cin.clear(); //Reset cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
        }
    }while (!number_int);

        //Number Float
    do{
        cout << "Enter a float: " << endl;
        cin >> number_float;

        if(!cin)
        {
            cout<<"You didn't enter a number:"<<endl;
            cin.clear(); //Reset cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
        }
    }while (!number_float);

    //Symbol + or x
    do{
        cout << "Enter + or x to calculate sum or product of the 2 numbers"<<endl;
        cin >> symbol;

    if(symbol != '+' && symbol != 'x'){
      cout<<symbol<<" is not + or x: \n";
    }

    }while(symbol != '+' && symbol != 'x');
//Calculate
//Display output data
cout << number_int << " " << symbol << " " << number_float << " = " <<
sum_or_product(number_int, number_float, symbol);


//Re-run the program via a subprogram
restart_function();
}


/*
User-defined Function 1
Receives 1 integers, 1 decimal number, and 1 symbol between + and x as arguments;
Calculates and returns:
-the addition (sum) of the 2 numbers when the third argument is + ;
-the multiplication (product) of the 2 numbers when the third argument is x.
*/

float sum_or_product(int nbr1, float nbr2, char sign)
{
    // declare varibles
    float result;

    // calculate
    if(sign == '+')
    {
        result = nbr1 + nbr2;
    }
    else
    {
        result = nbr1 * nbr2;
    }
    // return output data
    cout<<endl;
    return result;
}

/*
User-defined Function 2
Does not receive arguments. Invite the user to answer, read, validate
and save the user answer in order to replay the program or not.
You can use exit(0) to stop the program and main() to replay it.
*/

void restart_function(){
//declare varibles
char to_restart;

//Invite, Read, Validate and Save input data
cout << endl;
cout << "Do you wish to restart the program, click Y to restart or any other key to stop. \n";
cin >> to_restart;

//calculate
if(to_restart == 'Y' || to_restart == 'y')
{
    main();
}

else{
    exit(0);
}
}


