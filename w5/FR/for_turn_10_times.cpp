//A loop that turns 10 times and write the number of each iteration
#include <iostream>
using namespace std;
int main()
{
    //Declare variables
    int i;
    //Loop for and display iteration number
    for (i=1; i<=10; i=i+2)
    {
        cout<<"A L'INTERIEUR DE LA BOUCLE. ITERATION # "<<i<<endl;
    }
    //Display i after the last iteration
    cout<<"\nA L'EXTERIEUR DE LA BOUCLE.. \nAPRES LA DERNIERE ITERATION, i EST EGAL A  "<<i<<endl;
}






