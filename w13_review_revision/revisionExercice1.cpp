/*
READ an interger
CALCULATE and WRITE whether it is an integer or not.
*/
#include <iostream>
#include <limits>
using namespace std;
int main()
{
//Declare variables and constants and initialize
    int receive_int();
    void is_multiple_of2(int valid_var);
    void replayOrNot();
//Invite, Read, Validate and Save input data
//Calculate
//Display output data
    is_multiple_of2(receive_int());
//Re-run the program via a subprogram
    replayOrNot();
}

//Invites to write an integer, validates it, saves it and returns it
int receive_int()
{
    //declare variable
    int var;
    int valid_var;
    //invite read save
    do
    {
        cout<<"SVP, Entrez un nombre entier: \n";
        cin>>var;

        if(!cin)
        {
            cout<<"ERREUR!!! Vous n'avez pas entrez un nombre entier. Essayez à nouveau! \n";
            cin.clear(); //Reset cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
        }
        else
        {
            valid_var = var;
        }

    }
    while(!var);

//Return output data
    return valid_var;
}

//Receives an integer as an argument, compares and displays whether it is a multiple of 2 or not
void is_multiple_of2(int valid_var)
{
//Declare variables
string isMultipleOf2OrNot;

//compare
    if(valid_var%2==0)
        isMultipleOf2OrNot=" est un multiple de 2.";
    else
        isMultipleOf2OrNot=" n'est pas un multiple de 2.";

//Display output data
cout<<valid_var<<isMultipleOf2OrNot<<endl;
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
