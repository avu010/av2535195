/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Deep Fried Twinkies!
 * Created on July 10, 2014, 11:03 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    //Known
    float cstTwnk=3.50f;         //Cost of Twinkie
    float B=1.0f;                  //Value of a dollar bill
    float Q=0.25f;               //Value of a quarter
    float D=0.1f;                //Value of a dime
    float N=0.05f;               //Value of a nickel
    //Input
    char dollar[7]="dollar";     //Dollar
    char quarter[8]="quarter";   //Quarter
    char dime[5]="dime";         //Dime 
    char nickel[7]="nickel";     //Nickel       
    char money[8];               //Type of money user inputs
    //Output
    float totAmt=0;              //Total Amount tendered
    float change;                //Change
    
    //Description of Twinkie purchasing
    cout<<"One Twinkie is $3.50\n";
    cout<<"Enter nickle, dime, quarter or dollar one at a time ";
    cout<<"until $3.50 is reached.\n";
    
    //Do while statement and input coins one at a time
    do{
        //Ask user for type of money
        cout<<"\nInput your coin or bill\n";
        cin>>money;
        //String comparison 
        if(!strcmp(money,dollar))
            totAmt+=B;
        else if(!strcmp(money,quarter))
            totAmt+=Q;
        else if(!strcmp(money,dime))
            totAmt+=D;
        else if(!strcmp(money,nickel))
            totAmt+=N;
        else{
            cout<<"Please enter a legitimate coin or bill!"<<endl;
        }
        //Display total each time user inputs coin or bill
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Total amount so far: $"<<totAmt<<endl;
    }while(totAmt<cstTwnk);
         
    //Calculate change and Output statement
    change=totAmt-cstTwnk;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\nEnjoy your deep-fried twinkie!\n";
    cout<<"Change: $"<<change<<endl;
    
    //Exit Stage Right
    return 0;
}

