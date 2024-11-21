//Programme pour démontrer une structure.
#include <iostream>
using namespace std;
//Déclaration de structure globale (balise de structure et membres)
struct Etudiant
{
    const int annee_en_cours=2024;
    string nom[2];
    int annee_naissance;

    int calculer_age(){
        int age;
        age = annee_en_cours - annee_naissance;
        return age;
    }
};

struct Employee : Etudiant {
    float salaire;
};

//Programme principal
int main(){
    //Déclarer les variables et initialiser

    Employee employeeEnCours;

    //Inviter, lire et enregistrer les données d'entrée
    //Premier élève (élève numéro 1)
    cout<<"Entrer prenom Employe "<<endl;
    cin>>employeeEnCours.nom[0];
    cout<<"Entrer nom Employe "<<endl;
    cin>>employeeEnCours.nom[1];
    cout<<"Entrer annee naissance Employe"<<endl;
    cin>>employeeEnCours.annee_naissance;
    cout<<"Entrer salaire Employe"<<endl;
    cin>>employeeEnCours.salaire;

    //Afficher la sortie
    //Employé actuel
    cout<<endl<<"CURRENT EMPLOYEE"<<endl;
    cout<<"Firstnom : "<<employeeEnCours.nom[0]<<endl;
    cout<<"Lastnom : "<<employeeEnCours.nom[1]<<endl;
    cout<<"Age : "<<employeeEnCours.calculer_age()<<endl;
    cout<<"salaire : "<<employeeEnCours.salaire<<" $CA"<<endl;
}
