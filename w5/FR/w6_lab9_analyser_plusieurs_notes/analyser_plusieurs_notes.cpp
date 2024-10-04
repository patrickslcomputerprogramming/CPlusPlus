/*
LIRE plusieurs notes sur 100 %.
CALCULER et ÉCRIRE le nombre de notes, le nombre de notes supérieures ou égales à 60 %,
le nombre de notes inférieures à 60 %, la note la plus élevée et la plus basse,
en utilisant une boucle et des conditions.
*/
#include <iostream>
#include<time.h>
using namespace std;
int main()
{
    //Déclarer des variables et des constantes et initialiser
    int i, nombreDeNotes, nombreDeEchecs, nombreDeSucces=0;
    float uneNote, plusPetiteNote, plusGrandeNote;

    //Inviter, lire et enregistrer des entrées
    cout<<"Veuillez saisir ci-dessous la quantité de notes sur 100 % que vous souhaitez analyser."<<endl;
    cin>>nombreDeNotes;

    for (i=1; i<=nombreDeNotes; i++)
    {

        //Inviter, lire et enregistrer les entrées
        cout<<endl<<"Entrer la note #"<<i<<" sur 100%"<<endl;
        cin>>uneNote;

        //Calculer

        //Identifier les notes les plus élevées et les plus basses
        //Considérer la 1ère note lue comme la plus élevée et la plus basse (référence)
        if (i==1)
        {
            plusGrandeNote = uneNote;
            plusPetiteNote = uneNote;
        }
        //Note la plus élevée
        if (uneNote>plusGrandeNote)
            plusGrandeNote=uneNote;
        //Note la plus basse
        else if (uneNote<plusPetiteNote)
            plusPetiteNote=uneNote;

        //Compter la quantité de notes >= 60 (Succès)
        if (uneNote<60)
            continue;
        nombreDeSucces = nombreDeSucces + 1;
    }

    //Calculer
    //Compter la quantité de notes < 60 (Échec)
    nombreDeEchecs = nombreDeNotes - nombreDeSucces;

    //Afficher les sorties
    cout<<endl; //Saut de ligne
    cout<< "Nombre de notes lues : " << nombreDeNotes;
    cout<<endl; //Saut de ligne
    cout<< "Nombre de notes supérieures ou égales à 60% (Succès!) : " << nombreDeSucces;
    cout<<endl; //Saut de ligne
    cout<<"Nombre de notes inférieures à 60% (Échec!) : " << nombreDeEchecs;
    cout<<endl; //Saut de ligne
    cout<< "Note la plus élevée : " << plusGrandeNote ;
    cout<<endl ; //Saut de ligne
    cout<<"Note la plus basse : " << plusPetiteNote ;
    cout<<endl ; //Saut de ligne
}
