/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Rock Paper Scissors problem
 * Created on July 6, 2014, 2:20 PM
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
    //Input
    char plyr1;          //Move made by player 1. 
    char plyr2;          //Move made by player 2.
    char optn;           //Option to play again or not
    
//Acquire data input
    cout<<"Welcome to the paper-rock-scissor game!\n";
    cout<<endl;
               
//Determine winner and explanation
    do{
        
    cout<<"Player 1 - Choose R for rock, P for paper, or S for scissors ";
    cout<<"and hit return key: ";
    cin>>plyr1;
    cout<<"Player 2 - Choose R for rock, P for paper, or S for scissors";
    cout<<"and hit return key: ";
    cin>>plyr2;
    cout<< endl;
    
    if (((plyr1=='P')||(plyr1=='p'))&&((plyr2=='R')||(plyr2=='r')))
        cout<<"The winner is Player 1! Paper covers rock.";
  
    else if (((plyr1=='R')||(plyr1=='r'))&&((plyr2=='P')||(plyr2=='p')))
        cout<<"The winner is Player 2! Paper covers rock.";
    
    else if (((plyr1=='S')||(plyr1=='s'))&&((plyr2=='P')||(plyr2=='p')))
        cout<<"The winner is Player 1! Scissors cut paper.";
   
    else if (((plyr1=='P')||(plyr1=='p'))&&((plyr2=='S')||(plyr2=='s')))
        cout<<"The winner is Player 2! Scissors cut paper."; 
 
    else if (((plyr1=='R')||(plyr1=='r'))&&((plyr2=='S')||(plyr2=='s'))) 
        cout<<"The winner is Player 1! Rock breaks scissors.";
   
    else if (((plyr1=='S')||(plyr1=='s'))&&((plyr2=='R')||(plyr2=='r'))) 
        cout<<"The winner is Player 2! Rock breaks scissors.";

    else 
        cout<<"Nobody wins.";
    
    cout<<endl;
    cout<<"Would you like to play again? (Y/N): ";
    cin>>optn;
    cout<<endl;
    }
    
    while ((optn=='Y')||(optn=='y'));
    
    return 0;
}

