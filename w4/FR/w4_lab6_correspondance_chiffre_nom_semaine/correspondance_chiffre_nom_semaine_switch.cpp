/*
LIRE 1 CHIFFRE ALLANT DE 1 A 7,
CALCULER et ECRIRE LE NOM DU JOUR CORRESPONDANTs
EN UTILISANT DES INSTRUCTIONS D'UN COMMUTATEUR (SWITCH).
*/
#include <iostream>
using namespace std ;
int main()
{
    //Déclarer les variables et constantes et initialiser
    int day_number ;
    string day_name;

    //Inviter, lire, et enregistrer les entrées
    cout << "ENTRER UN CHIFFRE COMME RANG D'UN JOUR DE LA SEMAINE, ALLANT DE 1 A 7. J'AFFICHERAI LE NOM DU JOUR CORRESPONDANT." ;
    cout << endl; //Saut de ligne
    cin >> day_number;

    //Calculer
    switch (day_number){
        case 1 :
            day_name = "LUNDI";
            break;
        case 2:
            day_name = "MARDI";
            break;
        case 3:
            day_name = "MERCREDI";
            break;
        case 4:
            day_name = "JEUDI";
            break;
        case 5:
            day_name = "VENDREDI";
            break;
        case 6:
            day_name = "SAMEDI";
            break;
        case 7:
            day_name = "DIMANCHE";
            break;
        default:
            day_name = "UN CHIFFRE QUI NE PEUT ETRE UTILISE COMME RANG D'UN JOUR DE LA SEMAINE.";
    }

    //Ecrire les sorties
    cout << endl; //Line break
    cout << "VOUS AVEZ ENTRE LE CHIFFRE "<<day_number<<" QUI CORRESPOND A "<<day_name<<"." ;
    cout << endl; //Saut de ligne
}




