/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch1 Prob19
 * Created on July 1, 2014, 5:52 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare variables
    //Input
    unsigned short nEx;      //Number of exercises
    unsigned short scrRec;   //Score received
    unsigned short tPts;     //Total points possible
    //Output
    float SscrRec;           //Summation of scores received
    float StPts;             //Summation of total points possible
    float perc;              //Percentage
    
//Gather Data Input
    cout<<"How many exercises to input? ";
    cin>>nEx;
    cout<<endl;
    
//While loop to output appropriate amount of questions
    unsigned short n;     //Incremental Variable 
    n=0;                  //Assign initial value to 0
    while (n<nEx){
        n=n+1;
        cout<<"Score received for exercise "<<n<<": ";
        cin>>scrRec;
        cout<<"Total points possible for exercise "<<n<<": ";
        cin>>tPts;
        cout<<endl;
        //Calculate total received points and total possible points
        SscrRec=SscrRec+scrRec;
        StPts=StPts+tPts;  
    }

//Calculate percentage    
perc=(SscrRec/StPts)*100;

//Output Result
    cout<<"Your total is "<<SscrRec<<" out of "<<StPts;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<", or "<<perc<<"%.";
    

    return 0;
}

