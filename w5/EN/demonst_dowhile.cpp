//Program that demonstrates a dowhile loop that operates 10 iterations
#include <iostream>
using namespace std;
int main()
{
    //Declare variables and initialize them
    int i = 11;


    //Display inside
    do {
        cout<<"Inside the loop. Iteration # "<<i<<endl;
        i++;
    } while (i<=10);

    //Display outside
    cout<<"\nOutside the loop. \nAfter the last iterations, i is equal to "<<i<<endl;
}



