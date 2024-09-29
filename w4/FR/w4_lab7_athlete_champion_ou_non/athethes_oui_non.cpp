/*
LIRE 2 REPONSES,
CALCULER ET ECRIRE UN MESSAGE APPROPRIE
EN UTILISANT 1 SEULE INSTRUCTION IF.
*/
#include <iostream>
using namespace std;
int main()
{
    //Déclarer les variables et constantes et initialiser
    char answer1, answer2;
    string congrats_msg ="";
    string thanks_msg = "MERCI D'AVOIR PARTICIPE DANS NOTRE TOURNOI DE JEUX SPORTIFS!";

    //Inviter, lire, et enregistrer les entrées
    cout << "AVEZ-VOUS RENCONTRE D'AUTRES ATHLETES (O/N)";
    cout << endl; //Line break
    cin >> answer1;

    cout << endl; //Saut de ligne
    cout << "AVEZ-VOUS GAGNE UNE MEDAILLE? (O/N)"<<endl;
    cin >> answer2;

    //Calculer
    if ((answer1=='O' || answer1=='o') && (answer2=='O' || answer2=='o'))
        congrats_msg = "VOUS ETES UN VRAI CHAMPION!";

    //Ecrire les sorties
    cout << endl; //Saut de ligne
    cout<< congrats_msg << endl;
    cout<< thanks_msg << endl;
}



