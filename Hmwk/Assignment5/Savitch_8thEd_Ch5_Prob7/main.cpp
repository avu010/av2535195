/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 12:22 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float MTFT=3.28084f; 
float CTIN=0.393701f;

//Function Prototypes
void input7 (float&, float&); 
void cnvsn7 (float&, float&, float&, float&);
void output7 (float&, float&);


//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    float meters, centim, inches, feet;
    
    //Gather Data Input
    input7 (meters, centim);
    
    //Convert
    cnvsn7 (feet, meters, inches, centim);
    
    //Output Results
    output7 (feet, inches);
    
    return 0;
}

void input7 (float& meters, float& centim){
    cout<<"Welcome! Give me a length in meters and centimeters, and I will ";
    cout<<"give you the same length in feet and inches"<<endl;
    cout<<"Meters: ";
    cin>>meters;
    cout<<"Centimeters: ";
    cin>>centim;
}

void cnvsn7 (float& feet, float& meters, float& inches, float& centim){
    feet=MTFT*meters;
    inches=CTIN*centim;
}

void output7 (float& feet, float& inches){
    cout<<"The equivalent length in feet and inches is: ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<feet<<" ft and "<<inches<<" in";
}
        