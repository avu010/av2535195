/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Savitch Ch1 Prob6
 * Created on June 25, 2014, 2:38 PM
 */

//System Level Libraries
//Error: Extra Space between the < and iostream file name.
//Error: Deleted > in include directive.
//main.cpp:11:20: error: missing terminating > character
//main.cpp:11:20: fatal error:  iostream: No such file or directory
#include < iostream
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
//Error: Omit the int from int main()
//Error: Omit the ()
//Error: Mispelled 'main'
     man int argc, char** argv {
//Variable Declaration
    short int1, int2, sum, prod;

//Output Simple Text
//Error: Mispelled cout
    out<<"Please return after entering a number.\n";
    cout<<"Please enter first integer: ";
    
//Input Data
//Mispelled cin
    in>>int1;
            
//Output Simple Text
    cout<<"Please enter second integer: ";
    
//Input Data 
//Error: Omit >
    cin>int2;
    
//Calculations - sum and product of int1 and int2
    sum=int1+int2;
    prod=int1*int2;
    
//Output Text
    cout<<"\nThe sum of the integers is "<<sum<<endl;
    cout<<"and the product of the integers is "<<prod<<"."<<endl;
    cout<<"\nThis is the end of the program.\n";
    
//Exit Stage Right!
    return 0;
    
//Error: Missing '}'


