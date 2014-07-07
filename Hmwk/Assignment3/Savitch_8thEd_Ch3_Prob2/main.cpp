/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Credit Account
 * Created on July 6, 2014, 6:44 PM
 */


//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input
    float bal;      //Account Balance
    float rate;     //Interest Rate
    float min;      //Minimum payment
    char choice;    //Whether or not user wants to calculate again. (Y/N)
    //Output
    float totAmt;   //Total Amount Due
    
//Calculate interest rate, total amount due, and minimum amount due.
    do{        
    //Gather Data Input
    cout<<"Enter your account balance: $";
    cin>>bal;
    //If balance is less than or equal to $1000
    if (bal<=1000) {              
        rate=1.5e-2;
        totAmt=bal*rate+bal; 
        //Nested if - if total amount is less than or equal to $10
        if(totAmt<=10)     
            min=10;  
        //Nested else - If total amount is greater than $10
        else                
            min=totAmt;
    }
    //If balance is greater than $1000
    else {                         
        rate=1e-2;
        totAmt=(1.5e-2)*(1000)+rate*(bal-1000)+bal; 
        min=totAmt;
    }    
    //Output Results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Total Amount Due: $"<<totAmt<<endl;
    cout<<"Minimum Payment: $"<<min<<endl;
    cout<<endl;    
    //Ask user if he or she wants to run the program again.
    cout<<"Calculate again (Y/N)? ";
    cin>>choice;
    cout<<endl;
    } while ((choice=='Y')||(choice=='y'));
    
    return 0;
}

