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
void display (char []);
//Execution Begins Here:
int main(int argc, char** argv) {
    const int ROW=7;
    const int COL=4;
    char seat[ROW][COL]={{'A','B','C','D'}, {'A','B','C','D'}, 
                         {'A','B','C','D'}, {'A','B','C','D'},
                         {'A','B','C','D'}, {'A','B','C','D'},
                         {'A','B','C','D'}, {'A','B','C','D'}};

    //Display Seats
    display (seat);
    
    
    return 0;
}

void display (char seat[]){
    for(int i=0; i<7; i++){
        cout<<seat[i]<<endl;
        
    }
}


