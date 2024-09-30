/*
READ 2 numbers,
CALCULATE and WRITE their sum, gap, product and average.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    char replayOrNot;

    do{
        //Declare variables and constants and initialize
        float number1;
        float number2;
        float sum_numbers;
        float abs_numbers;
        float product_numbers;
        float avg_numbers;

        //Invite, read, and save inputs
        cout << "Enter a first number" ;
        cout << endl; //line break
        cin >> number1;
        cout << "Enter a second number" ;
        cout << endl; //line break
        cin >> number2;
        cout << endl; //line break

        //Calculate
        sum_numbers = number1 + number2;
        abs_numbers = abs (number1 - number2);
        product_numbers = number1 * number2;
        avg_numbers = sum_numbers / 2;

        //Display output
        cout << "NUMBER 1 = " << number1;
        cout << endl; //line break
        cout << "NUMBER 2 = " << number2;
        cout << endl; //line break
        cout << "SUM = " << sum_numbers;
        cout << endl; //line break
        cout << "ABS = " << abs_numbers;
        cout << endl; //line break
        cout << "PRODUCT = " << product_numbers;
        cout << endl; //line break
        cout << "AVG = " << avg_numbers;
        cout << endl; //line break

        //Invite, read, and save inputs
        cout << endl; //line break
        cout << "Do you want to replay the program? (Y/N)";
        cout << endl; //line break
        cin >> replayOrNot;
        cout << endl; //line break

        //Calculate
        if (replayOrNot=='N' || replayOrNot=='n'){
            cout << "Goodbye! ";
            cout << endl; //line break
        }

    //Calculate
    }while (replayOrNot=='Y' || replayOrNot=='y');
}

