/*
READ
CALCULATE and WRITE
*/
#include <iostream>
#include <limits>
#include<time.h>
using namespace std;
int main()
{
//Declare variables and constants and initialize
    int quantityOfNumbers; //To save the quantity of numbers the user wrote
    int * theNumbers; //To save a set of numbers generated and returned by a function
    //User-defined functions
    int * generateSetOfNumbers(int quantity);
    void identify_highest_number(int arrayOfNumbers[], int arraySize);
    void replayOrNot();
//Invite, Read, Validate and Save input data
    do
    {
        cout << "How many unique numbers do you want to generate randomly?\n";
        cout << "Please enter a number greater than 1:\n";
        cin >> quantityOfNumbers;

        if(!cin)
        {
            cout<<quantityOfNumbers<<" is not a number: \n";
            cin.clear(); //Reset cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
        }
        else if(quantityOfNumbers <= 1)
        {
            cout << "ERROR!!! It's not a number greater than 1\n";
        }

    }
    while(quantityOfNumbers <= 1 || !cin);

//Calculate
    theNumbers = generateSetOfNumbers(quantityOfNumbers);

//Display output data
    identify_highest_number(theNumbers, quantityOfNumbers);

//Re-run the program via a subprogram
    replayOrNot();
}

/*
Receive a positive whole number higher than 1 as an argument;
Generates the quantity of unique random integers corresponding to
the argument received saves them in an array and returns the array
*/
int * generateSetOfNumbers(int quantity)
{
    // Declare variables
    //Variables
    srand(time(NULL)); //To generate a new number at each call of rand()
    int i, j;
    bool duplication;
    int minRandomNumnber = 1;
    int maxRandomNumnber = 99;
    //Create a pointer with specificity that it is an array including its size
    typedef int * IntPointerDatatype;
    IntPointerDatatype generated_numbers;
    generated_numbers = new int[quantity];

    //Calculate data
    //Generate and regenerate random numbers until they are unique
    do
    {
        //Generate random numbers
        for(i = 0; i < quantity; i++)
        {
            //Generate random numbers and save them in an array
            //Numbers from 0 to 100
            generated_numbers[i] = minRandomNumnber + rand()% maxRandomNumnber;
        }

        /*
        //Display each set of numbers generated before validation, this means even if they are not unique
        for(i = 0; i < quantity; i++)
        {
            cout << generated_numbers[i] << "   ";
        }
        */
        cout<<endl;
        //Validate random numbers are unique
        //quantity - 1 indicates that the last comparis4on will be the element before the last and the last
        duplication = false; //Initialize
        for(i = 0; i < (quantity - 1); i++)
        {
            //Do not compare the same index array elements
            //E.g. if(generated_numbers[0]==generated_numbers[0]) => j = i + 1
            for (j = i + 1; j < quantity; j++)
            {
                //Compare all different index array elements to check duplication
                if (generated_numbers[i] == generated_numbers[j])
                {
                    duplication = true;
                    break; //Stop the loop with the counter j
                }
            }
            if (duplication == true){
                break; //Stop the loop with the counter i
            }
        }
    }
    while(duplication == true);

    //Rerturn data
    return generated_numbers;
}


/*
Receives an array of integers, and the number of elements
included in this array as arguments;
compares these integers, and displays the highest integer.
*/
void identify_highest_number(int arrayOfNumbers[], int arraySize)
{
    //Declare variables
    int i;
    int highest_number = arrayOfNumbers[0]; //Reference to compare the other numbers

    //Display output data
    cout<<"The following "<<arraySize<<" unique numbers were randomly generated: "<<endl;
    for (i=0; i<arraySize; i++)
    {
        cout<<arrayOfNumbers[i]<< "  ";
    }

    //Calculate
    //Compare arraySize[0] to all the other array element to find the element that includes the highest number
    for (i=1; i<arraySize; i++)
    {
        if (arrayOfNumbers[i]>highest_number)
        {
            //If a number is higher than the current highest number save it as the highest
            highest_number = arrayOfNumbers[i];
        }
    }

    //Display output data
    cout<<endl;
    cout<<"The highest number among them is "<<highest_number<<endl;
}

//Sub-Program to re-run or not the Main Program
void replayOrNot(){
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
    if (response == 'Y'|| response == 'y'){
        main();
    }
    else{
        cout<<"Goodbye! Hope to see you again soon!";
        cout<<endl; //Line break
        return;
    }
}

