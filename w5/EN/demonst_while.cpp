//Program that demonstrates a while loop that operates 10 iterations
#include <iostream>
using namespace std;
int main()
{
    //Declare counter
    int i = 10, nbr=4;


    //Display inside
    while (i>=1) {
        cout<<"Inside the loop. Iteration # "<<i<<endl;
        cout<<nbr<<" + "<<i<<" = "<<nbr + i<<endl;
        i=i-1;
    }

    //Display outside
    cout<<"\nOutside the loop. \nAfter the last iteration, i is equal to "<<i<<endl;
}



