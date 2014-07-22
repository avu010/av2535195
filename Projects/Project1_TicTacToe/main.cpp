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
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void displayGrid(char []);      //Displays Tic-Tac-Toe board
void takeTurn(char[], bool);    //Places appropriate mark on board 
bool gameOver(char[]);          //Determines whether or not game is over
short winner(char[], short);    //Determines winner
void menu();                    //Displays menu


//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    const int SIZE=10;
    //Array used for board
    char grid[SIZE]={'x','1','2','3','4','5','6','7','8','9'};  
    bool p1;                        //Used to determine who's turn it is
    short win;                      //Used to determining winner
    unsigned short score1=0;        //Calculate score for player 1
    unsigned short score2=0;        //Calculate score for player 2
    char again;                     //Whether players want to play again
    bool over;                      //Determines if game is over   
    
    //Display Menu
    menu();
    
    //Welcome player and output which player is what mark
    cout<<"Welcome to Tic-Tac-Toe! Who will play first will be randomly chosen.";
    cout<<" May the best man win!"<<endl;
    cout<<"Player 1= X"<<endl;
    cout<<"Player 2= O"<<endl<<endl;
    
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Determine who will go first 
    bool first=rand()%2; 
    
    //Output who will go first
    if(first){
        cout<<"Congratulations Player 1, you get to play first!";
        cout<<endl<<endl;
    }else{
        cout<<"Congratulations Player 2, you get to play first!";
        cout<<endl<<endl;
    }
    
    //Game Play
    //Reiterates game until players decide to stop
    do{
        //Game continues until game is over
        do{
            displayGrid(grid);          //Display Grid
            takeTurn(grid,first);       //User takes turn
            //Switches between players 1 & 2
            if(first){                  
                first=false;
            }else{
                first=true;
            }
        }while(!gameOver(grid));
        
        //Determines if game is over & outputs game over message
        gameOver(grid);
        if (over=true){           
            cout<<"\n*****************************\n";
            cout<<"         Game Over!          \n";
            cout<<"*****************************\n";
        }   
        
        //Display final board that ends game
        displayGrid(grid);       

        //Displays winner
        win = winner(grid,win);

        //Keep track of scores 
        if (win==1){
            score1++;
        }else if (win==0){
            score2++;
        }else if (win==-1){
            score1+=0;
            score2+=0;
        }
        
        //Output scores to file
        ofstream output;
        output.open ("scores.txt");
        output<<"Player 1: "<<score1<<" wins & "
              <<"Player 2: "<<score2<<" wins...........";
        
        if(score1<score2)
            output<<"Player 1, you need to step up your game!\n";       
        else if (score2<score1)
            output<<"Player 2, you need to step up your game!\n";
        else
            output<<"Player 1 and Player 2, you are tied.\n";
        
        //Close File
        output.close ();   
        
        //Reset board so user can play again
        grid[1]='1';
        grid[2]='2';
        grid[3]='3';
        grid[4]='4';
        grid[5]='5';
        grid[6]='6';
        grid[7]='7';
        grid[8]='8';
        grid[9]='9';
        
        //Ask if player wants to play again
        cout<<"Play again (Y/N)? ";
        cin>>again;
    }while((again=='Y')||(again=='y'));
 
    //Exit Stage Right!
    return 0;
    
}

//Function displays grid
void displayGrid(char grid[]){
    //Board with variables at designated positions
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

//Function places mark on board
void takeTurn(char grid[], bool p1){
    unsigned short choice;  //Where user wants to place mark (1,2,3...9)
    
    //Gather Data Input
    //Takes user's choices as long as spaces are available
    do{
        if(p1){
            cout<<"Player 1, ";
        }else{
            cout<<"Player 2, ";
        }
        cout<<"enter number: ";
        cin>>choice;
    }while(choice>9||choice<1||grid[choice]!=(choice+'0'));
    
    //If player one makes mark, place an X. If player 2, place O.
    if(p1){
        grid[choice] = 'X';
    }
    else{
        grid[choice] = 'O';
    }
                            
}

//Determines whether game is over
bool gameOver(char grid[]){
    //Declare Variables
    bool over=false;        
    
    //Determine if game is over
    //Game is over if one of the players wins, or if all the spaces are taken up
    if((grid[1]==grid[2])&&(grid[1]==grid[3]))
        over=true;
    else if((grid[4]==grid[5])&&(grid[4]==grid[6]))
        over=true;
    else if((grid[7]==grid[8])&&(grid[7]==grid[9]))
        over=true;
    else if((grid[1]==grid[4])&&(grid[1]==grid[7]))
        over=true;
    else if((grid[2]==grid[5])&&(grid[2]==grid[8]))
        over=true;
    else if((grid[3]==grid[6])&&(grid[3]==grid[9]))
        over=true;
    else if((grid[1]==grid[5])&&(grid[1]==grid[9]))
        over=true;
    else if((grid[3]==grid[5])&&(grid[3]==grid[7]))
        over=true;   
    else if ((grid[1]!='1')&&(grid[2]!='2')&&(grid[3]!='3')&&(grid[4]!='4')&&
            (grid[4]!='4')&&(grid[5]!='5')&&(grid[6]!='6')&&(grid[7]!='7')&&
            (grid[8]!='8')&&(grid[8]!='8')&&(grid[9]!='9'))
        over=true;
    else
        over=false;
    
    //Over=true, Game over
    //Over=false, game not over
    return over;
}

//Determines winner
short winner(char grid[],short win){
    win=-1;
    if((grid[1]=='X')&&(grid[2]=='X')&&(grid[3]=='X')){
        cout<<"Player 1 wins!"<<endl;
        win=1;
    }else if((grid[1]=='O')&&(grid[2]=='O')&&(grid[3]=='O')){
        cout<<"Player 2 wins!"<<endl;
        win=0;
    }else if((grid[4]=='X')&&(grid[5]=='X')&&(grid[6]=='X')){
        cout<<"Player 1 wins!"<<endl;
        win=1;   
    }else if((grid[4]=='O')&&(grid[5]=='O')&&(grid[6]=='O')){
        cout<<"Player 2 wins!"<<endl;
        win=0;
    }else if((grid[7]=='X')&&(grid[8]=='X')&&(grid[9]=='X')){
        cout<<"Player 1 wins!"<<endl;
        win=1;
    }else if((grid[7]=='O')&&(grid[8]=='O')&&(grid[9]=='O')){
        cout<<"Player 2 wins!"<<endl;
        win=0;
    }else if((grid[1]=='X')&&(grid[4]=='X')&&(grid[7]=='X')){
        cout<<"Player 1 wins!"<<endl;
        win=1;
    }else if((grid[1]=='O')&&(grid[4]=='O')&&(grid[7]=='O')){
        cout<<"Player 2 wins!"<<endl;
        win=0;
    }else if((grid[2]=='X')&&(grid[5]=='X')&&(grid[8]=='X')){
        cout<<"Player 1 wins!"<<endl;
        win=1;
    }else if((grid[2]=='O')&&(grid[5]=='O')&&(grid[8]=='O')){
        cout<<"Player 2 wins!"<<endl;
        win=0;
    }else if((grid[3]=='X')&&(grid[6]=='X')&&(grid[9]=='X')){
        cout<<"Player 1 wins!"<<endl;
        win=1;
    }else if((grid[3]=='O')&&(grid[6]=='O')&&(grid[9]=='O')){
        cout<<"Player 2 wins!"<<endl;
        win=0;
    }else if((grid[1]=='X')&&(grid[5]=='X')&&(grid[9]=='X')){
        cout<<"Player 1 wins!"<<endl;
        win=1;
    }else if((grid[1]=='O')&&(grid[5]=='O')&&(grid[9]=='O')){
        cout<<"Player 2 wins!"<<endl;
        win=0;
    }else if((grid[3]=='X')&&(grid[5]=='X')&&(grid[7]=='X')){
        cout<<"Player 1 wins!"<<endl;
        win=1;
    }else if((grid[3]=='O')&&(grid[5]=='O')&&(grid[7]=='O')){
        cout<<"Player 2 wins!"<<endl;
        win=0;
    }else{
        cout<<"No one wins."<<endl;
        win=-1;
    }
    
    //win=1, player 1 wins
    //win=0, player 2 wins
    //win=-1, draw
    return win;

}
void menu(){
    char choice;
    //Prompt user to input choice
    do{
        cout<<"Main Menu:  "<<endl;
        cout<<"[1] Play Game"<<endl;
        cout<<"[2] Rules"<<endl;
        cin>>choice;
    }while(choice<'1'||choice>'2');
    
    //Output options 
    switch(choice){
        case '1':
            cout<<endl;
            break;
        case '2':
            cout<<"Rules:  "<<endl;
            cout<<"1. Decide who will be Player 1 or Player 1"<<endl;
            cout<<"2. When making your move, choose the number where you want";
            cout<<" to place your mark."<<endl;
            cout<<"3. Try to get all three of your marks in a row, ";
            cout<<" column, or diagonal row before the other player does.\n";
            cout<<"4. After each game, decide if you want to play again.\n";
            cout<<"4. If you want to see a tally of your scores, see the ";
            cout<<"text file entitled scores."<<endl;
            cout<<"5. Have fun!"<<endl<<endl;
            break;  
    }   
}

