//A loop that turns 10 times and write the number of each iteration
#include <iostream>
using namespace std;
int main()
{
    //Declare variables
    int i;

    //Display
    cout<<"COUNTDOWN "<<endl<<endl;

    //For loop
    //Counter Initialization, Accepted values range, and Step
    //Initial value of the counter: i=10
    //Considering the accepted value range of the counter: (i<11 && i>0)
    //Considering the final value of the counter: i>=1
    //(i<11 && i>0) and i>=1 provide the same number of iterations
    for (i=10; i<11 && i>0; i=i-1)
    {
        cout<<"Countdown # "<<i<<endl;
    }
}






