/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Project 1 - Tic Tac Toe!
 * Created on July 11, 2014, 11:15 AM
 */

//System Level Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short choice;          //Where player chooses to place mark
    char plyr1='X';                 //Player 1
    char plyr2='O';                 //Player 2
    char grid[10]={'x','1','2','3','4','5','6','7','8','9'};
    
    //Welcome player and output which player is what mark
    cout<<"Welcome to Tic-Tac-Toe! Who will play first will be randomly chosen...";
    cout<<"May the best man win!"<<endl;
    cout<<"Player 1= "<<plyr1<<endl;
    cout<<"Player 2= "<<plyr2<<endl<<endl;
    
    //Decide which player plays first using random number generator
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));          
    //Determine who will go first - remainder 0,1
    bool first=rand()%2; 
    //Output who will go first
    if(first){
        cout<<"Congratulations Player 1, you get to play first!";
        cout<<endl<<endl;
    }else{
        cout<<"Congratulations Player 2, you get to play first!";
        cout<<endl<<endl;
    }
    
    //Output 3x3 grid and explain to user what to do
    cout<<"          |          |          "<<endl;
    cout<<"    "<<grid[1]<<"     |    "<<grid[2]<<"     |    "<<grid[3]<<endl;
    cout<<"__________|__________|__________"<<endl;
    cout<<"          |          |          "<<endl;
    cout<<"    "<<grid[4]<<"     |    "<<grid[5]<<"     |    "<<grid[6]<<endl;
    cout<<"__________|__________|__________"<<endl;
    cout<<"          |          |          "<<endl;
    cout<<"    "<<grid[7]<<"     |    "<<grid[8]<<"     |    "<<grid[9]<<endl;
    cout<<"          |          |          "<<endl;
    
    //Gather Data Input
    cout<<"Enter number: ";
    cin>>choice;
    
    //
    //Exit Stage Right!
    return 0;
}

