// Declare and initialize and display an unidementional array
#include <iostream>
using namespace std;
int main()
{
    // Déclarer et initialiser des variables
    int i;
    float notes_etudiant[10];

    // Enregistrer les éléments d'un tableau à l'aide du clavier
    for (i = 0; i <= 9; i++)
    {
        cout << "Entrer la note " << i + 1 << " : " << endl;
        cin >> notes_etudiant[i];
    }

    cout << endl; // Saut de ligne

    // Afficher les éléments d'un tableau
    for (i = 0; i <= 9; i++)
        cout << "Note " << i + 1 << " = " << notes_etudiant[i] << endl;

    cout << endl; // Saut de ligne
}
