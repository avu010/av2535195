/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 10:21 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Function Prototypes
void input1 (int&, int&, int& , int&, char& , char&);
int addTime (int&, int&, int& , int&);
//Global Constants

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int hour=0,
        hourW=0, 
        minuteW=0,
        minute=0;
    char dum, a;
    
    //Gather Data Input
    input1 (hour, hourW, minuteW, minute, dum, a);
    
    //Output Results
    a=addTime (hour, hourW, minuteW, minute);
            
    return 0;
}

void input1 (int& hour, int& hourW, int& minuteW, int& minute, char& dum, char& a){
    //Gather Data Input
    cout<<"Welcome! Start by entering the current time. If the hour is a single";
    cout<<" digit, enter with a zero (ex- 02:30).\n";
    cout<<"Also, enter 'A' for AM and 'P' for PM.\n";
    cout<<"Current time (12-hour): ";
    cout<<setw(2);
    cin>>hour>>dum>>minute;
    cout<<"AM or PM? ";
    cin>>a;
    cout<<"Enter number of hours you have to wait: ";
    cin>>hourW;
    cout<<"Enter number of minutes you have to wait: ";
    cin>>minuteW;
}

int addTime (int& hour, int& hourW, int& minuteW, int& minute){
    char a;
    if(hour<=11){
        if (a=='A'){
            hour+=hourW;
            minute+=minuteW;
            if(hour>12){
                hour-=12;
                a='P';
                if(minute>59){
                    hour++;
                    minute-=60;
                    if(minute<10)
                        cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                    else
                        cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
                }else if (minute<10)
                    cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                else 
                    cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
            }else if(hour==12){
                a='P';
                if(minute>59){
                    hour++;
                    minute-=60;
                    if(minute<10)
                        cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                    else
                        cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
                }else if (minute<10)
                    cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                else 
                    cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
            }else{
            if(minute>59){
                a=='A';
                hour++;
                minute-=60;
                if(minute<10)
                    cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                else
                    cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
                }else if (minute<10)
                    cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                else 
                    cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;

            }
        
         }else if (a=='P'){
            hour+=hourW;
            minute+=minuteW;
         }else if(hour>12){
                hour-=12;
                a='A';
                if(minute>59){
                    hour++;
                    minute-=60;
                    if(minute<10)
                        cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                    else
                        cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
                }else if (minute<10)
                    cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                else 
                    cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
            }else if(hour==12){
                a='A';
                if(minute>59){
                    hour++;
                    minute-=60;
                    if(minute<10)
                        cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                    else
                        cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
                }else if (minute<10)
                    cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                else 
                    cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
            }else{
            if(minute>59){
                a=='P';
                hour++;
                minute-=60;
                if(minute<10)
                    cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                else
                    cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
                }else if (minute<10)
                    cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                else 
                    cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
            }
        }else{
            hour+=hourW;
            minute+=minuteW;
            if(hour>12){
                hour-=12;
                if(minute>59){
                    hour++;
                    minute-=60;
                    if(minute<10)
                        cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                    else
                        cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
                }else if (minute<10)
                    cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                else 
                    cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
            }else if(hour==12){
                if(minute>59){
                    hour++;
                    minute-=60;
                    if(minute<10)
                        cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                    else
                        cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
                }else if (minute<10)
                    cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                 else 
                    cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
            }else{
                if(minute>59){
                    hour++;
                    minute-=60;
                    if(minute<10)
                        cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                    else
                        cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;
                    }else if (minute<10)
                        cout<<"New Time: "<<hour<<":0"<<minute<<" "<<a<<"M"<<endl<<endl;
                    else 
                        cout<<"New Time: "<<hour<<":"<<minute<<" "<<a<<"M"<<endl<<endl;

            }
        
        
        
    }
    
    return a;
}