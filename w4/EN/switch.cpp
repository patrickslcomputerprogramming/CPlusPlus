#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    int user_number = 10;
 
    //Calculate
    //Display output
    switch (user_number){
        case 0 :
            cout<< "Number is 0.";
            break;
        case 1:
            cout<< "Number is 1";
            break;
        case 2:
            cout<< "Number is 2";
            break;
        default:
            cout<< "Number is not 0,1, or 2";
    }
}


/*
EQUIVALENT WITH AN IF-ELSEIF-ELSE STATEMENT
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    int user_number = 10;
 
    //Calculate
    //Display output
    if (user_number==0)
        cout<< "Number is 0.";
    else if (user_number==1)
        cout<< "Number is 1";
    else if (user_number==2)     
        cout<< "Number is 2";
    else
        cout<< "Number is not 0,1, or 2";
}
*/