/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Savitch Ch2 Prob6
 * Created on July 1, 2014, 10:45 AM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input
    unsigned short mRcap;       //Maximum Room Capacity
    unsigned short nPpl;        //Number of People
    //Output
    unsigned short addPpl;      //Number of additional people that may legally attend
    unsigned short exPpl;       //Number of people that must be excluded
   
//Output Text and Input Data
    cout<<"Please enter the maximum room capacity. Then hit return key.\n";
    cin>>mRcap;            //Input max room capacity
    cout<<"Please enter the number of people attending the meeting.\n";
    cin>>nPpl;             //Input number of people at meeting
    
//Determine whether or not it is legal to hold number of people at meeting
    //Number of people is less or equal than max room capacity is true
    if (nPpl<=mRcap){
    //Calculate additional people allowed in meeting
    addPpl=mRcap-nPpl;
    cout<<"It is legal to hold the meeting, and an additional "<<addPpl;
    cout<<" people are allowed to attend.\n";
    }
    
    //Number of people exceeding max room capacity is false
    else {
    //Calculate number of people that must be excluded 
    exPpl=nPpl-mRcap;
    cout<<"The meeting cannot be held as planned due to fire regulations.\n";
    cout<<"In order to hold the meeting, "<<exPpl<<" people must leave the room.\n";
    }
    
//Exit Stage Right!
    return 0;
}
