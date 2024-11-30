//Load libraries
#include <iostream> //For inputs out outputs
#include <limits>   //For validate text input instead of number : if(!cin)
using namespace std;
//Global Structure declaration (structure tag and members)
struct DurationInSeconds
{
    int hours;
    int minutes;
    int seconds;

    int converToSecond(){
        //Declare variables
        int total_seconds;
        //Calculate
        total_seconds = (hours * 60 * 60) + (minutes * 60) + seconds;
        //Return output data
        return total_seconds;
    }
};

//Main program
int main(){
    //Declare variables and initialize
    DurationInSeconds duration1;
    void replayOrNot();

    //Invite, Read, Validate and Save input data
    cout<<"COLLECTER DONNEES ENTREES --------------------------"<<endl;
    cout<<"Ecrivez une duree en heures, minutes et secondes, j'afficherai le tout en seconde."<<endl<<endl;
    //Hours
    do{
        cout<<"Entrez l'heure. Un nombre plus grand que 0."<<endl;
        cin>>duration1.hours;
            if(!cin)
            {
                cout<<"ERREUR!!! Entrez un nombre!"<<endl<<endl;
                cin.clear(); //Reset cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
                duration1.hours = -1 ; //duration1.hours is 0 when a string is entered. Put -1 to make it fail the validation in }while()
            }
            else if (duration1.hours<0){
                cout<<"ERREUR!!! "<<duration1.hours<<" est plus petit que 0."<<endl<<endl;
            }
    }while (!cin || duration1.hours<0);
    //Minutes
    cout<<endl;
    do{
        cout<<"Entrez les minutes. Un nombre entre 0 et 60."<<endl;
        cin>>duration1.minutes;
            if(!cin)
            {
                cout<<"ERREUR!!! Entrez un nombre!"<<endl<<endl;
                cin.clear(); //Reset cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
                duration1.minutes = -1 ; //duration1.hours is 0 when a string is entered. Put -1 to make it fail the validation in }while()
            }
            else if (duration1.minutes<0 || duration1.minutes>60){
                cout<<"ERREUR!!! "<<duration1.minutes<<" est plus petit que 0 ou plus grand que 60."<<endl<<endl;
            }
    }while (!cin || duration1.minutes<0 || duration1.minutes>60);
    //Seconds
    cout<<endl;
    do{
        cout<<"Enter the second. A number that can vary from 0 to 60."<<endl;
        cin>>duration1.seconds;
            if(!cin)
            {
                cout<<"ERREUR!!! Entrez un nombre!"<<endl<<endl;
                cin.clear(); //Reset cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
                duration1.seconds = -1 ; //duration1.hours is 0 when a string is entered. Put -1 to make it fail the validation in }while()
            }
            else if (duration1.seconds<0 || duration1.seconds>60){
                cout<<"ERREUR!!! "<<duration1.seconds<<" est plus petit que 0 ou plus grand que 60."<<endl<<endl;
            }
    }while (!cin || duration1.seconds<0 || duration1.seconds>60);

    //Display output data
    cout<<endl;
    cout<<"AFFICHER DONNEES SORTIES --------------------------"<<endl;
    cout<<"Vous avez saisi "<<duration1.hours<<" Heures, "<<duration1.minutes<<" Minutes, et "<<duration1.seconds<<" Secondes."<<endl;
    cout<<"qui correspondent à "<<duration1.converToSecond()<<" Secondes."<<endl;

    //Re-run the program via a subprogram
    cout<<endl;
    cout<<"RELANCER OU PAS --------------------------------";
    replayOrNot();
}

//Sub-Program to re-run or not the Main Program
void replayOrNot(){
    //Declare variables and constants and initialize
    char response;

    //Invite, read, and save inputs
    cout<<endl; //Line break
    cout<<"Voulez-vous ré-executer le programme?"<<endl
        <<"Pressez Y pour continuer et n'importe quelle autre touche pour quitter: ";
    cin>>response;
    cout<<endl; //Line break

    //Calculate and return
    //Display outputs
    if (response == 'Y'|| response == 'y'){
        main();
    }
    else{
        cout<<"Au revoir! Nous souhaitons vous revoir bientôt!";
        cout<<endl; //Line break
        return;
    }
}
