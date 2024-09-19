/*
LIRE une température en degrés Fahrenheit,
CALCULER et ÉCRIRE cette température en degrés Celsius.
*/
#include <iostream>
using namespace std ;
int main()
{
//Déclarer des variables et des constantes et initialiser
    float celcius_temp ;
    float fahrenheit_temp ;

//Inviter, lire et enregistrer des entrées
    cout << "ENTREZ UNE TEMPERATURE EN DEGRES FAHRENHEIT : " ;
    cin >> fahrenheit_temp ;

//Calculer
    celcius_temp = (fahrenheit_temp - 32)/1.8 ;

//Afficher la sortie
    cout << fahrenheit_temp << " DEGRES FAHRENHEIT CORRESPOND A: " << celcius_temp << " DEGRES CELSIUS.";
}

