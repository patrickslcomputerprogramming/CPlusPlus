#include<algorithm>
#include <iostream>
using namespace std;

int main()
{
    //Déclarer des sous-programmes
    //Declare subprograms
    void function_liste(int * initial_arr, int t, int * ascending_arr);

    //Déclarer des variables
    //Declare variables
    int taille = 3;
    int arr[taille] = {5, 1, 4};
    int i;
    /*
    typedef int * PointeurEntier ; //Creer un type de donnees pointeur d'entier - Create a integer pointer datatype
    PointeurEntier ptr; //Declarer un pointeur du type cree - Declare a pointer of the datatype created
    */
    int asc_arr[taille]; //Liste pour stocker les nombres croissants - Array to save the ascending numbers

    //Appeler des sous-programmes pour calculer
    //Call sub-programs to calculate
    function_liste(arr, taille, asc_arr);  //Utiliser le pointeur - Use the pointer

    //Afficher les sorties
    //Display outputs
    for (i=0; i<taille; i++){
        cout<<asc_arr[i]<<"  ";
    }

    /*
    //Supprimer le pointeur
    //Delete the pointer
    delete [] ptr;
    */
}

//Fonction (sous-proogramme) qui renvoie une liste (array)
//Function (sub-program) that returns an array
void function_liste(int * initial_arr, int t, int * ascending_arr)
{
    //Declare variables
    int i;
    //Assigner liste initiale a la liste ascendante - Modifier les donnees de la liste asc_arr[3] dans "int main()"
    //Assign initial list to ascending list - Modify the data of the array asc_arr[3] in "int main()"
    for (i=0; i<t; i++){
        ascending_arr[i]=initial_arr[i];
    }
    //Trier par ordre croissant
    //Order in ascending
    sort(ascending_arr, ascending_arr+t); //Modify permanenly the data of array received as parameter
}
