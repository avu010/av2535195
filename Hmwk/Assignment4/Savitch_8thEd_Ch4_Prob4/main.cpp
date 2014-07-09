/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Rate of inflation
 * Created on July 8, 2014, 6:54 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float CNVLG=0.264179f;    //Conversion from liters to gallons. 1L=0.264179 gal

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input
    float pToday;       //Price of item today
    float pYrAgo;       //Price of item 1 year ago
    char choice;        //Choice user makes to run again or not
    //Output
    float inf;          //Inflation rate
    
do{       
//Gather Data Input
    cout<<"Price of item today: $";
    cin>>pToday;
    cout<<"Price of item one year ago: $";
    cin>>pYrAgo;
    
//Calculate inflation rate
    inf=((pToday-pYrAgo)/pYrAgo)*100;       //Inflation rate as a percent
    
//Output Results
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Inflation rate: "<<inf<<"%\n";
    
//Ask user if he or she wants to repeat
    cout<<"Run again (Y/N)? ";
    cin>>choice;
    cout<<endl;
    
}while((choice=='Y'||(choice=='y')));
    
    return 0;
}

