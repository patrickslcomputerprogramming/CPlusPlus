/*
READ a number,
CALCULATE and WRITE the first ten multiplication table of this number.
*/
#include <iostream>
using namespace std ;
int main()
{
    //Declare variables and constants and initialize
    float mid_grade, final_exam, final_pro, final_grade=0;
    int i;

    for(i=1; i<=3; i++){
        //Invite, read, and save inputs
        //Calculate
        cout << "Enter grade #" << i;
        cout << endl; //Line break
        if (i == 1){
            cin >> mid_grade;
            final_grade = final_grade + mid_grade;
        }else if (i == 2){
            cin >> final_pro;
            final_grade = final_grade + final_pro;
        }else {
            cin >> final_exam;
            final_grade = final_grade + final_exam;
        }
    }

    //Display output
    cout << endl; //Line break
    cout << "Midterm Grade: " << mid_grade << endl;
    cout << "Final Project Grade: " << final_pro << endl;
    cout << "Final Exam Grade: " << final_exam << endl;
    cout << "Final Grade: " << final_grade;
    cout << endl; //Line break
}
