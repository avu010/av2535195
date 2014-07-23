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
//Problem 3,5
const float FTMT=0.3048f;  //Meters in one foot
const float INCM=2.54f;    //Centimeters in one inch     
//Problem 4,5
float MTFT=3.28084f;       //Feet in meters
float CTIN=0.393701f;      //Inches in one centimeter     
//Problem 6
float LBKG=0.4536f;       //Kilograms in one pound
float OZG=28.3495f;       //Grams in one ounce
//Problem 7
float KGLB=2.205f;       //Pounds in one gram
float GOZ=0.0353f;       //Ounces in one gram

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
//Functions for Problem 3,5
void input6 (float&,float&);
void cnvsn6 (float&,float&,float&,float&);
void output6 (float&, float&);
//Functions for Problem 4,5
void input7 (float&, float&); 
void cnvsn7 (float&, float&, float&, float&);
void output7 (float&, float&);
//Functions for Problem 6
void input9 (float&, float&);
void cnvsn9 (float&, float&, float&, float&);
void output9 (float&, float&);
//Functions for Problem 7
void input10 (float&, float&);
void cnvsn10 (float&, float&, float&, float&);
void output10 (float&, float&);



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
//Savitch 8thEd Ch5 Prob 1
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

//Solution to problem 2
//Savitch 8thEd Ch5 Prob 2
void problem2(){
    //Declare Variables
    int hour, minute, hr, min;
    char a;
    
    //Output Welcome Message
    cout<<"Welcome! Please start by entering the current time (24-hour notation).";
    cout<<"\nThen, please enter the number of hours and minutes for the wait time.\n";
    
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
        hour-=24;
        a='A';
    }else if (hour>=12&&hour<=24){
        a='P';
    }else{
        a='A';
    }
    return a;
}

//Solution to problem 3
//Savitch 8thEd Ch5 Prob 6
void problem3(){
    //Declare Variables
    float feet, inches, meters, centim;
    
    //Gather Data Input
    input6 (feet, inches);
    
    //Calculate new length
    cnvsn6 (feet, inches, meters, centim);
    
    //Output Results
    output6 (meters, centim);
    
}

//Functions for Problem 3
void input6 (float& feet,float& inches){
    cout<<"Please enter a length in feet and inches. Then, I will convert it ";
    cout<<"to meters and centimeters.\n";
    cout<<"Feet: ";
    cin>>feet;
    cout<<"Inches: ";
    cin>>inches;
}

void cnvsn6 (float& feet,float& inches, float& meters,float& centim){
    meters=FTMT*feet;
    centim=INCM*inches;
}

void output6 (float& meters, float& centim){
    cout<<"The equivalent length in meters and centimeters is: ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<meters<<" m and "<<centim<<" cm"<<endl<<endl;
}

//Solution to problem 4
//Savitch 8thEd Ch5 Prob 7
void problem4(){
    //Declare Variables
    float meters, centim, inches, feet;
    
    //Gather Data Input
    input7 (meters, centim);
    
    //Convert
    cnvsn7 (feet, meters, inches, centim);
    
    //Output Results
    output7 (feet, inches);
}

//Functions for Problem 4
void input7 (float& meters, float& centim){
    cout<<"Welcome! Give me a length in meters and centimeters, and I will ";
    cout<<"give you the same length in feet and inches"<<endl;
    cout<<"Meters: ";
    cin>>meters;
    cout<<"Centimeters: ";
    cin>>centim;
}

void cnvsn7 (float& feet, float& meters, float& inches, float& centim){
    feet=MTFT*meters;
    inches=CTIN*centim;
}

void output7 (float& feet, float& inches){
    cout<<"The equivalent length in feet and inches is: ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<feet<<" ft and "<<inches<<" in"<<endl<<endl;
}
  

//Solution to problem 5
//Savitch 8thEd Ch5 Prob 8
void problem5(){
    //Declare Variables
    float meters, centim, feet, inches;
    char choice;
    
    //Ask user which conversion he/she wants
    cout<<"[1] Convert feet and inches to meters and centimeters\n";
    cout<<"[2] Convert meters and centimeters to feet and inches\n";
    cout<<"Which conversion (1 or 2)? ";
    cin>>choice;
    
    //Execute appropriate calculation
    if(choice=='1'){
        //Data Input
        input6 (feet, inches);
    
        //Convert
        cnvsn6 (feet, inches, meters, centim);

        //Output Results
        output6 (meters, centim); 
    }else if (choice=='2'){
        input7 (meters, centim);

        //Convert
        cnvsn7 (feet, meters, inches, centim);

        //Output Results
        output7 (feet, inches);
    }
}

//Solution to problem 6
//Savitch 8thEd Ch5 Problem 9
void problem6(){
    //Declare Variables
    float lb, oz, kg, g;
    
    //Gather Data Input
    input9 (lb, oz);
    
    //Convert
    cnvsn9 (lb, oz, kg, g);
    
    //Output Results
    output9 (kg, g);
}

//Functions for Problem 6
void input9 (float& lb, float& oz){
    cout<<"Welcome! Enter a weight in pounds and ounces, and I will convert it";
    cout<<" to kilograms and grams.\n";
    cout<<"Pounds: ";
    cin>>lb;
    cout<<"Ounces: ";
    cin>>oz;
}

void cnvsn9 (float& lb, float& oz, float& kg, float& g){
    kg=LBKG*lb;
    g=OZG*oz;
}

void output9 (float& kg, float& g){
    cout<<"The equivalent weight in kilograms and grams is: ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<kg<<" kg and "<<g<<" g"<<endl<<endl;
}

//Solution to problem 7
//Savitch 8thEd Ch5 Prob 10
void problem7(){
    //Declare Variables
    float lb, oz, kg, g;
    
    //Gather Data Input
    input10 (kg, g);
    
    //Convert
    cnvsn10 (kg, g, lb, oz);
    
    //Output Results
    output10 (lb, oz);
}

//Functions for Problem 7
void input10 (float& kg, float& g){
    cout<<"Welcome! Enter a weight in kilograms and grams, and I will convert it";
    cout<<" to pounds and ounces.\n";
    cout<<"Kilograms: ";
    cin>>kg;
    cout<<"Grams: ";
    cin>>g;
}

void cnvsn10 (float& kg, float& g, float& lb, float& oz){
    lb=KGLB*kg;
    oz=GOZ*g;
}

void output10 (float&lb, float&oz){
    cout<<"The equivalent weight in pounds and ounces is: ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<lb<<" lb and "<<oz<<" oz"<<endl<<endl;
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