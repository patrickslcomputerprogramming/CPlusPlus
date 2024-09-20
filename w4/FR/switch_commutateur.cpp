#include <iostream>
using namespace std ;
int main()
{
    //Déclarer les variables et les constantes et initialiser
    int user_number = 10;

    //Calculer
    //Afficher la sortie
    switch (user_number){
        case 0 :
            cout<< "Le nombre est 0.";
            break;
        case 1:
            cout<< "Le nombre est 1";
            break;
        case 2:
            cout<< "Le nombre est 2";
            break;
        default:
            cout<< "Le nombre n'est pas 0,1, ou 2";
    }
}

/*
ÉQUIVALENT AVEC UNE INSTRUCTION IF-ELSEIF-ELSE
#include <iostream>
using namespace std ;
int main()
{
    //Déclarer les variables et les constantes et initialiser
    int user_number = 10;

    //Calculer
    //Afficher la sortie
    if (user_number==0)
        cout<< "Le nombre est 0.";
    else if (user_number==1)
        cout<< "Le nombre est 1";
    else if (user_number==2)
        cout<< "Le nombre est 2";
    else
        cout<< "Le nombre n'est pas 0,1 ou 2";
}
*/