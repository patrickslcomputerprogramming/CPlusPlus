/*
LIRE 2 NOMBRES,
CALCULER ET ECRIRE S'ILS SONT DISTINCTS OU SIMILAIRES
EN UTILISANT L'OPERATEUR POINT D'INTERROGATION.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Déclarer les variables et constantes et initialiser
    float first_number, second_number;
    string comparison_result;

    //Inviter, lire, et enregistrer les entrées
    cout << "ENTREZ UNE PREMIER NOMBRE." ;
    cout << endl; //Saut de ligne
    cin >> first_number;

    cout << "ENTREZ UN DEUXIEME NOMBRE. " ;
    cout << endl; //Saut de ligne
    cin >> second_number;

    //Calculer
    (first_number != second_number) ?
        comparison_result = "DISTINCTS":
        comparison_result = "SIMILAIRES";

    //Ecrire les sorties
    cout << endl; //Saut de ligne

    cout << "VOUS AVEZ ENTRE LES NOMBRES "
            << first_number
            << " ET "
            << second_number
            << ".";

    cout << endl; //Line break

    cout << "ILS SONT 2 NOMBRES "
            << comparison_result
            <<"!";

    cout << endl; //Saut de ligne
}




    //Calculate




