/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch2 Prob1
 * Created on June 28, 2014, 10:58 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Beings Here:
int main(int argc, char** argv) {
//Declare and Initialize Variables
    float wght;              //Weight of a package of breakfast cereal in ounces
    float nBox;              //Number of boxes equal to 1 metric ton of cereal
    float mTon;              //Metric ton
    
//Do-While Statement
    do {
        cout<<"Please enter the weight of the package of breakfast cereal in ounces.";
        cout<<" Then hit the return key.\n";
        cin>>wght;
        mTon=wght*35273.92;
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout<<"The weight of the package in metric tons is "<<mTon<<"!"<<endl;
        
        nBox=35273.92/wght;
        cout.precision(2);
        cout<<nBox<<" boxes will yield 1 metric ton of cereal.\n";
    }
    while(wght==wght);
    
    
    return 0;
}

