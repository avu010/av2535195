/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch2 Prob1
 * Created on June 28, 2014, 10:58 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Beings Here:
int main(int argc, char** argv) {
//Declare and Initialize Variables
    //Input
    float wgtOz;             //Weight of a package in ounces
    //Output
    float wgtTn;             //Weight of a package in metric tons
    float nBoxT;             //Number of boxes equal to 1 metric ton of cereal
    //Conversion
    float tOz=35273.92f;     //1 Metric ton in ounces
    
//Output Text and Input Data
        cout<<"Please enter the weight of the package of breakfast cereal in ounces.";
        cout<<" Then hit the return key.\n";
        cin>>wgtOz;
        
//Calculate weight of box in metric tons
        wgtTn=wgtOz/tOz;
        
//Calculate number of boxes equal to 1 metric ton
        nBoxT=tOz/wgtOz;    
        
//Output Results
        cout<<fixed<<showpoint<<setprecision(6);
        cout<<"The weight of the package in metric tons is "<<wgtTn<<"!"<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<nBoxT<<" boxes will yield 1 metric ton of cereal.\n";
       
//Exit Stage Right!
    return 0;
}