/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Savitch Ch2 Prob16
 * Created on July 1, 2014, 1:30 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input
    float radius;       //radius of sphere
    //Output
    float vm;           //volume of sphere
    
//Acquire Data
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;
    
//Calculate volume of sphere
    vm=(4.0/3.0)*3.1415*radius*radius*radius;
    
//Output Result
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The volume is "<<vm<<endl;
    
//Exit Stage Right!          
    return 0;
}

