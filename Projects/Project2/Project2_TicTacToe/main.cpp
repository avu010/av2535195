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
//Column size of 2D array so I am able to pass as a function
const int COL=4;

//Function Prototypes
void welcome();
void displayGrid(char [][COL], const int);    //Displays Tic-Tac-Toe board
void takeTurn(char [][COL], const int , bool);//Places appropriate mark on board 
bool gameOver(char[][COL], const int);  //Determines whether or not game is over
short winner(char[][COL],const int);          //Determines winner
void menu();                                  //Displays menu
void reset (char [][COL], const int);         //Resets board 
void file (int, const int);                   //Outputs scores to file
void sort(char[][COL], const int);            //Sorts board
void swap(char&, char&);                      //Swap values used for sort
void stall();                 //Stalls program so it can print out sorts slower                                            
void conversion(char,int&,int&);        //Converts user's choice to coordinates


//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    const int ROW=4;
    //Array used for board
    //I included an extra row and column so I could locate the variables
    //easier
    char grid[ROW][COL];  
    bool p1;                        //Used to determine who's turn it is
    short win;                      //Used to determining winner
    unsigned short score1=0;        //Calculate score for player 1
    unsigned short score2=0;        //Calculate score for player 2
    char again;                     //Whether players want to play again
    bool over;                      //Determines if game is over  
    bool first;                     //Determines who's turn it is
    
    //Display Menu
    menu();
    
    //Welcome Message
    welcome ();
    
   //Initialize board
    //Open and input data from file
    ifstream board;
    board.open("board.txt");
   
    //Read Data into array
    for (int i=1; i<ROW; i++){
        for (int j=1; j<COL; j++)
            board>>grid[i][j];
    }
    //Close file
    board.close();
    
    //Reiterates game until players decide to stop
    do{
        //Game continues until game is over
        do{
            displayGrid(grid, ROW);          //Display Grid
            takeTurn(grid,ROW, first);       //User takes turn
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
    cout<<"       "<<grid[1][1]<<"     |    "<<grid[1][2]<<"     |    "<<grid[1][3]<<endl;
    cout<<"   __________|__________|__________"<<endl;
    cout<<"             |          |          "<<endl;
    cout<<"       "<<grid[2][1]<<"     |    "<<grid[2][2]<<"     |    "<<grid[2][3]<<endl;
    cout<<"   __________|__________|__________"<<endl;
    cout<<"             |          |          "<<endl;
    cout<<"       "<<grid[3][1]<<"     |    "<<grid[3][2]<<"     |    "<<grid[3][3]<<endl;
    cout<<"             |          |          "<<endl;
}

//Displays welcome message as well as randomly chooses who plays first
void welcome(){
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
}

//Function places mark on board
void takeTurn(char grid[][COL], const int ROW, bool p1){
    //Declare Variables
    char ch;
    int row;
    int column;
    
    //Gather Data Input
    //Takes user's choices as long as spaces are available
    do{
        if(p1){
            cout<<"PLAYER 1'S TURN"<<endl;
        }else{
            cout<<"PLAYER 2'S TURN"<<endl;
        }
        cout<<"Enter number: ";
        cin>>ch;
        conversion(ch,row,column);
    }while(row==0||column==0);
        
    //If player one makes mark, place an X. If player 2, place O.
        if(p1){
        grid[row][column] = 'X';
        }
        else{
        grid[row][column] = 'O';
        }
}

//Determines whether game is over
bool gameOver(char grid[][COL], const int ROW){
    //Declare Variables
    bool over=false;        
    
    //Determine if game is over
    //Game is over if one of the players wins, or if all the spaces are taken up
    //Checks for rows
    for(int i=1; i<ROW; i++){
        if((grid[i][1]==grid[i][2])&&(grid[i][1]==grid[i][3]))
            over=true;
    }
    
    //Checks for columns
    for (int j=1; j<COL; j++){
        if ((grid[1][j]==grid[2][j])&&(grid[1][j]==grid[3][j]))
            over=true;
    }
    
    //Checks for diagonals
    if ((grid[1][1]==grid[2][2])&&(grid[1][1]==grid[3][3]))
            over=true;
    else if ((grid[1][3]==grid[2][2])&&(grid[1][3]==grid[3][1]))
            over=true;
    
    //Checks for a draw
    else if (((grid[1][1]=='X')||(grid[1][1]=='O'))&&
            ((grid[1][2]=='X')||(grid[1][2]=='O'))&&
            ((grid[1][3]=='X')||(grid[1][3]=='O'))&&
            ((grid[2][1]=='X')||(grid[2][1]=='O'))&&
            ((grid[2][2]=='X')||(grid[2][2]=='O'))&&
            ((grid[2][3]=='X')||(grid[2][3]=='O'))&&
            ((grid[3][1]=='X')||(grid[3][1]=='O'))&&
            ((grid[3][2]=='X')||(grid[3][2]=='O'))&&
            ((grid[3][3]=='X')||(grid[3][3]=='O')))
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
    for(int i=1; i<ROW; i++){
        if ((grid[i][1]=='X')&&(grid[i][2]=='X')&&(grid[i][3]=='X')){
            cout<<"Player 1 wins!"<<endl;
            win=1;
        }else if ((grid[i][1]=='O')&&(grid[i][2]=='O')&&(grid[i][3]=='O')){
            cout<<"Player 2 wins!"<<endl;
            win=0;
        }else if ((grid[1][i]=='X')&&(grid[2][i]=='X')&&(grid[3][i]=='X')){
            cout<<"Player 1 wins!"<<endl;
            win=1;
        }else if ((grid[1][i]=='O')&&(grid[2][i]=='O')&&(grid[3][i]=='O')){
            cout<<"Player 2 wins!"<<endl;
            win=0;
        }
    }
    
    //Used to find wins in diagonals. Will only execute if no one wins 
    //with columns and rows
    if(!(win==1||win==0)){
        if ((grid[1][1]=='X')&&(grid[2][2]=='X')&&(grid[3][3]=='X')){
                cout<<"Player 1 wins!"<<endl;
                win=1;
        }else if ((grid[1][1]=='O')&&(grid[2][2]=='O')&&(grid[3][3]=='O')){
                cout<<"Player 2 wins!"<<endl;
                win=0;
        }else if ((grid[1][3]=='X')&&(grid[2][2]=='X')&&(grid[3][1]=='X')){
                cout<<"Player 1 wins!"<<endl;
                win=1;
        }else if ((grid[1][3]=='O')&&(grid[2][2]=='O')&&(grid[3][1]=='O')){
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
            cout<<"2. When making your move, choose the location ";
            cout<<" to place your mark by choosing the column and row."<<endl;
            cout<<"3. You may only enter 1, 2, or 3 for both columns and ";
            cout<<"rows. If you attempt to choose an invalid column or row, \n";
            cout<<"   you will be asked to make another move."<<endl;
            cout<<"4. Try to get all three of your marks in a row, ";
            cout<<" column, or diagonal row before the other player does.\n";
            cout<<"5. After each game, decide if you want to play again.\n";
            cout<<"6. If you want to see a tally of your scores, see the ";
            cout<<"text file entitled scores."<<endl;
            cout<<"7. Have fun!"<<endl<<endl;
            break;  
    }   
}

//Resets board
void reset (char grid[][COL], const int ROW){
    int num=1;
    for (int i=1; i<ROW; i++){
        for (int j=1; j<COL; j++ ){
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
    const int TOTAL = 16;
    for(int i=5; i<TOTAL-1; i++){
        if(i==8||i==12){
            i++;
        }
        else{
            for(int j=i+1;j<TOTAL;j++){
                if(j==8||j==12){
                    j++;
                }
                else{
                    if(grid[0][i]>grid[0][j]){
                        swap(grid[0][i],grid[0][j]);
                        displayGrid(grid,ROW);
                        stall();
                        cout<<endl;
                    }
                    
                }
            }
        }
    }
    

}   

//Used to swap values in bubble sort
void swap(char& x, char& y){
    char temp;
    temp=x;
    x=y;
    y=temp;
}

//Stalls printing of the graph sorting itself out
void stall(){
    for(int i=0;i<140000000;i++);
}

//Converts user's choice to coordinates on grid
void conversion(char ch, int &r,int &c){
    switch(ch){
        case '1': r=1;c=1;break;
        case '2': r=1;c=2;break;
        case '3': r=1;c=3;break;
        case '4': r=2;c=1;break;
        case '5': r=2;c=2;break;
        case '6': r=2;c=3;break;
        case '7': r=3;c=1;break;
        case '8': r=3;c=2;break;
        case '9': r=3;c=3;break;
        default:
            r=0;c=0;
    }
}    

