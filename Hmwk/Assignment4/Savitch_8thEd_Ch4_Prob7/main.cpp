/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Gravitational attractive force 
 * Created on July 9, 2014, 9:56 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float G=6.673e-8f;       //Universal gravitational constant cm^3/(g*sec^2)

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input
    float m1;           //Mass of object 1 in g
    float m2;           //Mass of object 2 in g
    float d;            //Distance between object 1 & 2 in cm
    char choice;        //Whether user wants to run again
    //Output
    float F;            //Gravitational attractive force between two bodies
    
do{
    
//Gather Data Input
    cout<<"Enter mass for first object (grams): ";
    cin>>m1;
    cout<<"Enter mass for second object (grams): ";
    cin>>m2;
    cout<<"Enter distance between object 1 and object 2 (cm): ";
    cin>>d;
    cout<<endl;
    
//Calculate gravitational attractive force
    F=G*m1*m2/(d*d);
    
//Output Result
    cout<<"Gravitational force between object 1 and object 2: "<<F<<" dynes\n";
    cout<<"Note: 1 dyne = g*cm/(sec*sec)\n";
    
//Ask if user wants to run again
    cout<<"Run again (Y/N)? ";
    cin>>choice;
    cout<<endl;
    
}while(choice=='Y'||choice=='y');
    
//Exit Stage Right
    return 0;
}

