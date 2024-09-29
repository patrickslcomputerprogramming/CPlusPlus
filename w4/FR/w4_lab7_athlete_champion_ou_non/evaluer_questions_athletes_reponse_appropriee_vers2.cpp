/*
LIRE 2 REPONSES,
CALCULER ET ECRIRE UN MESSAGE APPROPRIE
EN UTILISANT 1 INSTRUCTION if, else.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Déclarer les variables et les constantes et initialiser
    char reponse_question1, reponse_question2;

    //Inviter, lire et enregistrer les entrées
    cout << "AVEZ-VOUS RENCONTRE D'AUTRES ATHLETES? (O/N)" ;
    cout << endl ; //Saut de ligne
    cin >> reponse_question1;
    cout << "AVEZ-VOUS GAGNE UNE MEDAILLE? (O/N)" ;
    cout << endl ; //Saut de ligne
    cin >> reponse_question2 ;

    //Calculer
    //Afficher les sorties
    if (reponse_question1=='O' && reponse_question2=='O'){
        cout << endl ; //Saut de ligne
        cout<<"VOUS ETES UN VRAI CHAMPION !";
    }

    cout << endl ; //Saut de ligne
    cout << "MERCI D'AVOIR PARTICIPE A NOTRE TOURNOI DE JEUX SPORTIFS !";
    cout << endl ; //Saut de ligne
}


