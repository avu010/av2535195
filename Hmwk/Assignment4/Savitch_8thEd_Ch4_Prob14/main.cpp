/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Calories required
 * Created on July 10, 2014, 12:48 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    //Input
    unsigned short wgt;         //Person's weight
    unsigned short intsPhys;    //Intensity of physical activity
    unsigned short min;         //Minutes spent doing physical activity
    unsigned short calFood;     //Calories in one serving of food
    char choice;                //Which option user chooses for intensity
    //Calculate
    float calBMR;               //Calories required to maintain BMR
    float calPhys;              //Calories used during physical activity
    float calTot;               //Total calories expended
    //Output
    float serve;                //Number of serving required to maintain weight
    
    //Prompt user to input weight, intensity of physical activity, etc
    cout<<"Enter your weight: ";
    cin>>wgt;
    cout<<"How many calories per serving are in your favorite food? ";
    cin>>calFood;
    cout<<"Below are intensities at certain physical activities:\n";
    cout<<"     Option        Activity                Intensity\n";
    cout<<"        A       Running 10 mph                17\n";
    cout<<"        B       Running 6 mph                 10\n";
    cout<<"        C         Basketball                  8\n";
    cout<<"        D       Walking 1 mph                 1\n";
    cout<<"Please approximate which intensity applies to your exercise routine: ";
    cin>>choice;
    cout<<"How many minutes do you spend exercising at this intensity? ";
    cin>>min;
    
    //Calculate 
    //Calories required for maintaining BMR
    calBMR=70*pow((wgt/2.2f),0.756f);
    //Calories required for designated physical activity
    switch(choice){
        case 'A':case 'a':
            intsPhys=17;
            calPhys=0.0385f*intsPhys*wgt*min;
            break;
        case 'B':case 'b':
            intsPhys=6;
            calPhys=0.0385f*intsPhys*wgt*min;
            break;
        case 'C':case 'c':
            intsPhys=8;
            calPhys=0.0385f*intsPhys*wgt*min;
            break;
        case 'D':case 'd':
            intsPhys=1;
            calPhys=0.0385f*intsPhys*wgt*min;
            break;
    }
    //Total calories expended to maintain BMR, physical activity, and digestion
    calTot=(calBMR+calPhys)/0.9f;
    //Servings needed to maintain weight
    serve=calTot/calFood;
    
    //Output Results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\nYou can eat "<<serve<<" servings of your favorite food to maintain";
    cout<<" your weight."<<endl;

    //Exit Stage Right
    return 0;
}

