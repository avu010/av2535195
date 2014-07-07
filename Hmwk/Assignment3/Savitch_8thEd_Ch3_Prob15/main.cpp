/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Buoyancy
 * Created on July 6, 2014, 8:24 PM
 */

//System Level Libraries
#include <iostream>
#include<math.h>
using namespace std;

//User Libraries

//Global Constants
const float sWght=62.4f;  //Specific weight of water in pounds per feet cubed
const float pi=4.0*atan(1.0) ;  //Pi

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input
    float wght;         //Weight in pounds
    float rad;          //Radius in feet
    //Calculations
    float vol;          //Volume of sphere
    float bFrc;         //Buoyant force
    
//Gather input data
    cout<<"Weight in pounds: ";
    cin>>wght;
    cout<<"Radius in feet: ";
    cin>>rad;
    
//Calculate volume of sphere
    vol=(4*pi*rad*rad*rad)/3;
    bFrc=vol*sWght;
    
//Determine whether object will float or sink
    if(bFrc>=wght)
        cout<<"The object will float.";
    else
        cout<<"The object will sink.";
            
//Exit Stage Right!        
    return 0;
}

