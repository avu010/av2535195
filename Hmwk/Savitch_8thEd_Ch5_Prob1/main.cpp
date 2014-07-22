/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: converts time 
 * Created on July 22, 2014, 10:14 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Function Prototypes
void welcome();
void input(int& hour, int& minute);
int CNVS(int& hour);
void output(int hour, int minute, char a);

//Global Constants

//Execution Begins Here:
int main(int argc, char** argv) {
    int hour, minute;
    char a, again;
    
    do{
        welcome();
        input(hour, minute);
        a=CNVS(hour);
        output(hour,minute, a);
        cout<<"\nCalculate again (Y/N)? ";
        cin>>again;
        cout<<endl;
    }while(again=='Y'||again=='y');

    //Exit Stage Right
    return 0;
}

void welcome(){
    cout<<"Welcome! I will convert any time from 24 hour-notation to 12-hour";
    cout<<" notation. Start by entering a time (ex. 14:25)."<<endl;
}

void input(int& hour, int& minute){
    char dum;
    cout<<"Enter time (24 hour notation): ";
    cout<<setw(2);
    cin>>hour>>dum>>minute;
}

int CNVS(int& hour){
    char a='A';
    if(hour>12){
        hour-=12;
        a='P';
    }
    return a;
}

void output(int hour, int minute, char a){
    if(minute<10){
        if(a=='P'){
            cout<<"Time in 12-hour notation: ";
            cout<<hour<<":0"<<minute<<" "<<a<<"M";
        }else{
            cout<<"Time in 12-hour notation: ";
            cout<<hour<<":0"<<minute<<" "<<a<<"M";
        }
    }
    else{
        if(a=='P'){
            cout<<"Time in 12-hour notation: ";
            cout<<hour<<":"<<minute<<" "<<a<<"M";
        }else{
            cout<<"Time in 12-hour notation: ";
            cout<<hour<<":"<<minute<<" "<<a<<"M";
        }
    }
}

