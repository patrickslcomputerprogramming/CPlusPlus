/*
READ
CALCULATE and WRITE
*/
#include <iostream>
#include <limits>
#include<time.h>
using namespace std;

//Global Variables
//Variables
int quantityOfLetters;
int i, j;
const string lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
const string uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string all_possible_letters = lowercase_letters + uppercase_letters;
//Functions
int saveNumberGreaterThan2();
char * collectSetOfLetters(int quantityOfLetters);
int calculateHighestRankLetter(char charArray[], int sizeCharArray);
void replayOrNot();

//Main Program
int main()
{
//Declare variables and constants and initialize
    int theAmountOfLetters;
    char * theLetters;
    int theLettersToNumbers[quantityOfLetters]; //To save the numbers corresponding to the letters

//Invite, Read, Validate and Save input data
    theAmountOfLetters = saveNumberGreaterThan2();
    theLetters  = collectSetOfLetters(theAmountOfLetters);

//Calculate
//Display output data
    calculateHighestRankLetter(theLetters, theAmountOfLetters);

//Re-run the program via a subprogram
    replayOrNot();
}


int saveNumberGreaterThan2()
{
    //Declare variables
    int howManyNumbers;

    //Invite, Read, Validate and Save input data
    //Quantity of letters
    do
    {
        cout<<"Enter 2 or more letters in lowercase and/or uppercase."<<endl;
        cout<<"How many letters do you want to enter?"<<endl;
        cin>>howManyNumbers;

        //Calculate
        if(!cin)
        {
            cout<<"An error was found! You didn't enter a number. Try again!"<<endl;
            cin.clear(); //Reset cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
        }
        else if(howManyNumbers<2)
        {
            cout<<"An error was found! You didn't enter a number highter than 1. Try again!"<<endl;
        }
        cout<<endl;
    }
    while(!howManyNumbers || howManyNumbers<2);

    //Return output data
    return howManyNumbers;
}

/*
1-	Invites, the number of times the user indicated,
to write 1 of the 26 letters of the alphabet (a-z),
validates it (unique letters), saves it and returns them in an array;
*/
char * collectSetOfLetters(int quantityOfLetters)
{
    // Declare variables
    bool isLetterValid;
    bool isLetterDuplicate;

    // Declare variables
    //Create a pointer with specificity that it is an array including its size
    typedef char * CharPointerDatatype;
    CharPointerDatatype collected_letters;
    collected_letters = new char[quantityOfLetters];

    //Invite, Read, Validate and Save input data
    //Letters
    cout<<"Write your "<<quantityOfLetters<<" letters"<<endl;

    //Read the letters one by one
    for (i=0; i<quantityOfLetters; i++)
    {
        //Read and save
        cout<<"Enter the letter #"<<(i+1)<<" : ";
        cin>>collected_letters[i];

        //Compare letters to the alphabet
        //Initialization
        isLetterValid = false;
        //Comparison
        //Compare the data_collected to the 52 upper and lower cases letters of the alphabet
        for (j=0; j<all_possible_letters.size(); j++)
        {
            if(collected_letters[i]==all_possible_letters[j])
            {
                isLetterValid = true;
                break; //If its a correct letter Continue to collect the next one when there is
            }
        }

        //If letter is different than an alphabet
        if(isLetterValid==false)
        {
            cout<<"An error was found! You didn't enter a valid letter (a-z). Try again!"<<endl;
            i = i - 1; // Decrease i to read the same letter range (array element)
            cout<<endl; //Line break
            continue;
        }

        //If letter is valid, Check if the letter is unique
        if (i!=0)    //Do not compare when it's the 1st letter, no other number to compare for duplication
        {
            //Initialize duplicate_numbers
            isLetterDuplicate = false;
            //Validate that the numbers are distinct
            //Put the letter in lower case and compre it with the previous unique lower case letters saved
            for (j=i-1; j>=0; j--)
            {
                if (tolower(collected_letters[i]) == tolower(collected_letters[j]))
                {
                    isLetterDuplicate=true;
                    break; //Go out of loop k
                }
            }

            if (isLetterDuplicate==true)
            {
                cout<<"An error was found! You already wrote this letter. Try again!"<<endl;
                i = i - 1; // Decrease i to read the same letter range (array element)
            }
        }
        cout<<endl; //Line break
    }

    //Rerturn data
    return collected_letters;
}


/*
Receives an array of integers and the number of elements within this array,
as arguments, and return the highest integers.
*/
int calculateHighestRankLetter(char * charArray, int sizeCharArray)
{
    //Declare variables
    int highestNumber;
    int theRankNumbers[sizeCharArray];

    //Calculate
    //Match letters to numbers
    for (i=0; i<sizeCharArray; i++) //Turn the number of array element to compare each
    {
        for (j=0; j<lowercase_letters.size(); j++) // Turn 26 times to compare each array element to an alphabet letter and save its rank
        {
            if(charArray[i] == lowercase_letters[j])
            {
                theRankNumbers[i] = j + 1; //Index 0 corresponds to rank 1 => a is index 0 but 1st letter rank (rank)
                //Calculte the highest number
                //Set the 1st, onlt the 1st element as the reference to start comparing
                if (i==0)
                {
                    highestNumber = theRankNumbers[0];
                }
                //Compare the next elements with the reference and update the reference when there's a higher number
                else if (theRankNumbers[i] > highestNumber)
                {
                    highestNumber = theRankNumbers[i];
                }
                //Stop to compare when 1 matching is find because each letter will match only 1 of the 26 letters of the alphabet
                break;
            }
        }
    }

    //Display output data
    cout<<"You entered the following "<<sizeCharArray<<" letters : "<<endl;
    cout<<"Placed at the rank indicated below them"<<endl;
    //Letters in uppercases and Rank
    for (i=0; i<sizeCharArray; i++)
    {
        cout<<"Letter #"<<i+1<<" : "<<charArray[i]<<"    Rank : "<<theRankNumbers[i]<<endl;
    }
    //Highest rank letter
    cout<<endl;
    cout<<"Consequently, "<<lowercase_letters[highestNumber-1]<<" is the letter with the highest rank among them!"<<endl;
}




//Sub-Program to re-run or not the Main Program
void replayOrNot()
{
    //Declare variables and constants and initialize
    char response;

    //Invite, read, and save inputs
    cout<<endl; //Line break
    cout<<"Do you want to replay the program?"<<endl
        <<"Press Y to replay or any other key to quit: ";
    cin>>response;
    cout<<endl; //Line break

    //Calculate and return
    //Display outputs
    if (response == 'Y'|| response == 'y')
    {
        main();
    }
    else
    {
        cout<<"Goodbye! Hope to see you again soon!";
        cout<<endl; //Line break
        return;
    }
}
