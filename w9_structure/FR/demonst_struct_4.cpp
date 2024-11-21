#include <iostream>
using namespace std ;
//Déclarer les variables globales
struct Achat
{
    string nom_produit;
    float prix_unitaire;
};

main()
{
    //Déclarer les variables et initialiser
    //Une variable de type structure Achat
    Achat client1, client1_prix_rabais;
    //Fonctions définies par l'utilisateur
    void save_Achat(Achat &achat_en_cours);
    Achat calculer_prix_rabais(Achat achat_en_cours);

    //Inviter, lire et enregistrer les données d'entrée
    //Une fonction qui reçoit une variable de type structure Achat en paramètre
    //Une fonction qui peut modifier les membres de la structure Acheter
    save_Achat(client1);

    //Afficher les données de sortie avant la remise
    cout<<endl<<"Avant le rabais"<<endl;
    cout<<"Nom produit : "<<client1.nom_produit<<endl;
    cout<<"Prix unitaire: "<<client1.prix_unitaire<<" $CA"<<endl;

    //Calculer une remise de 10% du prix
    //Une fonction qui renvoie une variable de type structure Achat
    //Une fonction qui reçoit une variable de type structure Achat en paramètre
    client1_prix_rabais = calculer_prix_rabais(client1);

    //Afficher les données de sortie après la remise
    cout<<endl<<"Après le rabais"<<endl;
    cout<<"Prix unitaire: "<<client1_prix_rabais.prix_unitaire<<" $CA"<<endl;
}

void save_Achat(Achat &achat_en_cours)
{
    //Inviter, lire et enregistrer les données d'entrée
    cout << "Entrer mon produit:"<<endl;
    cin >> achat_en_cours.nom_produit;
    cout << "Entrer prix unitaire:"<<endl;
    cin >> achat_en_cours.prix_unitaire;
}

Achat calculer_prix_rabais(Achat achat_en_cours)
{
    //Déclarer des variables
    float tenPercentOfPrice;
    //Calculer le prix - 10%
    tenPercentOfPrice = achat_en_cours.prix_unitaire * 0.1;
    achat_en_cours.prix_unitaire = achat_en_cours.prix_unitaire - tenPercentOfPrice;
    //Renvoyer les données de sortie
    return achat_en_cours;
}
