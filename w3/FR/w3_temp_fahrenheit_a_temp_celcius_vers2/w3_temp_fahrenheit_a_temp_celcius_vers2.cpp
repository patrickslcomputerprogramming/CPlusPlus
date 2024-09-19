/*
LIRE une temp�rature en degr�s Fahrenheit,
CALCULER et �CRIRE cette temp�rature en degr�s Celsius.
*/
#include <iostream>
using namespace std ;
int main()
{
//Afficher le titre du programme
    cout << "CE PROGRAMME LIRA UNE TEMPERATURE EN DEGRES FAHRENHEIT,"<<endl
         << "CALCULERA et ECRIRERA CETTE TEMPERATURE EN DEGRES CELSIUS."<<endl<<endl;

//D�clarer des variables et des constantes et initialiser
    float celcius_temp ;
    float fahrenheit_temp ;

//Configurer pour afficher seulement 2 chiffres apr�s la virgule d�cimale
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

//Inviter, lire et enregistrer des entr�es
    cout << "ENTREZ UNE TEMPERATURE EN DEGRES FAHRENHEIT : " << endl ;
    cin >> fahrenheit_temp ;

//Calculer
    celcius_temp = (fahrenheit_temp - 32)/1.8 ;

//Afficher la sortie
    cout << endl << fahrenheit_temp << " DEGRES FAHRENHEIT CORRESPOND A : " << celcius_temp << " DEGRES CELSIUS." << endl ;
}
