//Une boucle qui tourne 10 fois et �crit le num�ro de chaque it�ration
#include <iostream>
using namespace std;
int main()
{
    //Ecrire les sorties
    cout<<"COMPTE A REBOURS "<<endl<<endl;

    //Boucle While
    //Initialisation
    //Valeur initiale du compteur�: i=10
    int i = 10;
    //En consid�rant la plage de valeurs accept�e du compteur�: (i<11 && i>0)
    //En consid�rant la valeur finale du compteur�: i>=1
    //(i<11 && i>0) et i>=1 fournissent le m�me nombre d'it�rations
    while (i<11 && i>0)
    {
        cout<<"ETAPE # "<<i<<endl;
        //D�cr�mentation
        //D�cr�mente la valeur de i : i-- ou i=i-1
        i = i - 1;
    }
}









