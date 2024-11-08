#include<algorithm>
#include <iostream>
using namespace std;

int main()
{
    //Déclarer des sous-programmes
    //Declare subprograms
    int* function_liste(int * arr, int t);

    //Déclarer des variables
    //Declare variables
    int arr[3] = {5, 1, 4};
    int i;
         int taille;

    //Calculer
    //Calculate
    taille = sizeof(arr)/ sizeof(arr[0]);

    //Appeler des sous-programmes pour calculer
    //Call sub-programs to calculate
    int *ptr = function_liste(arr, taille);

    //Afficher les sorties
    //Display outputs
    for (i=0; i<taille; i++){
        cout<<ptr[i]<<"  ";
    }
}

//Fonction (sous-proogramme) qui renvoie une liste (array)
//Function (sub-program) that returns an array
int* function_liste(int * arr, int t)
{
    //Trier par ordre croissant
    //Order in ascending
    sort(arr, arr+t);
    //Renvoie une liste (array)
    //Return an array
    return arr;
}
