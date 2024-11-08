#include<algorithm>
#include <iostream>
using namespace std;

int main()
{
    //Déclarer des sous-programmes
    int * liste_croissant(int * arr, int t);
    int * liste_decroissant(int * arr, int t);

    //Déclarer des variables
    int taille = 3;
    int arr[taille] = {5, 1, 4};
    int i;
    typedef int * PointeurEntier;
    PointeurEntier ordre_croissant;
    ordre_croissant = new int[taille];
    PointeurEntier ordre_decroissant;
    ordre_decroissant = new int[taille];

    //Appeler des sous-programmes pour calculer
    ordre_croissant = liste_croissant(arr, taille);

    //Afficher les sorties
    cout<<"Ordre Croissant:"<<endl;
    for (i=0; i<taille; i++){
        cout<<ordre_croissant[i]<<"  ";
    }


    //Appeler des sous-programmes pour calculer
    ordre_decroissant = liste_decroissant(arr, taille);

    cout<<endl<<"Ordre Decroissant:"<<endl;
    for (i=0; i<taille; i++){
        cout<<ordre_decroissant[i]<<"  ";
    }

    cout<<endl<<"Liste initial:"<<endl;
    for (i=0; i<taille; i++){
        cout<<arr[i]<<"  ";
    }

    //Supprimer les pointeurs
    delete[] ordre_croissant;
    delete[] ordre_decroissant;
}

//Fonction qui renvoie une liste d'entier en ordre croissant (array)
int * liste_croissant(int * arr, int t)
{
    //Declare variables
    int * arr_in_fct;
    int i;
    //Do not modify arr but create a new array to save its data
    for (i=0; i<t; i++){
        arr_in_fct[i] = arr[i];
    }
    //Trier par ordre croissant
    sort(arr_in_fct, arr_in_fct+t);
    //Renvoie une liste (array)
    return arr_in_fct;
}

//Fonction qui renvoie une liste d'entier en ordre decroissant (array)
int * liste_decroissant(int * arr, int t)
{
    //Declare variables
    int * arr_in_fct;
    int i;
    //Do not modify arr but create a new array to save its data
    for (i=0; i<t; i++){
        arr_in_fct[i] = arr[i];
    }
    //Trier par ordre croissant
    sort(arr_in_fct, arr_in_fct+t, greater<int>());
    //Renvoie une liste (array)
    return arr_in_fct;
}
