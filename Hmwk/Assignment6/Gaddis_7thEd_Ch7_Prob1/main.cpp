/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Created on July 25, 2014, 4:05 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
void values(int [], int);


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;
    int a[SIZE];
    char again;
    
    do{
        //Inputs numbers into array, then finds max and min
        values (a, SIZE);  
        
        //Ask user if he wants to run again
        cout<<"Run again (Y/N)? ";
        cin>>again;
        cout<<endl; 
    }while (again=='Y'||again=='y');
    
    return 0;
}

void values(int a[], int SIZE){
    //Declare Variables
    int max, min;
    
    //Output welcome message & input numbers
    cout<<"Welcome! Please enter ten numbers, hitting enter after each ";
    cout<<"number."<<endl;
    cin>>a[0];
    
    //Set max to the first variable in array
    max=a[0];
    
    //Loops through all variables in array, compares each integer to max
    for(int i=1; i<SIZE; i++){
        cin>>a[i];
        if (a[i]>max)
            max=a[i];
    }
    
    //Set min to first variables
    min=a[0];
    
    //Loops to find minimum integer in array
    for(int j=1; j<SIZE; j++){
        if (a[j]<min)
            min=a[j];
    }
    
    //Output Results
    cout<<"Largest integer: "<<max<<endl;
    cout<<"Smallest integer: "<<min<<endl;
    
    }

