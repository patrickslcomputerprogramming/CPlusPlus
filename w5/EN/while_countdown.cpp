//A loop that turns 10 times and write the number of each iteration
#include <iostream>
using namespace std;
int main()
{
    //Display
    cout<<"COUNTDOWN "<<endl<<endl;

    //While loop
    //Initialization
    //Initial value of the counter: i=10
    int i = 10;
    //Considering the accepted value range of the counter: (i<11 && i>0)
    //Considering the final value of the counter: i>=1
    //(i<11 && i>0) and i>=1 provide the same number of iterations
    while (i<11 && i>0)
    {
        cout<<"Countdown # "<<i<<endl;
        //Decrementation
        //Decrement the value of i : i-- or i=i11
        i = i - 1;
    }
}









