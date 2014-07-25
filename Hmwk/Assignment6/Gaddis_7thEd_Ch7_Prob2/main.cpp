/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Created on July 25, 2014, 4:34 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void inputrn (int[], int);
void add (int [], int);
void maxMin (int [], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE=12;
    int rain[SIZE];
    int sum=0;
    int avg;
    int max;
    int min;
    
    //Input Data
    inputrn (rain, SIZE);
    
    //Calculate total rainfall
    add (rain,SIZE);
    
    //Find max and min
    maxMin(rain, SIZE);
    
    return 0;
}

void inputrn (int rain[], int SIZE){
    //Gather Data Input
    cout<<"Enter the amount of rainfall (inches) for each month!"<<endl;
    cout<<"January: ";
    cin>>rain[0];
    cout<<"February: ";
    cin>>rain[1];
    cout<<"March: ";
    cin>>rain[2];
    cout<<"April: ";
    cin>>rain[3];
    cout<<"May: ";
    cin>>rain[4];
    cout<<"June: ";
    cin>>rain[5];
    cout<<"July: ";
    cin>>rain[6];
    cout<<"August: ";
    cin>>rain[7];
    cout<<"September: ";
    cin>>rain[8];
    cout<<"October: ";
    cin>>rain[9];
    cout<<"November: ";
    cin>>rain[10];
    cout<<"December: ";
    cin>>rain[11];
   
}

void add (int rain[], int SIZE){
    //Declare Variables
    int sum=0;
    int avg;
    
    //Calculate sum of the elements in array
    for(int i=0; i<SIZE; i++){
        sum+=rain[i];    
    }
    
    //Take final sum to find average    
    avg=sum/SIZE;
    
    //Output total and average 
    cout<<"In the past year....."<<endl;
    cout<<"The total rainfall: "<<sum<<" inches"<<endl;
    cout<<"The average rainfall: "<<avg<<" inches"<<endl;
    
}

void maxMin (int rain[], int SIZE){
    //Declare Variables
    int max;
    int min;
    
    //Set max to the first variable in array
    max=rain[0];
    
    //Loops through all variables in array, compares each integer to max
    for(int i=1; i<SIZE; i++){
        if (rain[i]>max)
            max=rain[i];
    }
    
    //Set min to first variables
    min=rain[0];
    
    //Loops to find minimum integer in array
    for(int j=1; j<SIZE; j++){
        if (rain[j]<min)
            min=rain[j];
    }
    
    
    //Output Results
    cout<<"Largest amount of rainfall: "<<max<<endl;
    cout<<"Lowest amount of rainfall: "<<min<<endl;
    
    }

