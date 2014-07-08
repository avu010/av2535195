/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Weight problem
 * Created on July 7, 2014, 7:13 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input
    float mass;         //Mass in kg
    //Calculation
    float wght;         //Weight in Newtons
    
//Gather Data Input
    cout<<"Enter the mass of the object (in kilograms): ";
    cin>>mass;

//Calculation weight of object
    wght=mass*9.8f;
    
//Use if-else statement to determine whether object is too light or too heavy
    if(wght>=1000){
        cout<<"Weight: "<<wght<<" N"<<endl;
        cout<<"Object is too heavy.";
    }else if(wght<=10){
        cout<<"Weight: "<<wght<<" N"<<endl;
        cout<<"Object is too light.";
    }else{
        cout<<"Weight: "<<wght<<" N"<<endl;
    }
    
//Exit Stage Right!
    return 0;
}
