/*
LIRE la quantité de chaque pièce de monnaie canadienne de 5, 10 et 20 dollars saisie,
CALCULER et ÉCRIRE le montant total d'argent.
*/
#include <iostream>
using namespace std;
int main()
{
    // Déclarer des variables et des constantes et initialiser
    float quantite5dollars, quantite10dollars, quantite20dollars, total_dollars;

    // Inviter, lire et enregistrer des entrées
    // Lire 5 dollars
    cout << "Entrez la quantité de 5 dollars: ";
    cout << endl; // Saut de ligne
    cin >> quantite5dollars;
    cout << endl; // Saut de ligne
    // Lire 10 dollars
    cout << "Entrez la quantité de 10 dollars: ";
    cout << endl; // Saut de ligne
    cin >> quantite10dollars;
    cout << endl; // Saut de ligne
    // Lire 20 dollars
    cout << "Entrer la quantité de 20 dollars: ";
    cout << endl; // Saut de ligne
    cin >> quantite20dollars;
    cout << endl; // Saut de ligne

    // Calculer
    total_dollars = (5 * quantite5dollars) + (10 * quantite10dollars) + (20 * quantite20dollars);

    // Afficher les sorties
    cout << endl; // Saut de ligne
    cout << "Total argent: " << endl
         << total_dollars << " dollars";
    cout << endl; // Saut de ligne
}