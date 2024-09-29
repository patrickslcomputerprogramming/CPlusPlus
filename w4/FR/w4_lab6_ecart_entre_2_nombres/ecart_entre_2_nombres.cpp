/*
LIRE 2 NOMBRES DIFFERENTS,
CALCULER et ECRIRE L'ECART ENTRE EUX
EN UTILISANT SEULEMENT UNE INSTRUCTION if.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Déclarer les variables et constantes et initialiser
    int first_number, second_number, gap_between_numbers;

    //Inviter, lire, et enregistrer les entrées
    cout << "ENTRER UN PREMIER NOMBRE." ;
    cout << endl; //Saut de ligne
    cin >> first_number;

    cout << "ENTRER UN DEUXIEME NOMBRE, DIFFERENT DU PREMIER NOMBRE. " ;
    cout << endl; //Saut de ligne
    cin >> second_number;

    //Calculer
    gap_between_numbers = first_number - second_number;
    if(first_number < second_number)
        gap_between_numbers = second_number - first_number;

    //Ecrire les sorties
    cout << endl; //Saut de ligne

    cout << "L'ECART ENTRE "
            << first_number
            << " ET "
            << second_number
            << " EST "
            << gap_between_numbers;

    cout << endl; //Saut de ligne
}


