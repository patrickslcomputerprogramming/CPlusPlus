/*
LIRE une température en degrés Fahrenheit,
CALCULER et ÉCRIRE cette température en degrés Celsius.
*/
#include <iostream>
using namespace std ;
int main()
{
//Afficher le titre du programme
    cout << "CE PROGRAMME LIRA UNE TEMPERATURE EN DEGRES FAHRENHEIT,"<<endl
         << "CALCULERA et ECRIRERA CETTE TEMPERATURE EN DEGRES CELSIUS."<<endl<<endl;

//Déclarer des variables et des constantes et initialiser
    float celcius_temp ;
    float fahrenheit_temp ;

//Configurer pour afficher seulement 2 chiffres après la virgule décimale
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

//Inviter, lire et enregistrer des entrées
    cout << "ENTREZ UNE TEMPERATURE EN DEGRES FAHRENHEIT : " << endl ;
    cin >> fahrenheit_temp ;

//Calculer
    celcius_temp = (fahrenheit_temp - 32)/1.8 ;

//Afficher la sortie
    cout << endl << fahrenheit_temp << " DEGRES FAHRENHEIT CORRESPOND A : " << celcius_temp << " DEGRES CELSIUS." << endl ;
}
