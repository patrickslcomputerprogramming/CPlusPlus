//Return an Array address from a user-defined Function using Pointers
//Renvoie l'adresse d'une liste via une fonction definie par l'utilisateur en utilisant un pointeur
#include <bits/stdc++.h>
using namespace std;
//Main program
//Programme principal
int main()
{
    //Declare variables
    //Declarer les variables
    int * read_numbers (int set_of_numbers_size); //Function - Fonction
    int * arrayOfNumbers; //Pointer - Pointeur
    int numberOfNumbers=4;
    int i;

    //Call the function that returns an array address including thedouble of salary
    //Assigner la fonction qui calcule les salaires doubles
    arrayOfNumbers = read_numbers (numberOfNumbers);

    //Display outputs
    //Afficher les sorties
    cout<<endl;
    for (i=0; i<numberOfNumbers; i++) {
        cout<<"Number #"<<i+1<<" entered: "<<arrayOfNumbers[i]<<endl;
    }

    //Delete pointer
    //Supprimer pointeur
    delete arrayOfNumbers;
}

//User-defined function (sub-program)
//Fonction definie par l'utilisateur (sous-programme)
int * read_numbers (int set_of_numbers_size)
{
    //Declare variables
    //Declarer les variables
    int i;

    //Pointer to receive the array that includes the double salaries
    //Pointeur pour recevoir la liste des salaires doubles
    typedef int * IntPointerDatatype;
    IntPointerDatatype set_of_numbers;
    set_of_numbers = new int[set_of_numbers_size];

    for (i=0; i<set_of_numbers_size; i++){
        cout<<"Enter the number # "<<i+1<<" :  ";
        cin>>set_of_numbers[i];
    }

    //Return the new array
    //Renvoyer la nouvelle liste
    return set_of_numbers;
}
