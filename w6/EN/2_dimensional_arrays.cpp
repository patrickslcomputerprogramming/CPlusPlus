//Program that uses an array that includes lines and columns
//Programme qui utilise un tableau comprenant des lignes et des colonnes
#include <iostream>
using namespace std;
int main()
{
    //Declare and initialize variables
    //Declarer et initialiser les variables
    char key[4][5] = {
                        {'a','b','c','d','e'},
                        {'f','g','h','i','j'},
                        {'k','l','m','n','o'},
                        {'p','q', 'r','s','t'}
                    };

    int i, j;


    //Display array elements
    //Using nested loops
    //Afficher les éléments du tableau
    //En utilisant des boucles imbriquées
    for (i=0; i<4; i++){ //Loop for rows - Boucle pour les lignes
        for (j=0; j<5; j++) {//Loop for columns - Boucle pour les colonnes
            cout<<key[i][j]<<" ";
        }
        cout<<endl //Line break - Saut de ligne
    }
}
