/*
Game to order in ascending or descending 6 unique numbers generated randomly,
including additionnal features, such as quit and validation of generated and input data.
*/
#include <iostream>
#include<time.h>
#include <limits>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Infinite loop to never stop the program until the user requests it
    while (true){
        //Declare variables and constants and initialize
        //For the menu
        int menu_choice;
        string order_name;
        //For the random numbers creation
        int const QUANTITY_OF_NUMBERS = 10;
        int random_numbers_set[QUANTITY_OF_NUMBERS];
        int const MAX_RANDOM_NUMBER = 9;
        int i, j, k;
        bool duplicate_numbers;
        //For the user numbers creation
        int user_numbers_set[QUANTITY_OF_NUMBERS];
        //For validating that the numbers written are the ones shown
        int same_number_shown = 0;
        //For validating ascending and descending order
        int incorrect_asc_order = 0;
        int incorrect_desc_order = 0;
        //For displaying the final message
        string finalDecisionMessage;

        //Menu and Choice
        do{
            //Write the MENU
            cout<<"*************************************************\n";
            cout<<"PLEASE PRESS :\n";
            cout<<" 1 TO ORDER NUMBERS IN ASCENDING ORDER\n";
            cout<<" 2 TO ORDER NUMBERS IN DESCENDING ORDER\n";
            cout<<" 3 TO QUIT\n";
            cout<<"*************************************************\n";

            //Write an invitation to choose a MENU OPTION
            cout<<"WRITE YOUR CHOICE (1, 2 OR 3): ";
            //Read and Save the MENU choice
            cin>>menu_choice;
            cout<<endl; //Line break

            //Calculate: Compare the MENU choice
            //If MENU choice is different than 1,2 or 3
            if (menu_choice<1 || menu_choice>3 || !cin){
                if (!cin){
                    cin.clear(); //Reset cin
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
                }
                cout<<endl; //Line break
                cout<<"OUPS!!! Wrong choice! Try again! \n";
            }
            //If MENU choice is 3
            //Write a GOODBYE message: QUIT THE GAME
            else if (menu_choice==3){
                system("cls"); //Clean the screen
                cout<<"Good bye! Hope to see you again soon! \n";
                return 0; //Stop the execution of the program
            }
            //If MENU choice is 2
            else if (menu_choice==2){
                order_name = "DESCENDING";
            }
            //If MENU choice is 1
            else {
                order_name = "ASCENDING";
            }
            cout<<endl; //Line break
        }while (menu_choice<1 || menu_choice>3 || !cin);

        //Calculate and Save in an array:
        //Generate distinct random numbers from 0 to 99
        //Calculate
        srand(time(NULL)); //To generate a new number at each call of rand()

        //Calculate
        //Generate a set of random numbers until they are distinct
            //Generate numbers
            for (i=0; i<QUANTITY_OF_NUMBERS; i++)
            {

                if (i==0) //Do not compare when the 1st number is generated, no other number to compare
                {
                    //Generate a new random number
                    random_numbers_set[i] = rand()%(MAX_RANDOM_NUMBER+1);
                }
                //Validate whether the numbers generated are distinct or not
                else //Start to compare when the 2nd number is generated
                {
                    do{
                        //Initialize duplicate_numbers
                        duplicate_numbers = false;

                        //Generate a new random number
                        random_numbers_set[i] = rand()%(MAX_RANDOM_NUMBER+1);

                        //Validate that the numbers are distinct
                        for (j=0; j<=i; j++)
                        {
                            for (k=j+1; k<=i; k++)
                            {
                                if (random_numbers_set[j] == random_numbers_set[k])
                                {
                                    duplicate_numbers=true;
                                    break; //Go out of loop k
                                }
                            }
                            if (duplicate_numbers==true){
                                break; //Go out of loop j
                            }
                        }
                    }while (duplicate_numbers==true);
                }
            }

        //Write the random numbers
        //Write an invitation to order the numbers in asc. or desc.
        system("cls"); //Clear the screen
        cout<<"LET'S GO! COUNT WITH US!\n";
        cout<<"Order the following "<<QUANTITY_OF_NUMBERS<<" numbers in "<<order_name<<" order:\n";
        //Dsplay set of distinct random numbers
        for (i=0; i<QUANTITY_OF_NUMBERS; i++){
            cout<<random_numbers_set[i]<<"   ";
        }

        cout<<endl<<endl; //Line break
        //Read and Save in an array the user numbers
        for (i=0; i<QUANTITY_OF_NUMBERS; i++){
            cout<<"Enter the number  #"<<i+1<<" : \n";
            cin>>user_numbers_set[i];
            if(!cin){
                cout<<"You didn't entered a number. Try again!\n";
                i--;
                cin.clear(); //Reset cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
            }
         }

        //Calculate: Compare user numbers between them
        //Check wheter they are distinct or not
        //Initialize duplicate_numbers
        duplicate_numbers = false;
        //Check duplication
        for (i=0; i<QUANTITY_OF_NUMBERS; i++)
        {
            for (j=i+1; j<QUANTITY_OF_NUMBERS; j++)
            {
                if (user_numbers_set[i] == user_numbers_set[j])
                {
                    duplicate_numbers=true;
                    break; //Go out of loop j
                }
            }
            if (duplicate_numbers==true)
            {
                break; //Go out of loop i
            }
        }

        if (duplicate_numbers==false){
            //Check if each number written corresponds to a number shown
            for (i=0; i<QUANTITY_OF_NUMBERS; i++)
            {
                for (j=0; j<QUANTITY_OF_NUMBERS; j++)
                {
                    if (user_numbers_set[i] == random_numbers_set[j])
                    {
                        same_number_shown++;
                    }
                }
            }
        }

        if (duplicate_numbers==true || same_number_shown!=QUANTITY_OF_NUMBERS){
            finalDecisionMessage="YOU DIDN'T USE ALL THE NUMBERS SHOWN! Try again!";
        }
        else {
            //Order the random numbers in asc.
            sort(random_numbers_set, random_numbers_set+QUANTITY_OF_NUMBERS);

            //Calculate: Compare the MENU choice
            //If order is ascending
            if (menu_choice==1){
                for (i=0; i<QUANTITY_OF_NUMBERS; i++)
                {
                        if (user_numbers_set[i] != random_numbers_set[i])
                        {
                            incorrect_asc_order++;
                        }
                }
            }
            //If order is descending if (menu_choice==2)
            else {
                for (i=0, j=QUANTITY_OF_NUMBERS-1; i<QUANTITY_OF_NUMBERS, j>=0; i++, j--)
                {
                    if (user_numbers_set[i] != random_numbers_set[j])
                    {
                        incorrect_desc_order++;
                    }
                }
            }

            if (incorrect_asc_order>0 || incorrect_desc_order>0){
                    finalDecisionMessage="ALL THE NUMBERS WERE NOT ORDERED IN " + order_name + " ORDER. Try again!";
            }
            else if (incorrect_asc_order==0 && incorrect_desc_order==0)
                finalDecisionMessage="YOU ORDERED YOUR NUMBERS CORRECTLY. Congratulations!";
        }

        //Display outputs
        cout<<endl; //Line break
        cout<<finalDecisionMessage;
        cout<<endl<<endl; //Line break
    }
}
