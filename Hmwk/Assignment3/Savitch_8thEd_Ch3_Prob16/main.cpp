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
    int cel=100;                 //Celsius
    int far=9*cel/5+32;          //Fahrenheit

//Decrement Celsius value until temperature is same in both Celsius and Fahrenheit
    while(cel!=far){
    //Decrement Celsius
    cel--;
    //Calculate Fahrenheit
    far=9*cel/5+32; 
    }
 
    //Output Result
    cout<<"The value at which the Celsius and Fahrenheit temperature is the ";
    cout<<"same is at "<<cel<<" degrees."<<endl;
    
    //Exit Stage Right!
    return 0;
}