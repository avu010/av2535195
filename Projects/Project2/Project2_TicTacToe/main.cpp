/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Project 2
 * Created on July 25, 2014, 10:17 PM
 */

//System Level Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
const int COL=3;        //Size of columns of grid

//Function Prototypes
void welcome();
void displayGrid(char[][COL],const int);   //Displays Tic-Tac-Toe board
void takeTurn(char[][COL],const int,bool); //Places appropriate mark on board 
bool gameOver(char[][COL],const int);  //Determines whether or not game is over
short winner(char[][COL],const int);       //Determines winner
void menu();                               //Displays menu
void reset (char[][COL],const int);        //Resets board 
void file (int,const int);                 //Outputs scores to file
void sort(char[][COL],const int);          //Sorts board
void swap(char&,char&);                    //Swap values used for sort
void stall();                 //Stalls program so it can print out sorts slower                                            
void conversion(char,int&,int&);        //Converts user's choice to coordinates


//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    const int ROW=3;                //Size of rows
    char grid[ROW][COL];            //Array used to print grid    
    bool p1;                        //Used to determine who's turn it is
    short win;                      //Used to determining winner
    unsigned short score1=0;        //Calculate score for player 1
    unsigned short score2=0;        //Calculate score for player 2
    char again;                     //Whether players want to play again
    bool over;                      //Determines if game is over  
    bool first;                     //Used to switch between players
    
    //Display Menu
    menu();
    
    //Welcome Message
    welcome();
    
   //Initialize board
   //Open and input data from file
   ifstream board;
   board.open("board.txt");
   
   //Read Data into array
   for (int i=0; i<ROW; i++){
       for (int j=0; j<COL; j++)
           board>>grid[i][j];
    }
    
    //Close file
    board.close();
    
    //Reiterates game until players decide to stop
    do{
        //Game continues until it is over
        do{
            //Display Grid
            displayGrid(grid,ROW);   
            //User takes turn
            takeTurn(grid,ROW,first);      
            //Switches between players 1 & 2
            if(first){                  
                first=false;
            }else{
                first=true;
            }
        }while(!gameOver(grid, ROW));
        
        //Determines if game is over & outputs game over message
        gameOver(grid, ROW);
        if (over=true){           
            cout<<"\n**********************************************\n";
            cout<<"                  Game Over!          \n";
            cout<<"**********************************************\n";
        }   
        
        //Display final board that ends game
        displayGrid(grid, ROW);       

        //Displays winner
        win = winner(grid,ROW);

        //Keep track of scores
        //win=1, player 1 wins
        //win=0, player 2 wins
        //win=-1; no one wins
        if (win==1){
            score1++;
        }else if (win==0){
            score2++;
        }else if (win==-1){
            score1+=0;
            score2+=0;
        }
        
        //Output scores to file
        file (score1,score2);  
        
        //Ask if player wants to play again
        cout<<"Play again (Y/N)? ";
        cin>>again;
        
        //Sorts grid and prints out dance before board resets
        sort(grid,ROW);
        
        //Reset board so user can play again
        reset(grid, ROW);
    }while((again=='Y')||(again=='y'));
 
    //Exit Stage Right!
    return 0;   
}

//Function displays grid
void displayGrid(char grid[][COL], const int ROW){
    //Board with variables at designated positions
    cout<<"             |          |          "<<endl;
    cout<<"       "<<grid[0][0]<<"     |    "<<grid[0][1]<<"     |    ";
    cout<<grid[0][2]<<endl;
    cout<<"   __________|__________|__________"<<endl;
    cout<<"             |          |          "<<endl;
    cout<<"       "<<grid[1][0]<<"     |    "<<grid[1][1]<<"     |    ";
    cout<<grid[1][2]<<endl;
    cout<<"   __________|__________|__________"<<endl;
    cout<<"             |          |          "<<endl;
    cout<<"       "<<grid[2][0]<<"     |    "<<grid[2][1]<<"     |    ";
    cout<<grid[2][2]<<endl;
    cout<<"             |          |          "<<endl;
}

//Displays welcome message as well as randomly chooses who plays first
void welcome(){
    //Welcome player and output which player is what mark
    cout<<"Welcome to Tic-Tac-Toe! First player will be randomly chosen.";
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
}

//Places mark on board
void takeTurn(char grid[][COL], const int ROW, bool p1){
    //Declare Variables
    char ch;            //User's choice
    int row;            //Row coordinate
    int column;         //Column coordinate
    
    //Gather Data Input
    //Takes user's choices as long as it's valid
    do{
        if(p1){
            cout<<"PLAYER 1'S TURN"<<endl;
        }else{
            cout<<"PLAYER 2'S TURN"<<endl;
        }
        cout<<"Enter number: ";
        cin>>ch;
        //Converts user's choice to coordinate on game board
        conversion(ch,row,column);
    }while(row==3||column==3);
        
    //If player one makes mark, place an X. If player 2, place O.
        if(p1){
        grid[row][column] = 'X';
        }else{
        grid[row][column] = 'O';
        }
}

//Determines whether game is over
bool gameOver(char grid[][COL], const int ROW){
    //Declare Variables
    bool over=false;                 
    
    //Game over conditions
    //Checks for rows
    for(int i=0; i<ROW; i++){
        if((grid[i][0]==grid[i][1])&&(grid[i][0]==grid[i][2]))
            over=true;
    }
    
    //Checks for columns
    for (int j=0; j<COL; j++){
        if ((grid[0][j]==grid[1][j])&&(grid[0][j]==grid[2][j]))
            over=true;
    }
    
    //Checks for diagonals
    if ((grid[0][0]==grid[1][1])&&(grid[0][0]==grid[2][2]))
            over=true;
    else if ((grid[0][2]==grid[1][1])&&(grid[0][2]==grid[2][0]))
            over=true;
    
    //Checks for a draw
    else if (((grid[0][0]=='X')||(grid[0][0]=='O'))&&
            ((grid[0][1]=='X')||(grid[0][1]=='O'))&&
            ((grid[0][2]=='X')||(grid[0][2]=='O'))&&
            ((grid[1][0]=='X')||(grid[1][0]=='O'))&&
            ((grid[1][1]=='X')||(grid[1][1]=='O'))&&
            ((grid[1][2]=='X')||(grid[1][2]=='O'))&&
            ((grid[2][0]=='X')||(grid[2][0]=='O'))&&
            ((grid[2][1]=='X')||(grid[2][1]=='O'))&&
            ((grid[2][2]=='X')||(grid[2][2]=='O')))
            over=true;
    
    //Over=true, Game over
    //Over=false, game not over
    return over;
}
//Determines winner
short winner(char grid[][COL], const int ROW){
    //Will be used to determine who wins
    short win=-1;
    
    //Loop through rows and columns to see who wins
    for(int i=0; i<ROW; i++){
        if ((grid[i][0]=='X')&&(grid[i][1]=='X')&&(grid[i][2]=='X')){
            cout<<"Player 1 wins!"<<endl;
            win=1;
        }else if ((grid[i][0]=='O')&&(grid[i][1]=='O')&&(grid[i][2]=='O')){
            cout<<"Player 2 wins!"<<endl;
            win=0;
        }else if ((grid[0][i]=='X')&&(grid[1][i]=='X')&&(grid[2][i]=='X')){
            cout<<"Player 1 wins!"<<endl;
            win=1;
        }else if ((grid[1][i]=='O')&&(grid[1][i]=='O')&&(grid[2][i]=='O')){
            cout<<"Player 2 wins!"<<endl;
            win=0;
        }
    }
    
    //Used to find wins in diagonals. Will only execute if statements above
    //aren't true
    if(!(win==1||win==0)){
        if ((grid[0][0]=='X')&&(grid[1][1]=='X')&&(grid[2][2]=='X')){
                cout<<"Player 1 wins!"<<endl;
                win=1;
        }else if ((grid[0][0]=='O')&&(grid[1][1]=='O')&&(grid[2][2]=='O')){
                cout<<"Player 2 wins!"<<endl;
                win=0;
        }else if ((grid[0][2]=='X')&&(grid[1][1]=='X')&&(grid[2][0]=='X')){
                cout<<"Player 1 wins!"<<endl;
                win=1;
        }else if ((grid[0][2]=='O')&&(grid[1][1]=='O')&&(grid[2][0]=='O')){
                cout<<"Player 2 wins!"<<endl;
                win=0;
        }else{
                cout<<"No one wins."<<endl;
                win=-1;
        }    
    } 
    
    //win=1, player 1 wins
    //win=0, player 2 wins
    //win=-1, draw
    return win;
}

//Menu 
void menu(){
    //Declare Variables
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
            cout<<"2. When making your move, choose a number (1-9) to place ";
            cout<<"your mark. "<<endl;
            cout<<"4. If you attempt to choose a number lower than 1 or ";
            cout<<"higher than 9 or if the space is already taken, you will";
            cout<<" be asked to choose another spot."<<endl;
            cout<<"5. Try to get all three of your marks in a row, ";
            cout<<" column, or diagonal row before the other player does.\n";
            cout<<"6. After each game, choose 'Y' if you want to play again";
            cout<<" or 'N' if you don't. "<<endl;
            cout<<"7. If you want to see a tally of your scores, see the ";
            cout<<"text file entitled scores."<<endl;
            cout<<"8. Have fun!"<<endl<<endl;
            break;  
    }   
}

//Resets board
void reset (char grid[][COL], const int ROW){
    int num=1;
    for (int i=0; i<ROW; i++){
        for (int j=0; j<COL; j++ ){
            grid[i][j]=(num+'0');
            num++;
        }
    }
}

//Reads scores to file
void file (int score1, int score2){
    //Output scores to file
    ofstream output;
    output.open ("scores.txt");
    output<<"Player 1: "<<score1<<" wins & "
          <<"Player 2: "<<score2<<" wins...........";

    //Compares scores between player 1 and player 2
    if(score1<score2)
        output<<"Player 1, you need to step up your game!\n";       
    else if (score2<score1)
        output<<"Player 2, you need to step up your game!\n";
    else
        output<<"Player 1 and Player 2, you are tied.\n";

    //Close File
    output.close ();  

}

//Sorts grid out after game is over
void sort(char grid[][COL], const int ROW){
    //Declare Variables
    const int TOTAL = 9;        //Number of elements in the board
    
    //Loops through enter array to bubble sort elements
    for(int i=0; i<TOTAL; i++){
        for(int j=i+1;j<TOTAL;j++){
            if(grid[0][i]>grid[0][j]){
                //Swap function
                swap(grid[0][i],grid[0][j]);
                //Displays new grid after each sort
                displayGrid(grid,ROW);
                //Stalls program in between each sort
                stall();
                cout<<endl;
            }
        }
    }
}
     
//Used to swap values in bubble sort
void swap(char& x, char& y){
    //Declare Variables
    char temp;          //Temporary Variable
    temp=x;
    x=y;
    y=temp;
}

//Stalls printing of the graph each time it sorts itself
void stall(){
    for(int i=0;i<100000000;i++);
}

//Converts user's choice to coordinates on grid
void conversion(char ch, int &r,int &c){
    switch(ch){
        case '1': r=0;c=0;break;
        case '2': r=0;c=1;break;
        case '3': r=0;c=2;break;
        case '4': r=1;c=0;break;
        case '5': r=1;c=1;break;
        case '6': r=1;c=2;break;
        case '7': r=2;c=0;break;
        case '8': r=2;c=1;break;
        case '9': r=2;c=2;break;
        default: r=3;c=3;
    }
}    

