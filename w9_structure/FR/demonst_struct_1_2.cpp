// Programme pour démontrer une structure.
#include <iostream>
using namespace std;
// Déclaration de structure globale (balise de structure et membres)
struct Etudiant
{
    const int annee_actuelle = 2024;
    string nom[2];
    int annee_naissance;
    int age;
}numero1;
// Programme principal
int main()
{
    // Inviter, lire et enregistrer les données d'entrée
    // Premier élève (élève numéro 1)
    cout << "Entrez le prénom de l'étudiant 1" << endl;
    cin >> numero1.nom[0];
    cout << "Entrez le nom de famille de l'étudiant 1" << endl;
    cin >> numero1.nom[1];
    cout << "Entrez l'année de naissance de l'étudiant 1" << endl;
    cin >> numero1.annee_naissance;

    // Calculer
    numero1.age = numero1.annee_actuelle - numero1.annee_naissance;

    // Afficher la sortie
    // Premier élève (élève numéro 1)
    cout << endl
         << "ETUDIANT1" << endl;
    cout << "Prénom : " << numero1.nom[0] << endl;
    cout << "Nom de famille : " << numero1.nom[1] << endl;
    cout << "Age : " << numero1.age << endl;
}
