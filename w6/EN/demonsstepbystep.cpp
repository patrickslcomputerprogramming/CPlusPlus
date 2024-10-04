//Unidimensional Arrays - Introduction
#include <iostream>
using namespace std;
int main()
{

    //Declare and initialize variables
    int i;
    //int score[5]={2, 4, 6, 8, 10};
    int score[5];




    //Another way to declare and initialize
    /*
    int score[5];
    score[0] = 2;
    score[1] = 4;
    score[2] = 6;
    score[3] = 4;
    score[4] = 6;*/



 /*
    //Display the results

    cout<<"Array element #1: "<<score[0]<<endl;
    cout<<"Array element #2: "<<score[1]<<endl;
    cout<<"Array element #3: "<<score[2]<<endl;
    cout<<"Array element #4: "<<score[3]<<endl;
    cout<<"Array element #5: "<<score[4]<<endl;

*/
    cout<<endl<<endl;

    //Display the elements of an array
    for (i=0; i<=4; i++){
        cout<<"Enter score #"<<i+1<<": "<<endl;
        cin>>score[i];
    }


    cout<<endl<<endl;



    //Display the elements of an array
    for (i=0; i<=4; i++)
        cout<<"Array element #"<<i+1<<": "<<score[i]<<endl;

    cout<<endl<<endl;


     /*
    //Input data to an array

    for (j=0; j<=3; j++){

        if (j==0)
            price_category="Sub-Total";
        else if (j==1)
            price_category="TVQ Tax";
        else if (j==2)
            price_category="TPS Tax";
        else
            price_category="Total";


       cout<<"Enter the "<<price_category<<" : ";
       cin>>price;
       price_array[j] = price;
    }

    cout<<endl<<endl;

    //Display the elements of an array
    for (j=0; j<=3; j++) {

        if (j==0)
            price_category="Sub-Total";
        else if (j==1)
            price_category="TVQ Tax";
        else if (j==2)
            price_category="TPS Tax";
        else
            price_category="Total";

        cout<<price_category<<" is: "<<price_array[j]<<endl;
    }

    */

}
