/*
LIRE le prénom et le nom,
CALCULER et ÉCRIRE le nom complet qui est une combinaison des deux.
*/
#include <iostream>
using namespace std ;
int main()
{
//Déclarer les variables et les constantes et initialiser
    string prenom ;
    string nom_de_famille ;
    string nom_complet ;

//Inviter, lire et enregistrer les entrées
    cout << "ENTREES:" ;
    cout << endl ; //Saut de ligne
    cout << "ENTREZ PRENOM:" ;
    cout << endl ; //Saut de ligne
    cin >> prenom;
    cout << "ENTREZ NOM DE FAMILLE:" ;
    cout << endl ; //Saut de ligne
    cin >> nom_de_famille ;

//Calculer
    nom_complet = prenom + " " + nom_de_famille ;

//Afficher la sortie
    cout << endl ; //Saut de ligne
    cout << "SORTIES:" ;
    cout << endl ; //Saut de ligne
    cout << "PRENOM: "<< prenom ;
    cout << endl ; //Saut de ligne
    cout << "NOM DE FAMILLE: "<< nom_de_famille ;
    cout << endl ; //Saut de ligne
    cout << "NOM COMPLET: "<< nom_complet ;
    cout << endl ; //Saut de ligne
}
