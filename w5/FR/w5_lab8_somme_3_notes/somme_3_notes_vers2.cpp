/*
LIRE un nombre,
CALCULER et �CRIRE la premi�re table de multiplication par dix de ce nombre.
*/
#include <iostream>
using namespace std ;
int main()
{
//D�clarer des variables et des constantes et initialiser
    float mid_grade, final_exam, final_pro, final_grade=0;
    int i;

    for(i=1; i<=3; i++)
    {
//Inviter, lire et enregistrer des entr�es
//Calculer
        cout << "Entrer la note #" << i;
        cout << endl; //Saut de ligne
        if (i == 1)
        {
            cin >> mid_grade;
            final_grade = final_grade + mid_grade;
        }
        else if (i == 2)
        {
            cin >> final_pro;
            final_grade = final_grade + final_pro;
        }
        else
        {
            cin >> final_exam;
            final_grade = final_grade + final_exam;
        }
    }

//Afficher la sortie
    cout << endl; //Saut de ligne
    cout << "Note de mi-session�: " << mid_grade << endl;
    cout << "Note du projet final�: " << final_pro << endl;
    cout << "Note de l'examen final�: " << final_exam << endl;
    cout << "Note finale�: " << final_grade;
    cout << endl; //Saut de ligne
}
