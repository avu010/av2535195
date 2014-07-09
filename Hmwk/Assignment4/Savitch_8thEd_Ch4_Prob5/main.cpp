/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Modify Ch4 Prob 5
 * Created on July 8, 2014, 7:11 PM
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
    float p1Yr;         //Price of item 1 year later from current date
    float p2Yr;         //Price of item 2 years later from current date
    
do{       
//Gather Data Input
    cout<<"Price of item today: $";
    cin>>pToday;
    cout<<"Price of item one year ago: $";
    cin>>pYrAgo;
    
//Calculate inflation rate & predicted prices
    inf=(pToday-pYrAgo)/pYrAgo;       
    p1Yr=inf*pToday+pToday;                  
    p2Yr=inf*p1Yr+p1Yr;
    
//Output Results
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Inflation rate: "<<inf*100<<"%\n";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Price of item in 1 year: $"<<p1Yr<<endl;
    cout<<"Price of item in 2 years: $"<<p2Yr<<endl;
    
//Ask user if he or she wants to repeat
    cout<<"Run again (Y/N)? ";
    cin>>choice;
    cout<<endl;
    
}while((choice=='Y'||(choice=='y')));

//Exit Stage Right!
    return 0;
}