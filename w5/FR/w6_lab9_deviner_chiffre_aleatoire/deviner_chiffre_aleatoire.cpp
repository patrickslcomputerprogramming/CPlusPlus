/*
LIRE 1 chiffre entre 0 et 6.
CALCULER s'il est équivalent à un chiffre généré aléatoirement
et répéter ce processus 6 fois pour ÉCRIRE à la fin un message WIn ou Failure,
incluant le chiffre généré et le nombre de tentatives pour le deviner.
*/
#include <iostream>
#include<time.h>
using namespace std;
int main()
{
    //Déclarer des variables et des constantes et initialiser
    int nombreIterations = 5, chiffreUtilisateur, nombreEchecs = 0, chiffreAleatoire;

    //Calculer
    //Générer un chiffre aléatoire de 0 à 6
    srand(time(0)); //La bibliothèque #include<time.h> est requise pour exécuter ce code
    chiffreAleatoire = rand()%6;

    do
    {
        //Inviter, lire et enregistrer les entrées
        cout<<endl<<"Entrez un chiffre de 0 à 6 pour deviner celui que le système vient de générer."<<endl;
        cin>>chiffreUtilisateur;

        //Calculer
        //Afficher les sorties
        //Message pour les gagnants
        if (chiffreUtilisateur == chiffreAleatoire)
        {
            cout<<endl<<"Vous avez GAGNÉ !!!"<<endl;
            break;
        }

        //Compter les tentatives
        nombreEchecs = nombreEchecs + 1;

        //Message pour les perdants
        if (nombreIterations == 1)
            cout<<endl<<"Vous avez ÉCHOUÉ ! Réessayez !"<<endl;

        nombreIterations=nombreIterations - 1;
    }
    while (nombreIterations > 0 && nombreIterations <= 5);

    //Afficher les sorties
    cout<<"Chiffre aléatoire: "<<chiffreAleatoire<<endl;
    cout<<"Nombre d'échecs: "<<nombreEchecs<<endl;
}
