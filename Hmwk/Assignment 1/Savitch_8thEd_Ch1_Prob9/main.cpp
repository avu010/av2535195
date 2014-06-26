/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch1 Prob9
 * Created on June 25, 2014, 6:54 PM
 */

//System Level Libraries 
#include <iostream> 
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Variable Declaration and Initialization 
    unsigned short time;
    unsigned short dist;
    unsigned short vel;
    unsigned short acc=32;
    
//Output Text
    cout<<"Please return key after entering value.\n";
    cout<<"Enter amount of time (in seconds): ";
    
//Input Data
    cin>>time;
    
//Calculate length object will drop
    vel=acc*time*time;
    dist=vel/2;
    
//Output Value of Distance
    cout<<"If the object is in freefall for "<<time<<" seconds,\n";
    cout<<"then it has traveled "<<dist<<" feet.\n";
        
//Exit Stage Right!     
    return 0;
}

