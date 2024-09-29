/*
LIRE 1 CHIFFRE ALLANT DE 1 A 7,
CALCULER et ECRIRE LE NOM DU JOUR CORRESPONDANTs
EN UTILISANT DES INSTRUCTIONS IF, ELSE IF, ELSE.
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
    if (day_number==1)
        day_name = "LUNDI";
    else if (day_number==2)
        day_name = "MARDI";
    else if (day_number==3)
        day_name = "MERCREDI";
    else if (day_number==4)
        day_name = "JEUDI";
    else if (day_number==5)
        day_name = "VENDREDI";
    else if (day_number==6)
        day_name = "SAMEDI";
    else if (day_number==7)
        day_name = "DIMANCHE";
    else
        day_name = "UN CHIFFRE QUI NE PEUT ETRE UTILISE COMME RANG D'UN JOUR DE LA SEMAINE";

    //Ecrire les sorties
    cout << endl; //Line break
    cout << "VOUS AVEZ ENTRE LE CHIFFRE "<<day_number<<" QUI CORRESPOND A "<<day_name<<"." ;
    cout << endl; //Saut de ligne
}



