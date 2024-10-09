/*
LIRE un nombre jusqu'à ce qu'il soit positif, en utilisant une boucle.
CALCULER et ÉCRIRE lorsqu'il est supérieur à 0 ou non,
*/
#include <iostream>
using namespace std;
int main()
{
    // Déclarer des variables et des constantes et initialiser
    float nombreUn, nombreDeux;
    string resultatComparaison;

    // Inviter, lire et enregistrer des entrées
    // Nombre 1
    cout << "Entrez un premier nombre: ";
    cout << endl; // Saut de ligne
    cin >> nombreUn;
    cout << endl; // Saut de ligne
    // Nombre 2
    cout << "Entrez un deuxième nombre: ";
    cout << endl; // Saut de ligne
    cin >> nombreDeux;
    cout << endl; // Saut de ligne

    // Calculer
    // Les deux nombres sont supérieurs ou égaux à zéro
    if (nombreUn >= 0 && nombreDeux >= 0)
        resultatComparaison = "Les deux nombres sont supérieurs ou égaux à zéro";
    // Un seul des 2 nombres est supérieur ou égal à zéro
    else if (nombreUn >= 0 || nombreDeux >= 0)
        resultatComparaison = "Un seul des 2 nombres est supérieur ou égal à zéro";
    // Aucun des 2 nombres n'est supérieur ou égal à zéro
    else
        resultatComparaison = "Aucun des 2 nombres n'est supérieur ou égal à zéro";

    // Afficher les sorties
    cout << resultatComparaison;
    cout << endl; // Saut de ligne
}
