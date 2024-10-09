#include <iostream>
using namespace std;
int main()
{
    // Déclarer des variables
    int i;
    int quantite = 0;

    // Inviter, lire et enregistrer des entrées
    cout << "Combien de nombres voulez-vous saisir :" << endl;
    cin >> quantite;

    // Déclarer des variables'
    // Utiliser une variable comme index afin de créer un tableau dynamique
    int list_of_numbers[quantite];

    // Inviter, lire et enregistrer des entrées
    for (i = 0; i < quantite; i++)
    {
        cout << "Entrer le nombre #" << i + 1 << endl;
        cin >> list_of_numbers[i];
    }

    // Afficher les sorties
    cout << endl;
    cout << "Sont affichés ci-dessous les nombres saisis: \n";
    for (i = 0; i < quantite; i++)
    {
        cout << list_of_numbers[i] << endl;
    }
}