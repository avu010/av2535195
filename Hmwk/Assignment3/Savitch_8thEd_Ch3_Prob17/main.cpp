/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: exercise 
 * Created on July 6, 2014, 9:51 PM
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
    char choice;                //User's choice (Sedentary, etc)
    //Output Variables
    float BMR;                  //Basal Metabolic Rate
    float nBMR;                 //New Basal Metabolic Rate
    unsigned short nCBars;               //Number of candy bars needed to maintain weight
    
//Input Data
    cout<<"Enter your sex M/F: ";
    cin>>sex;
    cout<<"Enter your weight in  pounds: ";
    cin>>wtlbs;
    cout<<"Enter your age in years: ";
    cin>>ageYrs;
    cout<<"Enter your height in inches: ";
    cin>>htIn;
    cout<<"From the list, please choose either a, b, c, or d.\n";
    cout<<"a. Sedentary\n";
    cout<<"b. Somewhat active (exercise occasionally\n";
    cout<<"c. Active (exercise 3-4 days per week\n";
    cout<<"d. Highly active (exercise every day)\n";
    cout<<"Answer: ";
    cin>>choice;
    cout<<endl;
    
//Calculate BMR
    switch(choice) {
        case'A':
        case'a':        
            if (sex=='F'||sex=='f'){
                BMR=655+(4.3*wtlbs)+(4.7*htIn)-(4.7*ageYrs);
                nBMR=(20e-2)*BMR+BMR;
            }else if (sex=='M'||sex=='m'){
                BMR=66+(6.3*wtlbs)+(12.9*htIn)-(6.8*ageYrs);
                nBMR=(20e-2)*BMR+BMR;
            }else
                cout<<"Please choose M or F for your sex.\n";
            break;
        case'B':
        case'b':
            if (sex=='F'||sex=='f'){
                BMR=655+(4.3*wtlbs)+(4.7*htIn)-(4.7*ageYrs);
                nBMR=(30e-2)*BMR+BMR;
            }else if (sex=='M'||sex=='m'){
                BMR=66+(6.3*wtlbs)+(12.9*htIn)-(6.8*ageYrs);
                nBMR=(30e-2)*BMR+BMR;
            }else
                cout<<"Please choose M or F for your sex.\n";
            break;
        case'C':
        case'c':
            if (sex=='F'||sex=='f'){
                BMR=655+(4.3*wtlbs)+(4.7*htIn)-(4.7*ageYrs);
                nBMR=(40e-2)*BMR+BMR;
            }else if (sex=='M'||sex=='m'){
                BMR=66+(6.3*wtlbs)+(12.9*htIn)-(6.8*ageYrs);
                nBMR=(40e-2)*BMR+BMR;
            }else
                cout<<"Please choose M or F for your sex.\n";
            break;
        case'D':
        case'd':
            if (sex=='F'||sex=='f'){
                BMR=655+(4.3*wtlbs)+(4.7*htIn)-(4.7*ageYrs);
                nBMR=(50e-2)*BMR+BMR;
            }else if (sex=='M'||sex=='m'){
                BMR=66+(6.3*wtlbs)+(12.9*htIn)-(6.8*ageYrs);
                nBMR=(50e-2)*BMR+BMR;
            }else
                cout<<"Please choose M or F for your sex.\n";
            break;    
    }
    
//Calculate number of bars you can eat to maintain weight
    nCBars=nBMR/cBarC;

//Output the Results
    cout<<"Your BMR is "<<nBMR<<", and the number of candy bars";
        cout<<" you can eat to maintain your weight is "<<nCBars;
        
//Exit Stage Right!
return 0;
}
    
    

