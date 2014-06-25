/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Savitch Ch1 Prob3
 * Created on June 25, 2014, 11:56 AM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Libraries

//Function Prototypes

//Execution Begins Here!

//RUN FAILED when user inputs 0 in number of peas per pod due to division by zero

int main(int argc, char** argv) {
    //Variable Declaration
    unsigned short numPod, peaPpod, totPea;
    
    //Output Simple Text
    cout<<"Hello\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    //Input Data
    cin>>numPod;
    
    //Output Simple Text
    cout<<"Enter the number of peas in a pod:\n";
    
    //Input Data
    cin>>peaPpod;
    
    //Calculation - Divide number of pods by peas per pod 
    totPea=numPod/peaPpod;
    
    //Output Simple Text
    cout<<"If you have ";
    cout<<numPod;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peaPpod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<totPea;
    cout<<" peas in all the pods.\n";
    cout<<"Good-bye\n";
    
    //Exit Stage Right!
    return 0;
}
