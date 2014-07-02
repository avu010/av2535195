/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch2 Prob13
 * Created on July 2, 2014, 10:15 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
    const float hrMin=60.0f;        //60 minutes in 1 hour
    const float minSec=hrMin;       //60 seconds in 1 minute

//Function Prototypes 

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare variables
    float mph;                     //Miles per hour
    float fMin;                    //Minutes as float
    unsigned short iMin;           //Minutes as integer
    float fSec;                    //Seconds as float
    
//Output Text and Input Data
    cout<<"Enter the miles per hour: ";
    cin>>mph;
    
//Calculations
    fMin=hrMin/mph;                //Minutes in floating point
    iMin=fMin;                     //Minutes in integers; will truncate anything past decimal point
    fSec=(fMin-iMin)*minSec;       //Seconds in integers
    
//Output Results
    cout<<"Your pace is "<<iMin<<" minutes and ";
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<fSec<<" seconds per mile.\n";
            
//Exit Stage Right!
    return 0;
}

