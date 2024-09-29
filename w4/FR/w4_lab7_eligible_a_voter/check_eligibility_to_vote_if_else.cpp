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
    string final_message = "VOUS LE SEREZ BIENTOT!";

    //Inviter, lire, et enregistrer les entrées
    cout << "AVEZ VOUS LA NATIONNALITE CANADIENNE ? O/N" ;
    cout << endl; //Saut de ligne
    cin >> user_citizenship;

    cout << "QUELLE EST VOTRE ANNEE DE NAISSANCE?" ;
    cout << endl; //line break
    cin >> user_birthday_year;

    cout << endl; //Saut de ligne

    //Calculer
    user_age = current_year - user_birthday_year;

    if(user_age >= 18 && (user_citizenship == 'o' || user_citizenship == 'O')){
        decision = "VOUS ETES ELIGIBLE";
        final_message = "FAITES LE!";
    }
    else{
        decision = "VOUS N'ETES PAS ELIGIBLE";
    }

    //Ecrire les sorties
    cout << decision << " A VOTER DANS UNE ELECTION FEDERALE CANADIENNE. "<<final_message;
    cout << endl; //Saut de ligne
}

