/*
LIRE une quantit� indiqu�e de nombres,
CALCULER et �CRIRE leur somme et leur moyenne.
*/
#include <iostream>
using namespace std ;
int main()
{
//D�clarer des variables et des constantes et initialiser
    float eachnumber, numbersSum=0, numbersAverage;
    int numbersQuantity, i;

//Inviter, lire et enregistrer des entr�es
    cout << "Combien de nombres y a-t-il dans votre ensemble de donn�es�?";
    cout << endl; //Saut de ligne
    cin >> numbersQuantity;
    cout << endl; //Saut de ligne

    for(i=1; i<=numbersQuantity; i++)
    {
//Inviter, lire et enregistrer des entr�es
        cout << "Entrer le num�ro #" << i;
        cout << endl; //Saut de ligne
        cin >> eachnumber;

//Calculer
        numbersSum = numbersSum + eachnumber;
    }

//Calculer
    numbersAverage = numbersSum / numbersQuantity;

//Afficher la sortie
    cout << endl; //Saut de ligne
    cout << "Quantit� de nombres : " << numbersQuantity << endl;
    cout << "Somme de nombres : " << numbersSum << endl;
    cout << "Moyenne de nombres : " << numbersAverage << endl;
    cout << endl; //Saut de ligne
}
