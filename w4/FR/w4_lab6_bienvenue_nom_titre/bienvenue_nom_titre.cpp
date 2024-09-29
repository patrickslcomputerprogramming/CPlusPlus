/*
LIRE 2 REPONSES,
CALCULER et ECRIRE LA REPONSE APPROPRIEE
EN UTILISANT DES INSTRUCTIONS if - else if - else.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Déclarer les variables et constantes et initialiser
    string user_name, user_title;
    int user_title_category;

    //Inviter, lire, et enregistrer les entrées
    cout << "SVP, ENTRER VOTRE NOM." ;
    cout << endl; //Line break
    cin >> user_name;

    cout << endl; //Saut de ligne
    cout << "SVP, ENTRER VOTRE TITRE." ;
    cout << endl; //Saut de ligne
    cout << "ENTRER 1 POUR MONSIEUR, 2 POUR MADAME, OU 3." ;
    cout << endl; //line break
    cin >> user_title_category;

    //Calculer
    if (user_title_category == 1)
        user_title = "MONSIEUR";
    else if (user_title_category == 2)
        user_title = "MADAME";
    else
        user_title = "";

    //Ecrire les sorties
    cout << endl; //Saut de ligne

    cout << "BIENVENUE AU QUEBEC "
            << user_title
            << " "
            << user_name
            << ".";

    cout << endl; //Saut de ligne
}


