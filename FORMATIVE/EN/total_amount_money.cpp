/*
READ the quantity of each Canadian Paper Piece Money of 5, 10, and 20 dollars entered,
CALCULATE and WRITE the total amount of money.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    float amount5dollars, amount10dollars, amount20dollars, total_dollars;

    //Invite, read, and save inputs
    //Read 5 dollars
    cout << "Enter the quantity of 5 dollars: ";
    cout << endl; //Line break
    cin >> amount5dollars;
    cout << endl; //Line break
    //Read 10 dollars
    cout << "Enter the quantity of 10 dollars: ";
    cout << endl; //Line break
    cin >> amount10dollars;
    cout << endl; //Line break
    //Read 20 dollars
    cout << "Enter the quantity of 20 dollars: ";
    cout << endl; //Line break
    cin >> amount20dollars;
    cout << endl; //Line break

    //Calculate
    total_dollars = (5*amount5dollars) + (10*amount10dollars) + (20*amount20dollars);

    //Display outputs
    cout << endl; //Line break
    cout << "Total money: "<< endl << total_dollars <<" dollars";
    cout << endl; //Line break
}
