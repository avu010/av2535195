/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Fahrenheit and Celsius
 * Created on July 6, 2014, 9:13 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare and Initialize Variables
    short cel=100;      //Celsius
    short far;          //Fahrenheit

//Decrement Celsius value until temperature is same in both Celsius and Fahrenheit
    while(cel!=far){
    //Calculate Fahrenheit
    far=((9*cel)/5)+32;    
    //Output Result
    //The program truncates the values after the decimal point, so it 
    //doesn't stop at -40 like it should.
    cout<<"Celsius: "<<cel<<"; Fahrenheit: "<<far;
    cout<<endl;
    //Decrement Celsius
    cel--;
    }
    
    
    //Exit Stage Right!
    return 0;
}

