/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch2 Prob15
 * Created on July 1, 2014, 11:10 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    unsigned short sTemp;       //Starting Temperature
    unsigned short eTemp;       //Ending Temperature
    float vel;                  //Velocity of sound in dry air
    
//Output Text and Input Data from user
    cout<<"Please enter starting temperature in degrees Celsius. ";
    cout<<"The starting temperature should be lower than the ending temperature.\n";
    cin>>sTemp;
    cout<<"Please enter ending temperature in degrees Celsius. \n";
    cin>>eTemp;
    
//Use while loop to output velocities from starting temp to ending temp with increment of 1.
    while (sTemp<=eTemp) {
        vel=331.3+0.61*sTemp;
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<"At "<<sTemp<<" degrees Celsius the velocity of sound is "<<vel<<" m/s\n";
        sTemp=sTemp+1;
    }

    return 0;
}

