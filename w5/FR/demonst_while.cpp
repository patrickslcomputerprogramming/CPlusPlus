//Program that demonstrates a while loop that operates 10 iterations
#include <iostream>
using namespace std;
int main()
{
    //Declare counter
    int i = 10, nbr=4;


    //Display inside
    while (i>=1) {
        cout<<"A L'INTERIEUR DE LA BOUCLE. ITERATION # "<<i<<endl;
        cout<<nbr<<" + "<<i<<" = "<<nbr + i<<endl;
        i=i-1;
    }

    //Display outside
    cout<<"\nA L'EXTERIEUR DE LA BOUCLE.. \nAPRES LA DERNIERE ITERATION, i EST EGAL A  "<<i<<endl;
}



