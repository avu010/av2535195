/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 12:57 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float LBKG=0.4536f;       //Kilograms in one pound
float OZG=28.3495f;      //Grams in one ounce

//Function Prototypes
void input9 (float&, float&);
void cnvsn9 (float&, float&, float&, float&);
void output9 (float&, float&);

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    float lb, oz, kg, g;
    
    //Gather Data Input
    input9 (lb, oz);
    
    //Convert
    cnvsn9 (lb, oz, kg, g);
    
    //Output Results
    output9 (kg, g);

    return 0;
}

void input9 (float& lb, float& oz){
    cout<<"Welcome! Enter a weight in pounds and ounces, and I will convert it";
    cout<<" to kilograms and grams.\n";
    cout<<"Pounds: ";
    cin>>lb;
    cout<<"Ounces: ";
    cin>>oz;
}

void cnvsn9 (float& lb, float& oz, float& kg, float& g){
    kg=LBKG*lb;
    g=OZG*oz;
}

void output9 (float& kg, float& g){
    cout<<"The equivalent weight in kilograms and grams is: ";
    cout<<kg<<" kg and "<<g<<" g"<<endl<<endl;
}