#include<algorithm>
#include <iostream>
using namespace std;

int main()
{
    //D�clarer des sous-programmes
    //Declare subprograms
    int* function_liste(int * arr, int t);

    //D�clarer des variables
    //Declare variables
    int arr[3] = {5, 1, 4};
    int i;
    int taille;
    typedef int * PointeurEntier ; //Creer un type de donnees pointeur d'entier - Create a integer pointer datatype
    PointeurEntier ptr; //Declarer un pointeur du type cree - Declare a pointer of the datatype created

    //Calculer
    //Calculate
    taille = sizeof(arr)/ sizeof(arr[0]);

    //Appeler des sous-programmes pour calculer
    //Call sub-programs to calculate
    ptr = function_liste(arr, taille);  //Utiliser le pointeur - Use the pointer

    //Afficher les sorties
    //Display outputs
    for (i=0; i<taille; i++){
        cout<<ptr[i]<<"  ";
    }

    //Supprimer le pointeur
    //Delete the pointer
    delete [] ptr;
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
