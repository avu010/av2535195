/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Created on July 24, 2014, 12:42 PM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes    
//I wasn't sure if this is an appropriate place to declare columns, but
//I couldn't declare the function without declaring the size of the column
const int COL=4;        
void display (char seat[][COL], int);
void input(int&, int&, char seat[][COL]);

//Execution Begins Here:
int main(int argc, char** argv) {
    const int ROWSZ=7; 
    char seat[ROWSZ][COL]={{'A','B','C','D'}, {'A','B','C','D'}, 
                         {'A','B','C','D'}, {'A','B','C','D'},
                         {'A','B','C','D'}, {'A','B','C','D'},
                         {'A','B','C','D'}};
    int row;
    int seatC;
    char choice;

    //Output Simple Message
    cout<<"Welcome to our airline! Below is an outline of our seating";
    cout<<" with 7 rows and 4 seats in each row (A,B,C,D)"<<endl<<endl;
    cout<<"To choose a seat, please first enter the row, then the column.\n";
    cout<<"Ex: If you want seat 1A, choose 1, then 0."<<endl;
    cout<<"You may choose any seat that is not taken up."<<endl;
    
    do{
        //Display Seats
        display (seat, ROWSZ);

        //Prompt User to Choose Seat
        input(row, seatC, seat);
        
        //Display new seating chart
        display (seat, ROWSZ);
        
        //Ask user if he/she wants to run program again
        cout<<"Would you like to choose another seat? ";
        cin>>choice;
        cout<<endl;
        
    }while(choice=='Y'||choice=='y');
    
    return 0;
}

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
    

