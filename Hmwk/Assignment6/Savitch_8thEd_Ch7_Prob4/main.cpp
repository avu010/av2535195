/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Created on July 24, 2014, 11:39 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void input1 (float x[], int& sizeUSR);
void sd(float x[], float & stdev, int sizeUSR);

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    const int sizeMAX=300;      //Maximum size of array
    float x[sizeMAX];           //Array to hold numbers
    int sizeUSR;                //Size of array user chooses
    float numrtr;               //Numerator of standard deviation
    float denom;                //Denominator of standard deviation
    float stdev;                //Standard deviation
    
    //Gather Data Input
    input1 (x, sizeUSR);
    
    //Calculate standard deviation
    sd(x, stdev, sizeUSR);
    
    //Output Results
    cout<<"Standard Deviation: ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<stdev;
    
    return 0;
}

void input1 (float x[], int& sizeUSR){
    //Sets size of array
    cout<<"Enter how many numbers you want to input: ";
    cin>>sizeUSR;
 
    //Reads in numbers
    cout<<"Enter the numbers with a space in between each: ";
    //Calculate sum of numbers
    for(int i=0;i<sizeUSR;i++){
        cin>>x[i];   
    }
}

void sd(float x[], float & stdev, int sizeUSR){
    //Declare Variables
    float avg;                  //Average of all the numbers
    float sum=0;                //Sum of all numbers
    for(int i=0;i<sizeUSR;i++){
        sum+=x[i];
    }
    
    //Calculate average
    avg=sum/sizeUSR;
    
    //Reset value of sum
    sum=0;
    
    //Calculate numerator of standard deviation with for loop
    for(int n=0;n<sizeUSR;n++){
        x[n]=pow(x[n]-avg,2);
        sum+=x[n];
    }
    
    //Calculate Standard deviation
    stdev=sqrt(sum/sizeUSR);
}

