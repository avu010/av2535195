/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Savitch Ch2 Prob18
 * Created on July 1, 2014, 11:38 AM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input Variables
    unsigned short wtlbs;       //Weight in pounds
    unsigned short ageYrs;      //Age in years
    unsigned short htIn;        //Height in inches
    char sex;                   //Sex M/F
    unsigned short cBarC=230;   //Calories in a candy bar 
    //Output Variables
    float BMR;                  //Basal Metabolic Rate
    float nCBars;               //Number of candy bars needed to maintain weight
    
//Input Data
    cout<<"Enter your sex M/F: ";
    cin>>sex;
    cout<<"Enter your weight in  pounds: ";
    cin>>wtlbs;
    cout<<"Enter your age in years: ";
    cin>>ageYrs;
    cout<<"Enter your height in inches: ";
    cin>>htIn;
    
//Calculate BMR
    if (sex=='F'||sex=='f'){
        BMR=655+(4.3*wtlbs)+(4.7*htIn)-(4.7*ageYrs);
    }else if (sex=='M'||sex=='m'){
        BMR=66+(6.3*wtlbs)+(12.9*htIn)-(6.8*ageYrs);
    }else{
        cout<<"Please choose M or F for your sex.\n";
    }
    
//Calculate number of bars you can eat to maintain weight
    nCBars=BMR/cBarC;

//Output the Results
    if (sex=='F'||sex=='f'){
        cout<<"Your BMR is "<<BMR<<", and the number of candy bars";
        cout<<" you can eat to maintain your weight is "<<nCBars;
    }else if (sex=='M'||sex=='m'){
        cout<<"Your BMR is "<<BMR<<" and the number of candy bars";
        cout<<" you can eat to maintain your weight is "<<nCBars<<".";
    }else{
        cout<<"Please choose M or F for your sex.\n";
    }
//Exit Stage Right!
    return 0;
}

