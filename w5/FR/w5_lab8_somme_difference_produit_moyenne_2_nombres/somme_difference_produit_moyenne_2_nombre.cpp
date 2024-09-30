/*
LIRE 2 nombres,
CALCULER et ÉCRIRE leur somme, écart, produit et moyenne.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Déclarer des variables et des constantes et initialiser
    char replayOrNot;

    do
    {
        //Déclarer des variables et des constantes et initialiser
        float number1;
        float number2;
        float sum_numbers;
        float abs_numbers;
        float product_numbers;
        float avg_numbers;

        //Inviter, lire et enregistrer des entrées
        cout << "Entrez un premier nombre" ;
        cout << endl; //saut de ligne
        cin >> number1;
        cout << "Entrez un deuxième nombre" ;
        cout << endl; //saut de ligne
        cin >> number2;
        cout << endl; //saut de ligne

        //Calculer
        sum_numbers = number1 + number2;
        abs_numbers = abs (number1 - number2);
        product_numbers = number1 * number2;
        avg_numbers = sum_numbers / 2;

        //Afficher la sortie
        cout << "NUMBER 1 = " << number1;
        cout << endl; //saut de ligne
        cout << "NUMBER 2 = " << number2;
        cout << endl; //saut de ligne
        cout << "SUM = " << sum_numbers;
        cout << endl; //saut de ligne
        cout << "ABS = " << abs_numbers;
        cout << endl; //saut de ligne
        cout << "PRODUCT = " << product_numbers;
        cout << endl; //saut de ligne
        cout << "AVG = " << avg_numbers;
        cout << endl; //saut de ligne

        //Inviter, lire et enregistrer des entrées
        cout << endl; //saut de ligne
        cout << "Voulez-vous rejouer le programme ? (O/N)";
        cout << endl; //saut de ligne
        cin >> replayOrNot;
        cout << endl; //saut de ligne

        //Calculer
        if (replayOrNot=='N' || replayOrNot=='n')
        {
            cout << "Au revoir ! ";
            cout << endl; //saut de ligne
        }

    //Calculer
    }
    while (replayOrNot=='O' || replayOrNot=='o');
}
