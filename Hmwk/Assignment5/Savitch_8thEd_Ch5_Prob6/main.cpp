/* 
 * File:   main.cpp
 * Author: Anh Vu
 *
 * Created on July 23, 2014, 11:47 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
const float FTMT=0.3048f;
const float INCM=2.54f;

//Function Prototypes
void input6 (float&,float&);
void convsn (float&,float&,float&,float&);
void output6 (float&, float&);


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float feet, inches, meters, centim;
    
    //Gather Data Input
    input6 (feet, inches);
    
    //Calculate new length
    convsn (feet, inches, meters, centim);
    
    //Output Results
    output6 (meters, centim);
    
    //Exit Stage Right!
    return 0;
}

void input6 (float& feet,float& inches){
    cout<<"Please enter a length in feet and inches. Then, I will convert it ";
    cout<<"to meters and centimeters.\n";
    cout<<"Feet: ";
    cin>>feet;
    cout<<"Inches: ";
    cin>>inches;
}

void convsn (float& feet,float& inches, float& meters,float& centim){
    meters=FTMT*feet;
    centim=INCM*inches;
}

void output6 (float& meters, float& centim){
    cout<<"The equivalent length in meters and centimeters is: ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<meters<<" m and "<<centim<<" cm";
}