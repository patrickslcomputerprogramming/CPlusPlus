/*
READ
CALCULATE and WRITE
*/
#include <iostream>
#include <limits>
using namespace std;
int main()
{
//Declare variables and constants and initialize
    int number_int;
    float number_float;
    char symbol;
    float sum_or_product(int nbr1, float nbr2, char sign);
    void restart_function();
//Invite, Read, Validate and Save input data
cout<<"COLLECT INPUT DATA --------------------------"<<endl;
    //Number Int
    do{
        cout<<"SVP, Entrez un nombre entier: \n";
        cin >> number_int;

        if(!cin)
        {
            cout<<"ERREUR!!! Vous n'avez pas entrez un nombre. Essayez à nouveau! \n";
            cin.clear(); //Reset cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
        }
    }while (!number_int);

        //Number Float
    do{
        cout<<"SVP, Entrez un nombre décimal: \n";
        cin >> number_float;

        if(!cin)
        {
            cout<<"ERREUR!!! Vous n'avez pas entrez un nombre. Essayez à nouveau! \n";
            cin.clear(); //Reset cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
        }
    }while (!number_float);

    //Symbol + or x
    do{
        cout << "Entrez + ou x pour calculer la somme ou le produit des 2 nombres"<<endl;
        cin >> symbol;

    if(symbol != '+' && symbol != 'x'){
      cout<<"ERREUR!!! "<<symbol<<" n'est pas + ou x: \n";
    }

    }while(symbol != '+' && symbol != 'x');
//Calculate
//Display output data
cout<<endl;
cout<<"DISPLAY OUTPUT DATA --------------------------"<<endl;
cout << number_int << " " << symbol << " " << number_float << " = " <<
sum_or_product(number_int, number_float, symbol);
cout<<endl;


//Re-run the program via a subprogram
restart_function();
}


/*
User-defined Function 1
Receives 1 integers, 1 decimal number, and 1 symbol between + and x as arguments;
Calculates and returns:
-the addition (sum) of the 2 numbers when the third argument is + ;
-the multiplication (product) of the 2 numbers when the third argument is x.
*/

float sum_or_product(int nbr1, float nbr2, char sign)
{
    // declare varibles
    float result;

    // calculate
    if(sign == '+')
    {
        result = nbr1 + nbr2;
    }
    else
    {
        result = nbr1 * nbr2;
    }
    // return output data
    return result;
}

/*
User-defined Function 2
Does not receive arguments. Invite the user to answer, read, validate
and save the user answer in order to replay the program or not.
You can use exit(0) to stop the program and main() to replay it.
*/

void restart_function(){
//declare varibles
char to_restart;

//Invite, Read, Validate and Save input data
cout << endl;
cout<<"Voulez-vous ré-executer le programme?"<<endl
    <<"Pressez Y pour continuer et n'importe quelle autre touche pour quitter: ";
cin >> to_restart;

//calculate
if(to_restart == 'Y' || to_restart == 'y')
{
    main();
}

else{
    exit(0);
}
}


