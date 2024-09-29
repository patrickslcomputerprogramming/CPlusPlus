/*
LIRE UN NOMBRE ENTIER,
CALCULER ET ECRIRE SI CE NOMBRE ENTIER EST UN MULTIPLE DE 2 ET/OU 3
EN UTILISANT DES INSTRUCTIONS D'UN COMMUTATEUR (SWITCH).
*/
#include <iostream>
using namespace std;
int main()
{
    //Déclarer les variables et les constantes et initialiser
    int user_interger;
    string check_result;

    //Inviter, lire et enregistrer les entrées
    cout<<"ENTREZ UN NOMBRE ENTIER.";
    cout << endl ; //Saut de ligne
    cin>>user_interger;

    //Calculer
    if (user_interger%2==0 && user_interger%3==0)
        check_result = "A LA FOIS UN MULTIPLE DE 2 ET 3";
    else if (user_interger%2==0)
        check_result = "UN MULTIPLE DE 2";
    else if (user_interger%3==0)
        check_result = "UN MULTIPLE DE 3";
    else
        check_result = "NI UN MULTIPLE DE 2 NI UN MULTIPLE DE 3";

    //Afficher les sorties
    cout << endl ; //Saut de ligne
    cout<< "VOUS AVEZ ENTRE " << user_interger << " ET CE NOMBRE EST "<< check_result << ".";
    cout << endl ; //Saut de ligne
}








