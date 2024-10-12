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
    char re_executer;

    do{
        //Déclarer les variables et constantes et initialiser
        int day_number ;
        string day_name;
        const string listOfDayNames[7] = {"LUNDI", "MARDI", "MERCREDI", "JEUDI", "VENDREDI", "SAMEDI", "DIMANCHE"};
        int day_index;

        //Inviter, lire, et enregistrer les entrées
        cout << "ENTRER UN CHIFFRE COMME RANG D'UN JOUR DE LA SEMAINE, ALLANT DE 1 A 7. J'AFFICHERAI LE NOM DU JOUR CORRESPONDANT." ;
        cout << endl; //Saut de ligne
        cin >> day_number;

        //Calculer
        if (day_number>=1 && day_number<=7){
            day_index = day_number - 1;
            day_name = listOfDayNames[day_index];
        } else {
            day_name = "UN CHIFFRE QUI NE PEUT ETRE UTILISE COMME RANG D'UN JOUR DE LA SEMAINE";
        }

        //Ecrire les sorties
        cout << endl; //Line break
        cout << "VOUS AVEZ ENTRE LE CHIFFRE "<<day_number<<" QUI CORRESPOND A "<<day_name<<"." ;
        cout << endl<<endl; //Saut de ligne

        //Inviter, lire, et enregistrer les entrées
        cout << "PRESSEZ O POUR RECOMMENCER LE PROGRAMME OU N'IMPORTE QUELLE AUTRE TOUCHE POUR L'ARRETER";
        cout << endl; //Saut de ligne
        cin >> re_executer;
        cout << endl; //Saut de ligne
    } while (re_executer=='O' || re_executer=='o');
}



