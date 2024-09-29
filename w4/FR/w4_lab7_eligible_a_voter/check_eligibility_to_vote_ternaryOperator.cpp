/*
LIRE 2 REPONSES,
CALCULER ET ECRIRE UN MESSAGE APPROPRIE
EN UTILISANT 1 INSTRUCTION if, else.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Déclarer les variables et constantes et initialiser
    char user_citizenship;
    int user_birthday_year;
    int user_age;
    const int current_year = 2024;
    string decision;
    string final_message;

    //Inviter, lire, et enregistrer les entrées
    cout << "AVEZ VOUS LA NATIONNALITE CANADIENNE ? O/N" ;
    cout << endl; //Saut de ligne
    cin >> user_citizenship;

    cout << "QUELLE EST VOTRE ANNEE DE NAISSANCE?" ;
    cout << endl; //Saut de ligne
    cin >> user_birthday_year;

    cout << endl; //Saut de ligne

    //Calculer
    user_age = current_year - user_birthday_year;

    decision = (user_age >= 18 && (user_citizenship == 'o' || user_citizenship == 'O')) ?
               "VOUS ETES ELIGIBLE" :
               "VOUS N'ETES PAS ELIGIBLE";

    final_message = (user_age >= 18 && (user_citizenship == 'o' || user_citizenship == 'O')) ?
                    "FAITES LE!" :
                    "VOUS LE SEREZ BIENTOT!";

    //Ecrire les sorties
    cout << decision << " A VOTER DANS UNE ELECTION FEDERALE CANADIENNE. "<<final_message;
    cout << endl; //Saut de ligne
}



