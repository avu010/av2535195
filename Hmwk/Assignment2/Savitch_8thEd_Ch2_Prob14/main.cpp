/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch2 Prob14
 * Created on June 26, 2014, 12:32 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    string inst; //Name of instructor
    string name; //Name of user
    string food; //Food
    string adj;  //Adjective
    string col;  //Color
    string anim; //Animal
    int num;     //Number between 100 and 120
    
//Ouput Text and Input Data from user
    cout<<"Enter the first or last name of your instructor: ";
    getline(cin,inst);
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter a food: ";
    getline(cin,food);
    cout<<"Enter an adjective: ";
    getline(cin,adj);
    cout<<"Enter a color: ";
    getline(cin,col);
    cout<<"Enter an animal: ";
    getline(cin,anim);
    cout<<"Enter a number from 100 to 120: ";
    cin>>num;
    cin.ignore();
    
//Output Mad Lib
    cout<<"\nDear Instructor "<<inst<<",\n";
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,\n";
    cout<<"I ate a rotten "<<food<<","<<" which made me turn "<<col<<" and extremely ill. I\n";
    cout<<"came down with a fever of "<<num<<". Next, my "<< adj<<" pet "<<anim<<" must have smelled\n";
    cout<<"the remains of the "<<food<<" on my homework, because he ate it.\n";
    cout<<"I am currently reviewing my homework and hope you will accept it late.\n";
    cout<<endl;
    cout<<"Sincerely,\n";
    cout<<name;
    
//Exit Stage Right!
    return 0;
}

