/*
LIRE 2 nombres,
CALCULER et ÉCRIRE leur somme, écart, produit et moyenne.
*/
#include <iostream>
using namespace std ;
int main()
{
//Déclarer des variables et des constantes et initialiser
float number1;
float number2;
float sum_numbers;
float abs_numbers;
float product_numbers;
float avg_numbers;
//Inviter, lire et enregistrer des entrées
cout << "Entrez un premier nombre" ;
cout << endl; //saut de ligne
cin >> number1;
cout << "Entrez un deuxième nombre" ;
cout << endl; //saut de ligne
cin >> number2;
cout << endl; //saut de ligne

//Calculer
sum_numbers = number1 + number2;
abs_numbers = abs (number1 - number2);
product_numbers = number1 * number2;
avg_numbers = sum_numbers / 2;

//Afficher la sortie
cout << "NOMBRE 1 = " << number1;
cout << endl; //saut de ligne
cout << "NOMBRE 2 = " << number2;
cout << endl; //saut de ligne
cout << "SOMME = " << sum_numbers;
cout << endl; //saut de ligne
cout << "VALEUR ABSOLUE DIFFERENCE = " << abs_numbers;
cout << endl; //saut de ligne
cout << "PRODUIT = " << product_numbers;
cout << endl; //saut de ligne
cout << "MOYENNE = " << avg_numbers;
cout << endl; //saut de ligne
}


//w3_lab5_somme_difference_produit_moyenne_2_nombres
