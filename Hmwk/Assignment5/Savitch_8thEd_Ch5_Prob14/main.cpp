/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 1:46 PM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void input14(float&, float&);
void calc14(float&, float&, float&);
void output14(float&);


//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    float speed, temp, wIndex;
    
    input14(speed, temp);
    calc14(speed, temp,wIndex);
    output14(wIndex);

    return 0;
}

void input14(float& speed, float& temp){
    //Prompt user input
    cout<<"Welcome! Please enter the wind speed in m/sec and the temperature";
    cout<<" in degrees Celsius. Please only enter temperatures less than or ";
    cout<<"equal to 10\n";
    cout<<"Wind Speed: ";
    cin>>speed;
    cout<<"Temperature: ";
    cin>>temp;
}

void calc14(float& speed, float& temp, float& wIndex){
    if(temp<=10){
        wIndex=13.12+0.6215*temp-11.37*pow(speed,0.16)+0.3965*temp*pow(speed,0.16);
    }else{
        cout<<"Please enter temperatures less than or equal to 10!"<<endl<<endl;
    }
}
       
void output14(float&wIndex){
    cout<<"Wind Chill Index: "<<wIndex<<" degrees Celsius"<<endl<<endl;

}
