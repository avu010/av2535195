/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch1 Prob6
 * Created on June 25, 2014, 2:38 PM
 */

//System Level Libraries
//Error: Extra space between < and iostream file name
//main.cpp:10:21: fatal error:  iostream: No such file or directory
//Error: Missing >
//main.cpp:12:19: error: missing terminating > character
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
//Error: Omit int from int main()
//no error message
//Error: Omit ) from int main )
//main.cpp:25:32: error: expected ')' before '{' token
int main(int argc, char** argv) {
//Variable Declaration
    short int1, int2, sum, prod;

//Output Simple Text
//Error: Misspelled cout
//main.cpp:34:5: error: 'out' was not declared in this scope
    cout<<"Please return after entering a number.\n";
    cout<<"Please enter first integer: ";
    
//Input Data
//Error: Mispelled cin
//main.cpp:39:5: error: 'in' was not declared in this scope
    cin>>int1;
            
//Output Simple Text
    cout<<"Please enter second integer: ";
    
//Input Data
//Error: Omit >
//main.cpp:48:8: error: no match for 'operator>' 
    cin>>int2;
    
//Calculations - sum and product of int1 and int2
    sum=int1+int2;
    prod=int1*int2;
    
//Output Text
    cout<<"\nThe sum of the integers is "<<sum<<endl;
    cout<<"and the product of the integers is "<<prod<<"."<<endl;
    cout<<"\nThis is the end of the program.\n";
    
//Exit Stage Right!
    return 0;
}
