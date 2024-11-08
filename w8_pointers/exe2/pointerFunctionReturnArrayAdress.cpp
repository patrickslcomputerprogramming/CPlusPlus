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
    float * calculate_double_salary (float * salary_set, int salary_set_size);
    int salary_size=5;
    float salary[salary_size]={6000,2500,8000,4050,5050};
    int i;
    //Pointer to receive the array that includes the double salaries
    //Pointeur pour recevoir la liste des salaires doubles
    float * double_salary;

    //Call the function that returns an array address including thedouble of salary
    //Assigner la fonction qui calcule les salaires doubles
    double_salary = calculate_double_salary (salary, salary_size);

    //Display outputs
    //Afficher les sorties
    for (i=0; i<5; i++){
        cout<<double_salary[i]<<endl;
    }
}

//User-defined function (sub-program)
//Fonction definie par l'utilisateur (sous-programme)
float * calculate_double_salary (float * salary_set, int salary_set_size)
{
    //Declare variables
    //Declarer les variables
    int i;
    float * double_salary_set; //Peut etre declarer aussi - Can be also declared "float double_salary_set[salary_set_size];"

    //Calculate the double of each array element and save it in a new array
    //Calculer le double de chaque element de liste et sauvegarder le dans une nouvelle liste
    for (i=0; i<salary_set_size; i++){
        double_salary_set[i] = salary_set[i] * 2;
    }

    //Return the new array
    //Renvoyer la nouvelle liste
    return double_salary_set;
}
