// Declare and initialize and display an unidementional array
#include <iostream>
using namespace std;
int main()
{
    // Déclarer et initialiser les variables
    int i;
    float notes_etudiant[7] = {10, 20, 30, 40, 50, 60, 70};

    // Afficher les éléments d'un tableau
    for (i = 0; i <= 6; i++)
        cout << "Grade " << i + 1 << " = " << notes_etudiant[i] << endl;

    cout << endl; // Saut de ligne
}
