/*
LIRE 3 COTES D'UN TRIANGLE,
CALCULER ET ECRIRE LE TYPE DE TRIANGLE APPROPRIE
EN UTILISANT DES INSTRUCTIONS if-else if-else.
*/
#include <iostream>
using namespace std;
int main()
{
    //Déclarer les variables et les constantes et initialiser
    string tri_unit, type_description, tri_type;
    float tri_side1, tri_side2, tri_side3;

    //Inviter, lire et enregistrer les entrées
    cout << "ENTREZ 3 NOMBRES QUI SONT LES MESURES DES 3 COTES D'UN TRIANGLE"<<endl;
    cout << "ET J'IDENTIFIERAI LE TYPE DE VOTRE TRIANLE (equilateral, isoceles ou scalene)"<<endl;
    cout <<endl<<"QUELLE EST L'UNITE DE MESURE DES COTES DE VOTRE TRIANGLES: km, m, dm, cm ?"<<endl;
    cin >> tri_unit;
    cout <<endl<<"ENTREZ LA MESURE DU 1e COTE"<<endl;
    cin >> tri_side1;
    cout <<endl<<"ENTREZ LA MESURE DU 2e COTE"<<endl;
    cin >> tri_side2;
    cout <<endl<<"ENTREZ LA MESURE DU 3e COTE"<<endl;
    cin >> tri_side3;

    //Calculer
    if (tri_side1==tri_side2 && tri_side1==tri_side3) {
        tri_type = "EQUILATERAL";
        type_description = "3 COTES DE MEME LONGUEUR";
    }
    else if (tri_side1!=tri_side2 && tri_side1!=tri_side3 && tri_side2!=tri_side3) {
        tri_type = "SCALENE";
        type_description = "3 COTES DE LONGUEURS DIFFERENTES";
    }
    else {
        tri_type = "ISOCELE";
        type_description = "2 COTES DE MEME LONGUEUR";
    }

    //Afficher les sorties
    cout<<endl<<"LES COTES DE VOTRE TRIANGLES MESURENT "<<tri_side1<<" "<<tri_unit<<", "
                                                 <<tri_side2<<" "<<tri_unit<<", ET "
                                                 <<tri_side3<<" "<<tri_unit<<".";
    cout<<endl<<"CONSEQUEMMENT, C'EST UN TRIANGLE "<<tri_type<<" PARCEQU'IL COMPREND "<<type_description<<".";
    cout << endl ; //Saut de ligne
}



