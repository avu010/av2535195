/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Clothing sizes
 * Created on July 9, 2014, 10:53 AM
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
    //Input
    unsigned short height;               //height in inches
    unsigned short weight;               //weight in pounds
    unsigned short age;                  //age in years
    //Output
    float hatS;                           //hat size
    unsigned short jcktS;                 //jacket size
    float waist;                          //waist in inches
    
//Gather Input Data
    cout<<"Enter height (inches): ";
    cin>>height;
    cout<<"Enter weight (pounds): ";
    cin>>weight;
    cout<<"Enter age (years): ";
    cin>>age;
    
//Calculate hat size
    hatS=(2.9)*(weight/height);
    
//Calculate jacket size
    jcktS=(height*weight)/288;
    unsigned short age2 = age - 30;
    while(age2>=10){
        //Jacket adjustment for 40+
        jcktS += .125;
        age2-=10;
    }
    
//Calculate waist in inches
    waist=weight/5.7;
    unsigned short age3 = age - 28;
    while(age3>=2){
        //Waist adjustment for age 30+
        waist += .1;
        age3-=2;
    }  
    
//Output Results
    cout<<"Hat size: "<<hatS<<endl;
    cout<<"Jacket size: "<<jcktS<<endl;
    cout<<"Waist (in): "<<waist<<endl;
    
//Exit Stage Right!
    return 0;
}

