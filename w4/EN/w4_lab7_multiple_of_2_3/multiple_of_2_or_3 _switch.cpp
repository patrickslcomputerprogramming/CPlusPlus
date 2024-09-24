/*
READ and integer,
CALCULATE and WRITE if this integer is a mi=ultiple of 2 or 3
using switch statements.
*/
#include <iostream>
using namespace std;
int main()
{
    //Declare variables and constants and initialize
    int user_interger;
    string check_result;

    //Invite, read, and save inputs
    cout<<"Enter an integer.";
    cout << endl; //Line break
    cin>>user_interger;

    //Calculate
    switch(user_interger%2==0 && user_interger%3==0){
        case true:
            check_result = "a multiple of both 2 and 3";
            break;
        case false :
            switch(user_interger%2==0 && user_interger%3!=0){
                case true:
                    check_result = "a multiple of 2";
                    break;
                case false:
                    switch(user_interger%2!=0 && user_interger%3==0){
                        case true:
                            check_result = "a multiple of 3";
                            break;
                        case false:
                            check_result = "not a multiple of 2 neither a multiple of 3";
                    }
                    break;
            }
            break;
    }

    //Display outputs
    cout << endl; //Line break
    cout<< "You entered " << user_interger << " and this number is "<< check_result << ".";
    cout << endl; //Line break
}
