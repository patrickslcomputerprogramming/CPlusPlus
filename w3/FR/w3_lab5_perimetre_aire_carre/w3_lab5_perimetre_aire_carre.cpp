/*
LIRE le côté d'un carré en mètres,
CALCULER et ÉCRIRE le périmètre de ce carré en mètres
et l'aire de ce carré en mètres carrés.
*/
#include <iostream>
using namespace std ;
int main()
{
//Déclarer des variables et des constantes et initialiser
float square_side;
float square_perimeter;
float square_area;

//Inviter, lire et enregistrer des entrées
cout << "ENTREZ LE COTE DU CARRE EN METRES" ;
cout << endl; //saut de ligne
cin >> square_side;

//Calculer
square_perimeter = square_side * 4;
square_area = square_side * square_side;

//Afficher la sortie
cout << endl; //saut de ligne
cout << "LE PERIMETRE DU CARRE EN METRES EST " << endl << square_perimeter;
cout << endl; //saut de ligne
cout << "L'AIRE DU CARRE EN METRES CARRES EST "<< endl << square_area;
cout << endl; //saut de ligne
}


