/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch1 Prob5
 * Created on June 25, 2014, 1:25 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Variable Declaration
    short int1, int2, sum, prod;

//Output Simple Text
    cout<<"Please return after entering a number.\n";
    cout<<"Please enter first integer: ";
    
//Input Data
    cin>>int1;
            
//Output Simple Text
    cout<<"Please enter second integer: ";
    
//Input Data 
    cin>>int2;
    
//Calculations - sum and product of int1 and int2
    sum=int1+int2;
    prod=int1*int2;
    
//Output Text
    cout<<"\nThe sum of the integers is "<<sum<<endl;
    cout<<"and the product of the integers is "<<prod<<"."<<endl;
    cout<<"\nThis is the end of the program.\n";
    
//Exit Stage Right!
    return 0;
}

