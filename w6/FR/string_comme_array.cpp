#include <iostream>
using namespace std;
int main()
{
    // Déclarer des variables
    string salutations = "BON MATIN";
    int nombreDeCaracteres;
    int i;

    // Afficher les sorties
    cout << "Le 5ème caractère de 'BON MATIN'" << endl;
    cout << salutations[4] << endl
         << endl;

    // Calculer
    nombreDeCaracteres = salutations.length();

    // Afficher les sorties
    cout << "Nombre de caractères dans 'BON MATIN'" << endl;
    cout << nombreDeCaracteres << endl
         << endl;

    // Afficher les sorties
    cout << "Tous les caractères de 'BON MATIN' avec chacun sur une nouvelle ligne" << endl;
    for (i = 0; i < nombreDeCaracteres; i++)
        cout << salutations[i] << endl;
}
