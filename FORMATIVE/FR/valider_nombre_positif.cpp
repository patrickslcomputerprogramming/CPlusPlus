/*
LIRE un nombre jusqu'à ce qu'il soit positif, en utilisant une boucle.
CALCULER et ÉCRIRE lorsqu'il est supérieur à 0 ou non,
*/
#include <iostream>
using namespace std;
int main()
{
    // Déclarer des variables et des constantes et initialiser
    float nombre_utilisateur;

    do
    {
        // Inviter, lire et enregistrer des entrées
        cout << "Entrez un nombre supérieur à zéro: ";
        cout << endl; // Saut de ligne
        cin >> nombre_utilisateur;
        // Calculer
        if (nombre_utilisateur <= 0)
        {
            // Afficher les sorties
            cout << endl; // Saut de ligne
            cout << "Nombre non supérieur à 0. Réessayez!";
            cout << endl; // Saut de ligne
        }
    } while (nombre_utilisateur <= 0);

    // Afficher les sorties
    cout << endl; // Saut de ligne
    cout << "Vous avez saisi " << nombre_utilisateur << " qui est supérieur à 0. Bon travail!";
    cout << endl; // Saut de ligne
}