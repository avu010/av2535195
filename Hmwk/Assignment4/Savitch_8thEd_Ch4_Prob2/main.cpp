/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Modify Chapter 4 Prob 1
 * Created on July 8, 2014, 6:10 PM
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
    float gasL1;                 //Liters of gas consumed by car 1
    float miles1;                //Number of miles traveled by car 1
    float gasL2;                 //Liters of gas consumed by car 2
    float miles2;                //Number of miles traveled by car 2
    char choice;                //Whether user wants to run program again
    //Conversion of L to gallon
    float gasG1;                 //Gallons of gas consumed for car 1
    float gasG2;                 //Gallons of gas consumed for car 2
    //Output
    float mpg1;                  //Miles per gallon for car 1
    float mpg2;                  //Miles per gallon for car 2
    
    //Do while statement that allows user to run program as many times as they want
    do{
        //Data Input
        cout<<"Liters of gas consumed by Car 1: ";
        cin>>gasL1;
        cout<<"Miles traveled by Car 1: ";
        cin>>miles1;
        cout<<"Liters of gas consumed by Car 2: ";
        cin>>gasL2;
        cout<<"Miles traveled by Car 2: ";
        cin>>miles2;

        //Calculate
        gasG1=gasL1*CNVLG;        //Convert liters to gallons car 1
        gasG2=gasL2*CNVLG;        //Convert liters to gallons car 2
        mpg1=miles1/gasG1;         //Miles per gallon car 1
        mpg2=miles2/gasG2;         //Miles per gallon car 2

        //Output Results
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<endl<<"Miles per gallon Car 1: "<<mpg1<<endl;
        cout<<"Miles per gallon for Car 2: "<<mpg2<<endl;

        //Announce which car has best fuel efficiency
        if(mpg1>mpg2)
            cout<<"Car 1 has the best fuel efficiency!";
        else if(mpg1<mpg2)
            cout<<"Car 2 has the best fuel efficiency!";

        //Ask user if he/she wants to run again
        cout<<"\nCalculate again (Y/N)? ";
        cin>>choice;
        cout<<endl;   
   }while((choice=='Y')||(choice=='y'));
   
    //Exit Stage Right
    return 0;
}