/*
LIRE une temp�rature en degr�s Fahrenheit,
CALCULER et �CRIRE cette temp�rature en degr�s Celsius.
*/
#include <iostream>
using namespace std ;
int main()
{
//D�clarer des variables et des constantes et initialiser
    float celcius_temp ;
    float fahrenheit_temp ;

//Inviter, lire et enregistrer des entr�es
    cout << "ENTREZ UNE TEMPERATURE EN DEGRES FAHRENHEIT : " ;
    cin >> fahrenheit_temp ;

//Calculer
    celcius_temp = (fahrenheit_temp - 32)/1.8 ;

//Afficher la sortie
    cout << fahrenheit_temp << " DEGRES FAHRENHEIT CORRESPOND A: " << celcius_temp << " DEGRES CELSIUS.";
}

