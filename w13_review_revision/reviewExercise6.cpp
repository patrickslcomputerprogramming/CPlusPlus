//Load libraries
#include <iostream> //For inputs out outputs
using namespace std;
//Global Structure declaration (structure tag and members)
struct Time
{
   int hour;
   int minute;
   int second;
} ;

struct Date
{
   int date;
   int month;
   int year;
   Time time;
} ;

struct Conference
{
   string conference_name;
   Date start_date;
   Date end_date;
} conference1 ;

//Main program
int main(){
    //Declare variables and initialize
    void collectInpuData();
    void displayOutputData();
    void replayOrNot();

    //Invite, Read, Validate and Save input data
    cout<<"COLLECT INPUT DATA ---------------------------"<<endl;
    collectInpuData();

    //Display output data
    cout<<endl;
    cout<<"DISPLAY OUTPUT DATA --------------------------"<<endl;
    displayOutputData();

    //Re-run the program via a subprogram
    cout<<endl;
    cout<<"REPLAY OR NOT --------------------------------";
    replayOrNot();
}

/*
Receives 3 integers as parameters. The first one is the number to validate.
The next 2 are the numbers corresponding to the minimum and the maximum valid numbers to be considered to validate the first number.
For example, 0 and 60 to validate a valid number of minutes that consequently cannot be lower than 0 or higher than 60.
*/
isNumberInRange(int aNumber, int minRange, int maxRange){
    //Declare Variables
    bool comparison_result = false;
    //Calculate
    if (aNumber>=minRange && aNumber<=maxRange){
        comparison_result = true;
    }
    //Return output data
    return comparison_result;
}


//Invites, read, validate using functions, and save the information required by the structure Conference.
void collectInpuData(){
    //Declare variables
    int isDateValid, isMonthValid, isYearValid;
    int isHourValid, isMinuteValid, isSecondValid;

    //Invite, Read, Validate and Save input data
    cout<<"Write the conference name, start date and end date, I will display them."<<endl<<endl;

    //Get the Conference Name
    cout<<"Enter the conference name. (E.g. Modern Programming Language)"<<endl;
    getline(cin >> ws, conference1.conference_name); //To write several words but not just 1 like with cin>>

    //Get the Conference Date
    do{
        //Invite, Read, Save and Validate
        cout<<endl;
        cout<<"Enter the conference start date, including the date, month. Add a space after writing each."<<endl;
        cout<<"(E.g. 31 12 2023 for December 31, 2024)"<<endl;
        cin>>conference1.start_date.date>>conference1.start_date.month>>conference1.start_date.year;
        //Calculate
        isDateValid=isNumberInRange(conference1.start_date.date, 1, 31);
        isMonthValid=isNumberInRange(conference1.start_date.month, 1, 12);
        isYearValid=isNumberInRange(conference1.start_date.year, 2000, 2030);
        //Validate
        if (isDateValid==false || isMonthValid==false || isYearValid==false){
            cout<<"ERROR!!! Date is not between 1 and 31. "
                <<"Or Month is not between 1 and 12. "
                <<"Or Year is not between 2000 and 2030."<<endl;
        }
    }
    while (isDateValid==false || isMonthValid==false || isYearValid==false);

    //Get the Conference Time
    do{
        //Invite, Read, Save and Validate
        cout<<endl;
        cout<<"Enter the conference start time, including the hour, minute and second. Add a space after writing each."<<endl;
        cout<<"(E.g. 14 30 00 for 14h30)"<<endl;
        cin>>conference1.start_date.time.hour>>conference1.start_date.time.minute>>conference1.start_date.time.second;
        //Calculate
        isHourValid=isNumberInRange(conference1.start_date.time.hour, 0, 23);
        isMinuteValid=isNumberInRange(conference1.start_date.time.minute, 0, 60);
        isSecondValid=isNumberInRange(conference1.start_date.time.second, 0, 60);
        //Validate
        if (isHourValid==false || isMinuteValid==false || isSecondValid==false){
            cout<<"ERROR!!! Hour is not between 0 and 23. "
                <<"Or Minute or Second is not between 0 and 60."<<endl;
        }
    }
    while (isHourValid==false || isMinuteValid==false || isSecondValid==false);
}


//Display the information saved in the structure Conference.
void displayOutputData(){
    //Display output data
    cout<<"Conference name: "<<conference1.conference_name<<endl;
    cout<<"Conference date: "
        <<conference1.start_date.date<<" - "
        <<conference1.start_date.month<<" - "
        <<conference1.start_date.year<<endl;
    cout<<"Conference time: "
        <<conference1.start_date.time.hour<<" : "
        <<conference1.start_date.time.minute<<" : "
        <<conference1.start_date.time.second<<" H"<<endl;
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
