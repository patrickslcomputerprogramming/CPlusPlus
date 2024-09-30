/*
LIRE une quantité indiquée de nombres,
CALCULER et ÉCRIRE leur somme et leur moyenne.
*/
#include <iostream>
using namespace std ;
int main()
{
//Déclarer des variables et des constantes et initialiser
    float eachnumber, numbersSum=0, numbersAverage;
    int numbersQuantity, i;

//Inviter, lire et enregistrer des entrées
    cout << "Combien de nombres y a-t-il dans votre ensemble de données ?";
    cout << endl; //Saut de ligne
    cin >> numbersQuantity;
    cout << endl; //Saut de ligne

    for(i=1; i<=numbersQuantity; i++)
    {
//Inviter, lire et enregistrer des entrées
        cout << "Entrer le numéro #" << i;
        cout << endl; //Saut de ligne
        cin >> eachnumber;

//Calculer
        numbersSum = numbersSum + eachnumber;
    }

//Calculer
    numbersAverage = numbersSum / numbersQuantity;

//Afficher la sortie
    cout << endl; //Saut de ligne
    cout << "Quantité de nombres : " << numbersQuantity << endl;
    cout << "Somme de nombres : " << numbersSum << endl;
    cout << "Moyenne de nombres : " << numbersAverage << endl;
    cout << endl; //Saut de ligne
}
