/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 22, 2014, 1:16 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
//Functions for Main Menu
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
//Functions for Problem 1
void welcome();
void input(int& hour, int& minute);
int CNVS(int& hour);
void output(int hour, int minute, char a);
int newTime(int& hour,int& hr, int& min, int& minute, char a);

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
        case 7: problem7();break;
        case 8: problem8();break;
        case 9: problem9();break;
        case 10: problem10();break;
            default:def(inN);
        };
    }while(inN<11);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 for problem 8"<<endl;
    cout<<"Type 9 for problem 9"<<endl;
    cout<<"Type 10 for problem 10"<<endl;
    cout<<"Type 11 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    //Declare Variables
    int hour, minute;
    char a;
    
    //Displays Welcome Message
    welcome();
    
    //Prompt user to input time
    input(hour, minute);
    
    //Converts to 12 hour notation
    a=CNVS(hour);
    
    //Output Results
    output(hour,minute, a);
    cout<<endl<<endl;
}

//Function for Problem 1
void welcome(){
    cout<<"Welcome! I will convert any time from 24 hour-notation to 12-hour";
    cout<<" notation. Start by entering a time (ex. 14:25)."<<endl;
}

//Function for Problem 1,2
void input(int& hour, int& minute){
    char dum;
    cout<<"Enter time (24 hour notation): ";
    cout<<setw(2);
    cin>>hour>>dum>>minute;
}

//Function for Problem 1
int CNVS(int& hour){
    char a='A';
    if(hour>12){
        hour-=12;
        a='P';
    }
    return a;
}

//Function for Problem 1
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

//Solution to problem 2
void problem2(){
    //Declare Variables
    int hour, minute, hr, min;
    char a;
    
    //Output Welcome Message
    cout<<"Welcome! Please start by entering the current time (24-hour notation).";
    cout<<"\n Then, please enter the number of hours and minutes for the wait time.\n";
    
    //Prompt user to input current time
    input(hour, minute);
    
    //Prompt user to input wait time
    cout<<"Please enter the number of hours you have to wait: ";
    cin>>hr;
    cout<<"Please enter the number of minute you have to wait: ";
    cin>>min;
    
    //Calculate new time
    a=newTime(hour, hr, min, minute, a);
    
    //Output New Time
    cout<<hour<<":"<<min<<a<<endl<<endl;
}

//Function for Problem 2
int newTime(int& hour, int& hr, int& min, int& minute, char a){
    hour+=hr;
    minute+=min;
    if(hour>24){
        hour-=25;
        a='A';
    }else if (hour>=12&&hour<=24){
        a='P';
    }else{
        a='A';
    }
    return a;
}
//Solution to problem 3
void problem3(){
    
}

//Solution to problem 4
void problem4(){
    
}

//Solution to problem 5
void problem5(){
    
}

//Solution to problem 6
void problem6(){
    
}

//Solution to problem 7
void problem7(){
    
}

//Solution to problem 8
void problem8(){
    
}

//Solution to problem 9
void problem9(){
    
}


//Solution to problem 10
void problem10(){
    
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program."<<endl;
}