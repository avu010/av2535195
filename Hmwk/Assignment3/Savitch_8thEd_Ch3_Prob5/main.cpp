/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Telephone bill 
 * Created on July 7, 2014, 11:22 AM
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
    char day;                   //Day of the week the call was made
    char dum;                   //Reads in unnecessary characters such as colon 
    unsigned short min;         //Duration of call in minutes
    unsigned short hour;        //Time of the call in military time
    float amt;                  //Amount person is charged
    
//Gather Data input
    cout<<"Enter the day of the week (Mo, Tu, We, Th, Fr, Sa, Su): ";
    cin>>day>>dum;
    cout<<"Enter the time of the call in Military time (1:00PM=13:00): ";
    cin>>setw(2)>>hour>>dum>>dum>>dum;
    cout<<"Enter the duration of call (in minutes): ";
    cin>>min;
            
//Calculate the bill
    if(day=='S'){
        amt=1.5e-1f*min;
    }else if ((hour>=8)&&(hour<18)){
        amt=4e-1f*min;
    }else{
        amt=2.5e-1*min;
    }
    
//Output Results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total amount due for this call is $"<<amt<<endl;
    
//Exit Stage Right!
    return 0;
}

