/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Savitch Ch2 Prob 3
 * Created on July 1, 2014, 9:53 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float MYRS=1.0f/12.0f;   //1Year is equal to 12 months, 1Yr/12Months

//Function Prototypes

//Execution Beings Here:
int main(int argc, char** argv) {
//Declare and Initialize Variables
    const float pInc=7.6e-2;   //Pay Increase is 7.6%
    unsigned short nMon=6;     //Number of months of retroactive pay is 6
    float oAnSal;              //Old Annual Salary
    float nAnSal;              //New Annual Salary
    float mSal;                //Monthly Salary
    float retP;                //Retroactive Pay

//Output Text and Input Data
    cout<<"Enter your previous annual salary. Hit return key when done.\n";
    cin>>oAnSal;
    
//Calculate Retroactive Pay, New Salary, and Monthly Salary
    retP=oAnSal*pInc*nMon*MYRS;
    nAnSal=oAnSal*(1+pInc);
    mSal=nAnSal*MYRS;
    
//Output Results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your new salary is $"<<nAnSal<<endl;
    cout<<"Retroactive Pay is $"<<retP<<endl;
    cout<<"Your new monthly salary is $"<<mSal<<endl;

//Exit Stage Right!
    return 0;
}

