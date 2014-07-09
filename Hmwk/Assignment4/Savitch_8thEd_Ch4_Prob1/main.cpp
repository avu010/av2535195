/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Miles per gallon
 * Created on July 8, 2014, 5:42 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float CNVLG=0.264179f;    //Conversion from liters to gallons. 1L=0.264179 gal

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input
    float gasL;                 //Liters of gas consumed 
    float miles;                //Number of miles traveled
    char choice;                //Whether user wants to run program again
    //Conversion of L to gallon
    float gasG;                 //Gallons of gas consumed
    //Output
    float mpg;                  //Miles per gallon
    
//Do while statement that allows user to run program as many times as they want
    do{
    //Data Input
    cout<<"Liters of gas consumed: ";
    cin>>gasL;
    cout<<"Miles traveled: ";
    cin>>miles;
    
//Calculate
    gasG=gasL*CNVLG;        //Convert liters to gallons
    mpg=miles/gasG;         //Miles per gallon
    
//Output Results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Miles per Gallon: "<<mpg<<endl;
    
//Ask user if he/she wants to run again
    cout<<"Calculate again (Y/N)? ";
    cin>>choice;
    cout<<endl;
    
   }while((choice=='Y')||(choice=='y'));
   
//Exit Stage Right
    return 0;
}

