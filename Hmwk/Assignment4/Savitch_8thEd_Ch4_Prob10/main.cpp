/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Modify Savitch Ch 4 Prob 9
 * Created on July 9, 2014, 2:32 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input
    float height;               //height in inches
    float weight;               //weight in pounds
    float age;                  //age in years
    char choice;                //Whether user wants to run again
    //Output
    float hatS;                           //hat size
    float jcktS;                 //jacket size
    float jcktS1;                //jacket size after ten years
    float waist;                          //waist in inches
    float waist1;                         //waist in inches after ten years
do{
    //Gather Input Data
    cout<<"Enter height (inches): ";
    cin>>height;
    cout<<"Enter weight (pounds): ";
    cin>>weight;
    cout<<"Enter age (years): ";
    cin>>age;
    cout<<endl;
    
//Calculate hat size
    hatS=(2.9)*(weight/height);
    
//Calculate jacket size
    jcktS=(height*weight)/288;
    jcktS1=(height*weight)/288;
    short age2 = age - 30;
    while(age2>=10){
        //Jacket adjustment for 40+
        jcktS += .125;
        age2-=10;
    }
    short age4 = (age+10) - 30;      //Age in ten years
    while (age4>=10){
        jcktS1 += .125;
        age4-=10;
    }
    
//Calculate waist in inches
    waist=weight/5.7;
    waist1=weight/5.7;
    short age3 = age - 28;
    while(age3>=2){
        //Waist adjustment for age 30+
        waist += .1;
        age3-=2;
    }
    short age5=(age+10)-18;      //Age in ten years
    while (age5>=2){
        waist1 += .1;
        age5-=2;    
    }
//Output Results
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Hat size: "<<hatS<<endl;
    cout<<"Jacket size: "<<jcktS<<endl;
    cout<<"Waist size (in.): "<<waist<<endl;
    cout<<"Jacket size in 10 years: "<<jcktS1<<endl;
    cout<<"Waist size (in.) in 10 years: "<<waist1<<endl;
    
//Ask user if he or she wants to run program again
    cout<<"Run again (Y/N)? ";
    cin>>choice;
    cout<<endl;
}while(choice=='Y'||choice=='y');
    
//Exit Stage Right!
    return 0;
}