// Unidimensional Arrays - Introduction
#include <iostream>
using namespace std;
int main()
{
    // Déclarer et initialiser des variables
    int i, j, k;
    string price_category;
    float price;
    // Tableaux
    int score[5] = {2, 4, 6, 8, 10};
    int price_array[4];

    // Autre façon de déclarer et d'initialiser
    /*
    int score[5];
    score[0] = 2;
    score[1] = 4;
    score[2] = 6;
    score[3] = 4;
    score[4] = 6;
    */

    // Afficher les résultats
    cout << "Élément de tableau n°1: " << score[0] << endl;
    cout << "Élément de tableau n°2: " << score[1] << endl;
    cout << "Élément de tableau n°3: " << score[2] << endl;
    cout << "Élément de tableau n°4: " << score[3] << endl;
    cout << "Élément de tableau n°5: " << score[4] << endl;

    cout << endl
         << endl; // Saut de ligne

    // Afficher les éléments d'un tableau
    for (i = 0; i <= 4; i++)
        cout << "Élément de tableau n°" << i + 1 <<": " << score[i] << endl;

    cout << endl
         << endl; // Saut de ligne

    // Entrer des données dans un tableau

    for (j = 0; j <= 3; j++)
    {

        if (j == 0)
            price_category = "Sub-Total";
        else if (j == 1)
            price_category = "TVQ Tax";
        else if (j == 2)
            price_category = "TPS Tax";
        else
            price_category = "Total";

        cout << "Entrez le " << price_category << " : ";
        cin >> price;
        price_array[j] = price;
    }

    cout << endl
         << endl; // Saut de ligne

    // Afficher les éléments d'un tableau
    for (j = 0; j <= 3; j++)
    {

        if (j == 0)
            price_category = "Sub-Total";
        else if (j == 1)
            price_category = "TVQ Tax";
        else if (j == 2)
            price_category = "TPS Tax";
        else
            price_category = "Total";

        cout << price_category << " est: " << price_array[j] << endl;
    }
}