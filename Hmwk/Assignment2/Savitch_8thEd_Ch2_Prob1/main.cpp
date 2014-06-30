/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch2 Prob1
 * Created on June 28, 2014, 10:58 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Beings Here:
int main(int argc, char** argv) {
//Declare and Initialize Variables
    float wgtOz;              //Weight of a package in ounces
    float wgtTn;              //Weight of a package in metric tons
    float nBoxT;              //Number of boxes equal to 1 metric ton of cereal
    float tOz=35273.92f;      //Metric ton in ounce
    
//Output Text and Input Data
        cout<<"Please enter the weight of the package of breakfast cereal in ounces.";
        cout<<" Then hit the return key.\n";
        cin>>wgtOz;
        wgtTn=wgtOz/tOz;     //Calculate weight of box in metric tons
        
        cout.setf(ios::fixed);
        cout.precision(10);
        cout<<"The weight of the package in metric tons is "<<wgtTn<<"!"<<endl;
        
        nBoxT=tOz/wgtOz;    //Calculate number of boxes equal to 1 metric ton
        cout.precision(2);
        cout<<nBoxT<<" boxes will yield 1 metric ton of cereal.\n";
   
    
    
    return 0;
}