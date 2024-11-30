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
    cout<<"COLLECT INPUT DATA --------------------------"<<endl;
    cout<<"Write a duration in hours, minutes and seconds, I will convert it and display it in seconds."<<endl<<endl;
    //Hours
    do{
        cout<<"Enter the hour. A number that can cannot be lower than 0."<<endl;
        cin>>duration1.hours;
            if(!cin)
            {
                cout<<"ERROR!!! You didn't enter a number. Try again!"<<endl<<endl;
                cin.clear(); //Reset cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
                duration1.hours = -1 ; //duration1.hours is 0 when a string is entered. Put -1 to make it fail the validation in }while()
            }
            else if (duration1.hours<0){
                cout<<"ERROR!!! "<<duration1.hours<<" is lower than 0."<<endl<<endl;
            }
    }while (!cin || duration1.hours<0);
    //Minutes
    cout<<endl;
    do{
        cout<<"Enter the minute. A number that can vary from 0 to 60."<<endl;
        cin>>duration1.minutes;
            if(!cin)
            {
                cout<<"ERROR!!! You didn't enter a number. Try again!"<<endl<<endl;
                cin.clear(); //Reset cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
                duration1.minutes = -1 ; //duration1.hours is 0 when a string is entered. Put -1 to make it fail the validation in }while()
            }
            else if (duration1.minutes<0 || duration1.minutes>60){
                cout<<"ERROR!!! "<<duration1.minutes<<" is lower than 0 or higher than 60."<<endl<<endl;
            }
    }while (!cin || duration1.minutes<0 || duration1.minutes>60);
    //Seconds
    cout<<endl;
    do{
        cout<<"Enter the second. A number that can vary from 0 to 60."<<endl;
        cin>>duration1.seconds;
            if(!cin)
            {
                cout<<"ERROR!!! You didn't enter a number. Try again!"<<endl<<endl;
                cin.clear(); //Reset cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore the rest of the user input
                duration1.seconds = -1 ; //duration1.hours is 0 when a string is entered. Put -1 to make it fail the validation in }while()
            }
            else if (duration1.seconds<0 || duration1.seconds>60){
                cout<<"ERROR!!! "<<duration1.seconds<<" is lower than 0 or higher than 60."<<endl<<endl;
            }
    }while (!cin || duration1.seconds<0 || duration1.seconds>60);

    //Display output data
    cout<<endl;
    cout<<"DISPLAY OUTPUT DATA --------------------------"<<endl;
    cout<<"You entered "<<duration1.hours<<" Hours, "<<duration1.minutes<<" Minutes, and "<<duration1.seconds<<" Seconds."<<endl;
    cout<<"It is equivalent to "<<duration1.converToSecond()<<" Seconds."<<endl;

    //Re-run the program via a subprogram
    cout<<endl;
    cout<<"REPLAY OR NOT --------------------------------";
    replayOrNot();
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
