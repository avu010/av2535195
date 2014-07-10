/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: House pricing
 * Created on July 10, 2014, 3:55 PM
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
    //Declare Variables
    //Input
    float prceH;           //Price of house
    float dwnPmt;          //Down payment
    char choice;           //Whether user wants to compute again
    //Calculations
    float amc;             //Annual mortgage cost
    float loanBal;         //Initial loan balance
    float princ;           //Loan principle
    float intrst;          //Interest
    float saving;          //Savings from tax
    //Output
    float aTax;         //Cost of house after tax
    
    //Loop allows user to repeat as many times as he or she wants
    do{
        //Prompt user to input data
        cout<<"Price of house: $";
        cin>>prceH;
        cout<<"Down payment: $";
        cin>>dwnPmt;

        //Calculations
        loanBal=prceH-dwnPmt; 
        princ=.03*(loanBal);  
        intrst=.06*(loanBal);   
        amc=princ+intrst; 
        saving=intrst*.35;     
        aTax=amc-saving; 

        //Output Results
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"After 1 year of ownership, the annual after-tax cost of this";
        cout<<" new house is $"<<aTax;
        
        //Ask user if he or she wants to run again
        cout<<endl;
        cout<<"Would you like to calculate for another house (Y/N)? ";
        cin>>choice;
        cout<<endl;
        
    }while((choice=='Y')||(choice=='y'));
    
    //Exit Stage Right!
    return 0;
}

