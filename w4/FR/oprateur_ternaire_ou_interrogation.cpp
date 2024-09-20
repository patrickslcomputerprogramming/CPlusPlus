#include <iostream>
using namespace std ;
int main()
{
    //Déclarer les variables et les constantes et initialiser
    int user_number=27;

    //Calculer
    //Afficher la sortie
    user_number >= 0 ? cout<< "Nombre positif" : cout<< "Nombre négatif";
}

/*
ÉQUIVALENT AVEC UNE DÉCLARATION IF-ELSE

#include <iostream>
using namespace std ;
int main()
{
    //Déclarer les variables et les constantes et initialiser
    int user_number=27;

    //Calculer
    //Afficher la sortie
    if (user_number>=0){
        cout<<"Vous avez écrit un nombre positif";
        cout<<endl ; //Saut de ligne
    }
    else{
        cout<<"Vous avez écrit un nombre négatif";
        cout<<endl ; //Saut de ligne
    }
}
*/