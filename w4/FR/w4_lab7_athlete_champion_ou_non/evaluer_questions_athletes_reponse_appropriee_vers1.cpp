/*
LIRE le pr�nom et le nom,
CALCULER et �CRIRE le nom complet qui est une combinaison des deux.
*/
#include <iostream>
using namespace std ;
int main()
{
//D�clarer les variables et les constantes et initialiser
    char reponse_question1, reponse_question2;
    const string MESSAGE_COMMUN = "MERCI D'AVOIR PARTICIPE A NOTRE TOURNOI DE JEUX SPORTIFS !";
    string message_champion = "";
//Inviter, lire et enregistrer les entr�es
    cout << "AVEZ-VOUS RENCONTRE D'AUTRES ATHLETES? (O/N)" ;
    cout << endl ; //Saut de ligne
    cin >> reponse_question1;
    cout << "AVEZ-VOUS GAGNE UNE MEDAILLE? (O/N)" ;
    cout << endl ; //Saut de ligne
    cin >> reponse_question2 ;

//Calculer
    if (reponse_question1=='O' && reponse_question2=='O')
            message_champion = "VOUS ETES UN VRAI CHAMPION !";

//Afficher la sortie
    cout << endl ; //Saut de ligne
    cout << message_champion;
    cout << endl ; //Saut de ligne
    cout <<MESSAGE_COMMUN ;
    cout << endl ; //Saut de ligne
}
