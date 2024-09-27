//Program that demonstrates a dowhile loop that operates 10 iterations
#include <iostream>
using namespace std;
int main()
{
    //Declare variables and initialize them
    int i = 11;


    //Display inside
    do {
        cout<<"A L'INTERIEUR DE LA BOUCLE. ITERATION # "<<i<<endl;
        i++;
    } while (i<=10);

    //Display outside
    cout<<"\nA L'EXTERIEUR DE LA BOUCLE.. \nAPRES LA DERNIERE ITERATION, i EST EGAL A  "<<i<<endl;
}



