/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch1 Prob8
 * Created on June 25, 2014, 4:54 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Variable Declaration and Initialization 
    unsigned short total,qrts,dimes,nickls;

//Output Text
    cout<<"Please return after entering number.\n";
    cout<<"Enter number of quarters: ";
    
//Input Data
    cin>>qrts;
    
//Output Text
    cout<<"Please enter number of dimes: ";

//Input Data
    cin>>dimes;

//Output Text
    cout<<"Please enter number of nickels: ";
    
//Input Data
    cin>>nickls;
   
//Calculate Monetary Value in Cents
    total=qrts*25+dimes*10+nickls*5;
    
//Output Final Answer
    cout<<"The total amount of money is "<<total<<" cents.\n";
    
//Exit Stage Right!
    return 0;
}

