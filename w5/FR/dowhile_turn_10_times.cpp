//A loop that turns 10 times and write the number of each iteration
#include <iostream>
using namespace std;
int main()
{
    //Declare variables and assign values (initialization)
    int i = 1;
    //Loop do while and display iteration number
    do
    {
        cout<<"A L'INTERIEUR DE LA BOUCLE. ITERATION # "<<i<<endl;
        i++;
    }
    while(i<=10);
    //Display i after the last iteration
    cout<<"\nA L'EXTERIEUR DE LA BOUCLE.. \nAPRES LA DERNIERE ITERATION, i EST EGAL A  "<<i<<endl;

}






