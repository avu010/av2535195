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
    //Input
    unsigned short sTemp;       //Starting Temperature
    unsigned short eTemp;       //Ending Temperature
    //Output
    float vel;                  //Velocity of sound in dry air
    
//Output Text and Input Data 
    cout<<"Be advised that this program will only work if starting temperature";
    cout<<" is lower than ending temperature.\n";
    cout<<endl;
    cout<<"Please enter starting temperature in degrees Celsius: ";
    cin>>sTemp;
    cout<<"Please enter ending temperature in degrees Celsius: ";
    cin>>eTemp;
    cout<<endl;
    
//Calculate velocities from starting temp to ending temp with increment of 1.
    while (sTemp<=eTemp) {
        vel=331.3+0.61*sTemp;
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<"At "<<sTemp<<" degrees Celsius the velocity of sound is "<<vel<<" m/s\n";
        sTemp=sTemp+1;
    }
    
//Exit Stage Right!
    return 0;
}

