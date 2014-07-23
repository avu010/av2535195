/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 1:16 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
float KGLB=2.205f;       //Pounds in one gram
float GOZ=0.0353f;       //Ounces in one gram

//Function Prototypes
void input10 (float&, float&);
void cnvsn10 (float&, float&, float&, float&);
void output10 (float&, float&);

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    float lb, oz, kg, g;
    
    //Gather Data Input
    input10 (kg, g);
    
    //Convert
    cnvsn10 (kg, g, lb, oz);
    
    //Output Results
    output10 (lb, oz);

    return 0;
}

void input10 (float& kg, float& g){
    cout<<"Welcome! Enter a weight in kilograms and grams, and I will convert it";
    cout<<" to pounds and ounces.\n";
    cout<<"Kilograms: ";
    cin>>kg;
    cout<<"Grams: ";
    cin>>g;
}

void cnvsn10 (float& kg, float& g, float& lb, float& oz){
    lb=KGLB*kg;
    oz=GOZ*g;
}

void output10 (float&lb, float&oz){
    cout<<"The equivalent weight in pounds and ounces is: ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<lb<<" lb and "<<oz<<" oz"<<endl<<endl;
}
