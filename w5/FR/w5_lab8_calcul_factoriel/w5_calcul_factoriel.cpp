/*
LIRE un entier,
CALCULER et �CRIRE sa factorielle.
*/
#include <iostream>
using namespace std ;
int main()
{
    //D�clarer des variables et des constantes et initialiser
    int userNumberIs, i, factorialIs = 1;

    //Inviter, lire et enregistrer des entr�es
    cout << "Entrez un entier sup�rieur � 0. Je vais calculer et afficher sa factorielle�!";
    cout << endl; //Saut de ligne
    cin >> userNumberIs;
    cout << endl; //Saut de ligne

    for(i=userNumberIs; i>=2; i--)
    {
    //Calculer
        factorialIs = factorialIs * i;
    }

    //Afficher les sorties
    cout << endl; //Saut de ligne
    cout << "Factorielle de " << userNumberIs << " est " << factorialIs;
    cout << endl; //Saut de ligne
}
