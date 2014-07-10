/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Clothing sizes
 * Created on July 9, 2014, 10:53 AM
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
    unsigned short jcktS;                 //jacket size
    float waist;                          //waist in inches
    
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
        short age2 = age - 30;
        while(age2>=10){
            //Jacket adjustment for 40+
            jcktS += .125;
            age2-=10;
        }

        //Calculate waist in inches
        waist=weight/5.7;
        short age3 = age - 28;
        while(age3>=2){
            //Waist adjustment for age 30+
            waist += .1;
            age3-=2;
        }  

        //Output Results
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<"Hat size: "<<hatS<<endl;
        cout<<"Jacket size: "<<jcktS<<endl;
        cout<<"Waist (in.): "<<waist<<endl;  

        //Ask user if he or she wants to run program again
        cout<<"Run again (Y/N)? ";
        cin>>choice;
        cout<<endl;
    }while(choice=='Y'||choice=='y');
    
    //Exit Stage Right!
    return 0;
}

