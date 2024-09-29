/*
LIRE UN ENTIER,
CALCULER ET ECRIRE SI CET ENTIER EST UN MULTIPLE DE 2 OU 3
EN UTILISANT LES INSTRUCTIONS D'UN COMMUTATEUR (SWITCH).
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
    switch(user_interger%2==0 && user_interger%3==0){
        case true:
            check_result = "A LA FOIS UN MULTIPLE DE 2 ET 3";
            break;
        case false :
            switch(user_interger%2==0 && user_interger%3!=0){
                case true:
                    check_result = "UN MULTIPLE DE 2";
                    break;
                case false:
                    switch(user_interger%2!=0 && user_interger%3==0){
                        case true:
                            check_result = "UN MULTIPLE DE 3";
                            break;
                        case false:
                            check_result = "NI UN MULTIPLE DE 2 NI UN MULTIPLE DE 3";
                    }
                    break;
            }
            break;
    }

    //Afficher les sorties
    cout << endl ; //Saut de ligne
    cout<< "VOUS AVEZ ENTRE " << user_interger << " ET CE NOMBRE EST "<< check_result << ".";
    cout << endl ; //Saut de ligne
}
