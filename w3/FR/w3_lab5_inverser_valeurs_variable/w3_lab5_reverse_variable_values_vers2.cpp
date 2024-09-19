/*
Programme qui lit et enregistre 2 nombres dans 2 variables
et inverse les valeurs enregistrées dans les variables
*/
#include <iostream>
using namespace std;
int main()
{
    // Déclarer et initialiser des variables
    int nbr1, nbr2;

    // Inviter les entrées de lecture et d'enregistrement
    cout << "Entrez un 1er nombre";
    cout << endl; // Saut de ligne
    cin >> nbr1;
    cout << "Entrez un 2ème nombre différent du 1er";
    cout << endl; // Saut de ligne
    cin >> nbr2;

    // Afficher les sorties 1
    cout << endl; // Saut de ligne
    cout << "J'ai enregistré " << nbr1 << " dans une variable nommée nbr1.";
    cout << endl; // Saut de ligne
    cout << "J'ai enregistré " << nbr2 << " dans une variable nommée nbr2.";
    cout << endl; // Saut de ligne
    cout << "Maintenant, je vais inverser les valeurs enregistrées dans nbr1 et nbr2,";
    cout << endl; // Saut de ligne
    cout << "en utilisant ces 3 opérations : nbr1=nbr1+nbr2, nbr2=nbr1-nbr2 et nbr1=nbr1-nbr2.";
    cout << endl; // Saut de ligne

    // Effectuer des calculs
    nbr1 = nbr1 + nbr2;
    nbr2 = nbr1 - nbr2;
    nbr1 = nbr1 - nbr2;

    // Afficher les sorties 2
    cout << endl; // Saut de ligne
    cout << "A la fin, nbr1 est égal à : " << nbr1 << " et nbr2 est égal à : " << nbr2 << ".";
    cout << endl; // Saut de ligne
}
