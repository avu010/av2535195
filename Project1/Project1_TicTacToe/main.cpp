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
void displayGrid(char []);
void takeTurn(char[], bool);
bool gameOver(char[]);


//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    char plyr1='X';                 //Player 1
    char plyr2='O';                 //Player 2
    const int SIZE=10;
    char grid[SIZE]={'x','1','2','3','4','5','6','7','8','9'};
    
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
    
    //Gameplay
    do{
        displayGrid(grid);
        takeTurn(grid,first);
        if(first){
            first=false;
        }
        else{
            first=true;
        }
                
    }while(!gameOver(grid));    
    //Exit Stage Right!
    return 0;
}


void displayGrid(char grid[]){
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
}
void takeTurn(char grid[], bool p1){
    unsigned short choice;
    //Gather Data Input
    do{
        if(p1){
            cout<<"Player 1, ";
        }
        else{
            cout<<"Player 2, ";
        }
        cout<<"enter number: ";
        cin>>choice;
    }while(choice>9||choice<1||grid[choice]!=(choice+'0'));
    
    if(p1){
        grid[choice] = 'X';
    }
    else{
        grid[choice] = 'O';
    }
                            
}
bool gameOver(char grid[]){
    //Declare Variables
    bool over=false;
    //Determine if game is over
    for(int i=0;i<10;i++){
        if(grid[i]<='9'&&grid[i]>='0')
            over=true;
    }
    if((grid[1]==grid[2])&&(grid[1]==grid[3]))
        over=true;
    else if((grid[4]==grid[5])&&(grid[4]==grid[6]))
        over=true;
    else if((grid[7]==grid[8])&&(grid[7]==grid[9]))
        over=true;
    else if((grid[1]==grid[4])&&(grid[1]==grid[5]))
        over=true;
    else if((grid[2]==grid[5])&&(grid[2]==grid[8]))
        over=true;
    else if((grid[3]==grid[6])&&(grid[3]==grid[9]))
        over=true;
    else if((grid[1]==grid[5])&&(grid[1]==grid[9]))
        over=true;
    else if((grid[3]==grid[5])&&(grid[3]==grid[8]))
        over=true;
    
    return over;

}

