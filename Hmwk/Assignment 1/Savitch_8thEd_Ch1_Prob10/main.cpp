/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch1 Prob10
 * Created on June 25, 2014, 7:11 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Variable Declaration
    char let;
    
//Output Text
    cout<<"Please choose a letter: ";

//Input Data
    cin>>let;
    
//Output 'C'
    cout<<"   "<<let<<" "<<let<<" "<<let<<endl;
    cout<<" "<<let<<" "<<"      "<<let<<endl;
    cout<<let<<endl;
    cout<<let<<endl;
    cout<<let<<endl;
    cout<<let<<endl;
    cout<<let<<endl;
    cout<<" "<<let<<" "<<"      "<<let<<endl;
    cout<<"   "<<let<<" "<<let<<" "<<let<<endl;
    
//Exit Stage Right!
    return 0;
}

