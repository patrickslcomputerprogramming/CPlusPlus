#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    int nbr_lignes, nbr_colonnes;
    //Créer un type de données
    typedef int * IntTableau;

    //Inviter, Lire et Enregistrer les données d'entrées
    cout<<"Entrez nombre de lignes "<<endl;
    cin>>nbr_lignes;
    cout<<"Entrez nombre de colonnes "<<endl;
    cin>>nbr_colonnes;

    //Créer un tableau a 2 dimensions avec le type de donnees crées
    //Tableau de 2 lignes et 3 colonnes (2x3)
    //Créer lignes
    IntTableau * lignescolonnes = new IntTableau[nbr_lignes];
    //Créer colonnes à chaque ligne
    for (i=0; i<nbr_lignes; i++)
        lignescolonnes[i] = new int[nbr_colonnes];

    //Inviter, Lire et Enregistrer les données d'entrées
    for (i = 0; i < nbr_lignes; i++){
        for (j = 0; j < nbr_colonnes; j++){
            cout<<"Entrez # Ligne "<<i+1<<" # Colonne "<<j+1<<" : ";
            cin >> lignescolonnes[i][j];
            cout<<endl;
        }
    }

    //Afficher les sorties
    cout<<"Voila le tableau: "<<endl;

    for (i = 0; i < nbr_lignes; i++){
        for (j = 0; j < nbr_colonnes; j++){
            cout<< lignescolonnes[i][j] <<"   ";
        }
        cout<<endl;
    }

    //Supprimer le tableau 2 x 3
    //Supprimer colonnes à chaque ligne
    for (i = 0; i < nbr_lignes; i++){
        delete[] lignescolonnes[i];
    }
    //Supprimer lignes
    delete[] lignescolonnes;
}
