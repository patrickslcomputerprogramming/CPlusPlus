// Declare and initialize and display an unidementional array
#include <iostream>
using namespace std;
int main()
{

    // Déclarer et initialiser les variables
    const int PASSING_GRADE = 60;
    int i;
    int array_size ;
    float user_typing;
    int success = 0, failure = 0;
    float sum_grades = 0;
    float average_grades;

    // Inviter l'utilisateur à écrire le nombre de notes à sauvegarder (taille du tableau)
    cout << "Combien de notes souhaitez-vous saisir ?" << endl;
    cin >> array_size;

    // Déclarer et initialiser les variables
    float student_grades[array_size];

    cout << endl; // Saut de ligne
    // Enregistrer les éléments d'un tableau à l'aide du clavier
    for (i = 0; i < array_size; i++)
    {
        // Inviter, lire et valider chaque note
        do
        {
            cout << "Entrer la note " << i + 1 << " : " << endl;
            cin >> user_typing;

            if (user_typing < 0 or user_typing > 100)
                cout << "Erreur !!! ";
        } while (user_typing < 0 or user_typing > 100);

        // Enregistrer chaque note dans le tableau
        student_grades[i] = user_typing;

        // Compter les réussites et les échecs en fonction de la note de passage
        if (student_grades[i] >= PASSING_GRADE)
            success = success + 1;
        else
            failure = failure + 1;

        // Calculer la somme des notes
        sum_grades = sum_grades + student_grades[i];
    }

    // Calculer la moyenne
    average_grades = sum_grades / array_size;

    cout << endl;
    // Afficher les éléments d'un tableau
    for (i = 0; i < array_size; i++)
        cout << i + 1 << " = " << student_grades[i] << endl;

    cout << endl; // Saut de ligne

    // Afficher la réussite, l'échec et la moyenne
    cout << "Moyenne = " << average_grades << endl;
    cout << "Nombre de réussite = " << success << endl;
    cout << "Nombre d'échecs = " << failure << endl;
}
