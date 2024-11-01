/*
Programme qui LIT 2 nombres
CALCULE et AFFICHE leur somme
En utilisant 2 sous-programmes.
*/
//Entête
#include <iostream>
using namespace std ;
//Programme principal
int main()
{
    //Déclarer des variables et des constantes et initialiser
    string userName;
    float total_credit, credit_used, credit_available, interest_debt, total_debt;
    const float INTEREST_RATE = 13.75 /100;

    //Inviter, lire et enregistrer des entrées
    cout<<"COLLECT DATA (INPUTS)"<<endl;
    cout<<"Name of the borrower: ";
    cin>>userName;
    cout<<"Total amount of the line of credit: $";
    cin>>total_credit;
    cout<<"Amount of the line of credit already used: $";
    cin>>credit_used;

    //Calculer
    //Afficher les sorties
    credit_available = total_credit - credit_used;
    interest_debt = credit_used * INTEREST_RATE;
    total_debt = credit_used + interest_debt;

    //Display outputs
    cout<<endl<<"DISPLAY RESULTS (OUTPUTS)"<<endl;
    cout<<"Name: "<<userName<<endl;
    cout<<"Total Credit: $"<<total_credit<<endl;
    cout<<"Credit Already Used: $"<<credit_used<<endl;
    cout<<"Credit Still Available: $"<<credit_available<<endl;
    cout<<"Current Interest Debt: $"<<interest_debt<<endl;
    cout<<"Current Total Debt: $"<<total_debt<<endl;

}

