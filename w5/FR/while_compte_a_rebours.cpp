//Une boucle qui tourne 10 fois et écrit le numéro de chaque itération
#include <iostream>
using namespace std;
int main()
{
    //Ecrire les sorties
    cout<<"COMPTE A REBOURS "<<endl<<endl;

    //Boucle While
    //Initialisation
    //Valeur initiale du compteur : i=10
    int i = 10;
    //En considérant la plage de valeurs acceptée du compteur : (i<11 && i>0)
    //En considérant la valeur finale du compteur : i>=1
    //(i<11 && i>0) et i>=1 fournissent le même nombre d'itérations
    while (i<11 && i>0)
    {
        cout<<"ETAPE # "<<i<<endl;
        //Décrémentation
        //Décrémente la valeur de i : i-- ou i=i-1
        i = i - 1;
    }
}









