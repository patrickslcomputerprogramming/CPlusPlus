/*
LIRE un nombre,
CALCULER et ÉCRIRE la première table de multiplication par dix de ce nombre.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Déclarer des variables et des constantes et initialiser
    int kid_number, i, mult_result;

    //Inviter, lire et enregistrer des entrées
    cout << "Entrez un nombre compris entre 2 et 9.";
    cout << endl; //Saut de ligne
    cin >> kid_number;
    cout << endl; //Saut de ligne

    for(i=1; i<=10; i++)
    {
        //Calculer
        mult_result = i * kid_number;
        //Afficher la sortie
        cout << i << " * " << kid_number << " = " << mult_result;
        cout << endl; //Saut de ligne
    }
}
