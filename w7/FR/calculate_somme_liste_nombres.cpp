/*
Programme qui comprend 2 sous-programmes,
utilisé pour LIRE 2 nombres
CALCULER et ENREGISTRER leur somme.
*/
#include <iostream>
using namespace std;
// Déclarer les variables et les constantes globales et initialiser
float calculate_sum(float arrayOfNumbers[], int quantityOfArrayElements);
void replayOrNot();
// Programme principal
int main()
{
    // Déclarer les variables et les constantes et initialiser
    int quantityOfNumbers;
    int i;
    float sumOfNumbers;

    // Inviter, lire et enregistrer les entrées
    cout << "Combien de nombres allez-vous écrire : ";
    cin >> quantityOfNumbers;
    cout << endl; // Saut de ligne

    // Déclarer les variables et les constantes et initialiser
    float setOfNumbers[quantityOfNumbers];

    // Inviter, lire et enregistrer les entrées
    for (i = 0; i < quantityOfNumbers; i++)
    {
        cout << "Entrer le nombre #:" << i + 1 << " : ";
        cin >> setOfNumbers[i];
    }

    // Calculer via un sous-programme
    // Afficher les sorties
    cout << endl; // Saut de ligne
    cout << "Les nombres " << quantityOfNumbers << " saisis sont : ";
    for (i = 0; i < quantityOfNumbers; i++)
    {
        cout << setOfNumbers[i] << " ";
    }
    cout << endl; // Saut de ligne
    cout << "Leur somme est égale à : " << calculate_sum(setOfNumbers, quantityOfNumbers);
    cout << endl; // Saut de ligne

    // Réexécuter le programme via un sous-programme
    replayOrNot();
}

// Sous-programme pour calculer la somme d'un ensemble de nombres dans un tableau
float calculate_sum(float arrayOfNumbers[], int quantityOfArrayElements)
{
    // Déclarer les variables et les constantes et initialiser
    int i;
    float sumOfArrayElements = 0;

    // Afficher les sorties
    for (i = 0; i < quantityOfArrayElements; i++)
    {
        sumOfArrayElements = sumOfArrayElements + arrayOfNumbers[i];
    }

    // Renvoyer les sorties
    return sumOfArrayElements;
}

// Sous-programme pour réexécuter ou non le programme principal
void replayOrNot()
{
    // Déclarer les variables et les constantes et initialiser
    char response;

    // Inviter, lire et enregistrer les entrées
    cout << endl; // Saut de ligne
    cout << "Voulez-vous rejouer le programme ?" << endl
         << "Appuyez sur O pour rejouer ou sur n'importe quelle autre touche pour quitter : ";
    cin >> response;
    cout << endl; // Saut de ligne

    // Calculer et renvoyer
    // Afficher les sorties
    if (response == 'O' || response == 'o')
    {
        main();
    }
    else
    {
        cout << "Au revoir ! J'espère vous revoir bientôt !";
        cout << endl; // Saut de ligne
        return;
    }
}