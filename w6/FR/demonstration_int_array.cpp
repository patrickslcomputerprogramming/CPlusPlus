// Unidimensional Arrays - Introduction
#include <iostream>
using namespace std;
int main()
{
    // Déclarer et initialiser les variables
    int i, quantite_d_ages, index_dernier_element;
    float moyenne_ages, somme_ages;
    // Le type de données des éléments du tableau doit être le même
    int liste_d_ages[5] = {25, 52, 70, 20, 19};

    // Calculer
    // Utiliser un index numéroté pour accéder à chaque élément du tableau, en commençant par 0 pour le 1er élément
    somme_ages = liste_d_ages[0] + liste_d_ages[1] + liste_d_ages[2];
    // Nombre d'éléments du tableau
    quantite_d_ages = sizeof(liste_d_ages) / sizeof(liste_d_ages[0]);
    // Moyenne
    moyenne_ages = somme_ages / quantite_d_ages;
    // Index du dernier élément
    index_dernier_element = (sizeof(liste_d_ages) / sizeof(liste_d_ages[0])) - 1;

    // Afficher les sorties
    // Afficher 1 élément du tableau
    cout << "Premier âge dans le tableau: " << liste_d_ages[0];
    cout << endl; // Saut de ligne
    cout << "Dernier âge dans le tableau: " << liste_d_ages[index_dernier_element];
    cout << endl; // Saut de ligne
    cout << endl; // Saut de ligne

    // Afficher tous les éléments du tableau (une boucle doit être utilisée)
    for (i = 0; i < quantite_d_ages; i++)
    {
        cout << "Age #" << i + 1 << " dans le tableau " << liste_d_ages[i];
        cout << endl; // Saut de ligne
    }

    // Afficher la somme et la moyenne des salaires horaires
    cout << endl; // Saut de ligne
    cout << "Somme des âges: " << somme_ages;
    cout << endl; // Saut de ligne
    cout << endl; // Saut de ligne
    cout << "Age moyen: " << moyenne_ages;
    cout << endl; // Saut de ligne
}
