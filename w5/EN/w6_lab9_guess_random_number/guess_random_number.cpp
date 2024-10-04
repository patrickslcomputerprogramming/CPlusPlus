/*
READ 1 digit between 0 and 6.
CALCULATE if it is equivalent to a digit generated randomly
and repeat this process 6 times to WRITE at the end a WIn or Failure message,
including the digit generated and the quantity of tries to guess it.
*/
#include <iostream>
#include<time.h>
using namespace std;
int main()
{
    //Declare variables and constants and initialize
    int nbr_iterations = 5;
    int user_digit;
    int  count_failure = 0;
    int random_digit;

    //Calculate
    //Generate a random digit from 0 to 6
    srand(time(0));  //The library #include<time.h> is required to run this code
    random_digit = rand()%6;

    do{
        //Invite, read, and save inputs
        cout<<endl<<"Enter a digit from 0 to 6 to guess the one the system just generated."<<endl;
        cin>>user_digit;

        //Calulate
        //Display outputs
        //Message for winners
        if (user_digit == random_digit){
            cout<<endl<<"You WINNED!!!"<<endl;
            break;
        }

        //Count re-tries
        count_failure = count_failure + 1;

        //Message for loosers
        if (nbr_iterations == 1)
            cout<<endl<<"You FAILED! Try again!"<<endl;

        nbr_iterations=nbr_iterations - 1;
    } while (nbr_iterations > 0 && nbr_iterations <= 5);

    //Display outputs
    cout<<"Random digit: "<<random_digit<<endl;
    cout<<"Number of failures: "<<count_failure<<endl;
}
