/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Assignment 6 Menu
 * Created on July 22, 2014, 1:16 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants


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
//Functions for problem 2
void inputrn (int[], int);
void add (int [], int);
void maxMin (int [], int);
//Functions for Problem 3
void displayGrid(char []);      //Displays Tic-Tac-Toe board
void takeTurn(char[], bool);    //Places appropriate mark on board 
bool gameOver(char[]);          //Determines whether or not game is over
char winner(char[]);            //Determines winner
//Functions for Problem 4
//I wasn't sure if this is an appropriate place to declare columns, but
//I couldn't declare the function without declaring the size of the column
//I also wasn't sure on how to write a function that would determine if all of 
//the seats were filled
const int COL=4;        
void display (char seat[][COL], int);
void input(int&, int&, char seat[][COL]);
//Functions for Problem 5
void input1 (float x[], int& sizeUSR);
void sd(float x[], float & stdev, int sizeUSR);


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
//Gaddis Ch 7 Prob 1
void problem1(){
    //Declare Variables
    const int SIZE=10;
    int a[SIZE];

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
    cout<<"Largest integer: "<<max<<endl<<endl;
    cout<<"Smallest integer: "<<min<<endl<<endl;
    
}

//Solution to problem 2
//Gaddis Ch7 Prob 2
void problem2(){
    //Declare Variables
    int SIZE=12;
    int rain[SIZE];
    int sum=0;
    int avg;
    int max;
    int min;
    
    //Input Data
    inputrn (rain, SIZE);
    
    //Calculate total rainfall
    add (rain,SIZE);
    
    //Find max and min
    maxMin(rain, SIZE);
}

//Functions for problem 2
void inputrn (int rain[], int SIZE){
    //Gather Data Input
    cout<<"Enter the amount of rainfall (inches) for each month!"<<endl;
    int month=1;
    int i=0;
    for(i; i<SIZE; i++){
        cout<<"Month "<<month<<": ";
        cin>>rain[i];
        month++;
    }
    
    
}

void add (int rain[], int SIZE){
    //Declare Variables
    int sum=0;
    int avg;
    
    //Calculate sum of the elements in array
    for(int i=0; i<SIZE; i++){
        sum+=rain[i];    
    }
    
    //Take final sum to find average    
    avg=sum/SIZE;
    
    //Output total and average 
    cout<<"In the past year....."<<endl;
    cout<<"The total rainfall: "<<sum<<" inches"<<endl;
    cout<<"The average rainfall: "<<avg<<" inches"<<endl;
    
}

void maxMin (int rain[], int SIZE){
    //Declare Variables
    int max;
    int min;
    
    //Set max to the first variable in array
    max=rain[0];
    
    //Loops through all variables in array, compares each integer to max
    for(int i=1; i<SIZE; i++){
        if (rain[i]>max)
            max=rain[i];
    }
    
    //Set min to first variables
    min=rain[0];
    
    //Loops to find minimum integer in array
    for(int j=1; j<SIZE; j++){
        if (rain[j]<min)
            min=rain[j];
    }
    
    
    //Output Results
    cout<<"Largest amount of rainfall: "<<max<<" inches"<<endl;
    cout<<"Lowest amount of rainfall: "<<min<<" inches"<<endl<<endl;
    
    }

//Solution to problem 3
//Savitch Ch7 Prob10
void problem3(){
    //Declare and Initialize Variables
    const int SIZE=10;
    //Array used for board
    char grid[SIZE]={'x','1','2','3','4','5','6','7','8','9'};  
    bool p1;                        //Used to determine who's turn it is
    char again;                     //Whether players want to play again
    bool over;                      //Determines if game is over   

    
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
        winner(grid);

        
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
        cout<<endl<<endl;
    }while((again=='Y')||(again=='y'));
    
}

//Functions for Problem 3
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
char winner(char grid[]){
    if((grid[1]=='X')&&(grid[2]=='X')&&(grid[3]=='X')){
        cout<<"Player 1 wins!"<<endl;
    }else if((grid[1]=='O')&&(grid[2]=='O')&&(grid[3]=='O')){
        cout<<"Player 2 wins!"<<endl;
    }else if((grid[4]=='X')&&(grid[5]=='X')&&(grid[6]=='X')){
        cout<<"Player 1 wins!"<<endl;  
    }else if((grid[4]=='O')&&(grid[5]=='O')&&(grid[6]=='O')){
        cout<<"Player 2 wins!"<<endl;
    }else if((grid[7]=='X')&&(grid[8]=='X')&&(grid[9]=='X')){
        cout<<"Player 1 wins!"<<endl;
    }else if((grid[7]=='O')&&(grid[8]=='O')&&(grid[9]=='O')){
        cout<<"Player 2 wins!"<<endl;
    }else if((grid[1]=='X')&&(grid[4]=='X')&&(grid[7]=='X')){
        cout<<"Player 1 wins!"<<endl;
    }else if((grid[1]=='O')&&(grid[4]=='O')&&(grid[7]=='O')){
        cout<<"Player 2 wins!"<<endl;
    }else if((grid[2]=='X')&&(grid[5]=='X')&&(grid[8]=='X')){
        cout<<"Player 1 wins!"<<endl;
    }else if((grid[2]=='O')&&(grid[5]=='O')&&(grid[8]=='O')){
        cout<<"Player 2 wins!"<<endl;
    }else if((grid[3]=='X')&&(grid[6]=='X')&&(grid[9]=='X')){
        cout<<"Player 1 wins!"<<endl;
    }else if((grid[3]=='O')&&(grid[6]=='O')&&(grid[9]=='O')){
        cout<<"Player 2 wins!"<<endl;
    }else if((grid[1]=='X')&&(grid[5]=='X')&&(grid[9]=='X')){
        cout<<"Player 1 wins!"<<endl;
    }else if((grid[1]=='O')&&(grid[5]=='O')&&(grid[9]=='O')){
        cout<<"Player 2 wins!"<<endl;
    }else if((grid[3]=='X')&&(grid[5]=='X')&&(grid[7]=='X')){
        cout<<"Player 1 wins!"<<endl;
    }else if((grid[3]=='O')&&(grid[5]=='O')&&(grid[7]=='O')){
        cout<<"Player 2 wins!"<<endl;
    }else{
        cout<<"No one wins."<<endl;
    }
}

//Solution to problem 4
//Savitch Ch 7 Prob 11
void problem4(){
    const int ROWSZ=7; 
    char seat[ROWSZ][COL]={{'A','B','C','D'}, {'A','B','C','D'}, 
                         {'A','B','C','D'}, {'A','B','C','D'},
                         {'A','B','C','D'}, {'A','B','C','D'},
                         {'A','B','C','D'}};
    int row;
    int seatC;

    //Output Simple Message
    cout<<"Welcome to our airline! Below is an outline of our seating";
    cout<<" with 7 rows and 4 seats in each row (A,B,C,D)"<<endl<<endl;
    cout<<"To choose a seat, please first enter the row, then the column.\n";
    cout<<"Ex: If you want seat 1A, choose 1, then 0."<<endl;
    cout<<"You may choose any seat that is not taken up."<<endl;
    

        //Display Seats
        display (seat, ROWSZ);

        //Prompt User to Choose Seat
        input(row, seatC, seat);

        //Display new seating chart
        display (seat, ROWSZ);
}

//Functions for Problem 4
void input(int& row, int&seatC, char seat[][COL]){
    //Data Input
    cout<<"Row: ";
    cin>>row;
    cout<<"Seat: ";
    cin>>seatC;
   
    //Determine if seat is taken
    if(seat[row-1][seatC]=='X'){
        cout<<"Please choose an available seat!"<<endl;
    }else
        seat[row-1][seatC]='X';
    cout<<endl;
}

void display (char seat[][COL], int ROW){
    //Declare Variables
    int Rnum=1;         //Used to number rows
    
    //Output numbers to label columns
    cout<<"  0 1 2 3"<<endl;
    
    //Output Array
    for(int i=0; i<7; i++){
        cout<<Rnum<<" ";
        for(int j=0; j<4; j++){
            cout<<seat[i][j]<<" ";
        }
        cout << endl;
        Rnum++;
    }
    cout<<endl;
}


//Solution to problem 5
//Savitch Ch5 Prob4
void problem5(){
    //Declare Variables
    const int sizeMAX=300;      //Maximum size of array
    float x[sizeMAX];           //Array to hold numbers
    int sizeUSR;                //Size of array user chooses
    float numrtr;               //Numerator of standard deviation
    float denom;                //Denominator of standard deviation
    float stdev;                //Standard deviation
    
    //Gather Data Input
    input1 (x, sizeUSR);
    
    //Calculate standard deviation
    sd(x, stdev, sizeUSR);
    
    //Output Results
    cout<<"Standard Deviation: ";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<stdev<<endl<<endl;
       
}

//Functions for Problem 5
void input1 (float x[], int& sizeUSR){
    //Sets size of array
    cout<<"Enter how many numbers you want to input: ";
    cin>>sizeUSR;
 
    //Reads in numbers
    cout<<"Enter the numbers with a space in between each: ";
    //Calculate sum of numbers
    for(int i=0;i<sizeUSR;i++){
        cin>>x[i];   
    }
}

void sd(float x[], float & stdev, int sizeUSR){
    //Declare Variables
    float avg;                  //Average of all the numbers
    float sum=0;                //Sum of all numbers
    for(int i=0;i<sizeUSR;i++){
        sum+=x[i];
    }
    
    //Calculate average
    avg=sum/sizeUSR;
    
    //Reset value of sum
    sum=0;
    
    //Calculate numerator of standard deviation with for loop
    for(int n=0;n<sizeUSR;n++){
        x[n]=pow(x[n]-avg,2);
        sum+=x[n];
    }
    
    //Calculate Standard deviation
    stdev=sqrt(sum/sizeUSR);
}



//Solution to problem 6
//Gaddis Ch7 Prob 8
void problem6(){
    //Declare variables
    const int SIZE=7;
    int ID [SIZE]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hrs[SIZE];
    float rate[SIZE];
    float pay [SIZE];
    
    //Gather Data Input
    for(int i=0;i<7;i++){
        do{
            cout<<"Enter your 7-digit ID: ";
            cin>>ID[i];
            cout<<"Hours worked: ";
            cin>>hrs[i];
            cout<<"Pay rate: ";
            cin>>rate[i];
            if(rate[i]<6){
                cout<<"Please enter a pay rate that is larger than 6 ";
                cout<<"and hours that are above 0."<<endl;
            }
        }while(rate[i]<6 || hrs[i]<0);
        
        //Calculate pay
        pay[i]=hrs[i]*rate[i];
    }
    
    //Output Results
    for(int i=0;i<7;i++){
        cout<<"ID: "<<ID[i]<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Wage: $"<<pay[i]<<endl;
    }
}


//Solution to problem 7
//Gaddis Ch7 Prob 13
void problem7(){
    //Declare variables
    bool win;
    const int SIZE=5;    
    int lottery[SIZE];
    int user[SIZE];
    
    //Set Random Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Gather Data Input
    cout<<"Welcome to the lottery, and good luck!"<<endl;
    cout<<"Please input a 5-digit number with a space in between each number: ";
    for(int i=0;i<5;i++){
        //Generate random numbers from 0 to 9
        lottery[i]=rand()%10;
        cin>>user[i];
        //Determine winner or loser
        if(user[i]!=lottery[i])
            win=false;
        else
            win=true;
         
    }
    
    if(win==false)
        cout<<"Sorry, you didn't win. Better luck next time :("<<endl<<endl;
    
    else
        cout<<"YOU WON THE LOTTERY! Have fun being rich!!!!"<<endl<<endl;
}

//Solution to problem 8
void problem8(){
    //Declare variables
    const int SIZE=20;
    char key[SIZE]={'B','D','A','A','C','A','B','A','C','D','B','C','D','A','D','C','C','B','D','A'};
    char test[SIZE];       
    int score=0;          
    bool invalid;
    
    cout<<"Check your score here!"<<endl;
    do{
        invalid=false;
        cout<<"Enter your answers: ";
        
        //Input and check validity of score
        for(int i=0;i<SIZE;i++){
            cin>>test[i];
            if(test[i]<'A' || test[i]>'D')
                invalid=true;
        }
        if(invalid==true)
            cout<<"Please only enter A, B, C, or D.";
    }while(invalid==true);
    
    //Count score
    for(int i=0;i<20;i++){
        if(test[i]==key[i])
            score++;
    }   
   
    //Determine if you pass or fail    
    if(score>15){
        cout<<"You got a score of "<<score<<" out of 20, which means you passed!";
        cout<<" Congratulations"<<endl<<endl;
    }
    else{
        cout<<"You got a score of "<<score<<" out of 20, which means you failed.";
        cout<<" Go study."<<endl<<endl;
    }
}


//Solution to problem 9
//Gaddis Ch 7 Prob 10
void problem9(){
    //Declare Variables
    const int SIZE=20;
    char key[SIZE];
    char test[SIZE];       
    int score=0; 
    float pass;
    float perc;
    
    //Open and input data from file
    ifstream correct;
    correct.open("answers.txt");
   
    //Read Data into array
    for (int i=0; i<SIZE; i++){
        correct>>key[i];
    }
    
    //Output Message
    cout<<"Compare a student's test with the answer key."<<endl;
    cout<<"Enter a space in between each answer, then when you are done ";
    cout<<"hit the return key."<<endl;
    cout<<"Enter student's answers: ";  
    
    for(int i=0;i<20;i++){
        cin>>test[i];
    }   
    
    
    //Count score
    for(int i=0;i<20;i++){
        if(test[i]==key[i])
            score++;
    }   
    
    //Calculate passing score & percentage
    perc=static_cast<float>(score)/20;
    pass=0.70;
   
    //Determine if student pass or fail    
    if(perc>=pass){
        cout<<"Number of questions missed: "<<20-score<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Grade percent: "<<perc<<"%"<<endl;
        cout<<"The student has passed the exam."<<endl;
        cout<<"Student's Answer             Correct Answer"<<endl;
        for(int i=0;i<20;i++){
            if(test[i]!=key[i]){
                cout<<"       "<<test[i]<<"                             "<<key[i]<<endl<<endl;
            }
        } 
        
    }else{
        cout<<"Number of questions missed: "<<20-score<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Grade percent: "<<perc<<"%"<<endl;
        cout<<"The student has failed the exam."<<endl;
        cout<<"Student's Answer             Correct Answer"<<endl;
        for(int i=0;i<20;i++){
            if(test[i]!=key[i]){
                cout<<"       "<<test[i]<<"                             "<<key[i]<<endl<<endl;
            }
        }
    }

    correct.close();
}



//Solution to problem 10
void problem10(){
   
}


//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program."<<endl;
}