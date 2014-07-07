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
    //Output
    float totAmt;   //Total Amount Due
    
//Gather Data Input
    cout<<"Enter your account balance: $";
    cin>>bal;
    
//Calculate interest rate, total amount due, and minimum amount due.
    if (bal<=1000) {                //If balance is less than or equal to $1000
        rate=1.5e-2;
        totAmt=bal*rate+bal;    
        if(totAmt<=10)      //Nested if else - if total amount is less than or equal to $10
            min=10;                 
        else                //Nested if else - If total amount is greater than $10
            min=totAmt;
    }
    else {                          //If balance is greater than $1000
        rate=1e-2;
        totAmt=(1.5e-2)*(1000)+rate*(bal-1000)+bal; 
        min=totAmt;
    }

//Output Results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Total Amount Due: $"<<totAmt<<endl;
    cout<<"Minimum Payment: $"<<min<<endl;
    
    return 0;
}

