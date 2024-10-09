// Tableaux unidimensionnels - Introduction
#include <iostream>
using namespace std;
int main()
{
    // Déclarer et initialiser les variables
    int i, nombre_de_salaires, index_dernier_element;
    float moyenne_salaire_par_heure, somme_salaire_par_heure;
    // Le type de données des éléments du tableau doit être le même
    float liste_salaire_par_heure[3] = {50.20, 25.60, 70.90};

    // Calculer
    // Utiliser un index numéroté pour accéder à chaque élément du tableau, en commençant par 0 pour le 1er élément
    somme_salaire_par_heure = liste_salaire_par_heure[0] + liste_salaire_par_heure[1] + liste_salaire_par_heure[2];
    // Nombre d'éléments du tableau
    nombre_de_salaires = sizeof(liste_salaire_par_heure) / sizeof(liste_salaire_par_heure[0]);
    // Moyenne
    moyenne_salaire_par_heure = somme_salaire_par_heure / nombre_de_salaires;
    // Index du dernier élément
    index_dernier_element = (sizeof(liste_salaire_par_heure) / sizeof(liste_salaire_par_heure[0])) - 1;

    // Afficher les sorties
    // Afficher 1 élément du tableau
    cout << "Premier salaire dans le tableau : " << liste_salaire_par_heure[0];
    cout << endl; // Saut de ligne
    cout << "Dernier salaire dans le tableau : " << liste_salaire_par_heure[index_dernier_element];
    cout << endl; // Saut de ligne
    cout << endl; // Saut de ligne

    // Afficher tous les éléments du tableau (une boucle doit être utilisée)
    for (i = 0; i < nombre_de_salaires; i++)
    {
        cout << "Salaire #" << i + 1 << " dans le tableau " << liste_salaire_par_heure[i];
        cout << endl; // Saut de ligne
    }

    // Afficher la somme et la moyenne des salaires horaires
    cout << endl; // Saut de ligne
    cout << "Somme des salaires horaires : " << somme_salaire_par_heure;
    cout << endl; // Saut de ligne
    cout << endl; // Saut de ligne
    cout << "Salaire horaire moyen : " << moyenne_salaire_par_heure;
    cout << endl; // Saut de ligne
}