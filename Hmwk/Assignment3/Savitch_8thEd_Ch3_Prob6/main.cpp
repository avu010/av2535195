/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Created on July 7, 2014, 3:02 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input
    float a;    //Variable a in quadratic formula
    float b;    //Variable b in quadratic formula
    float c;    //Variable c in quadratic formula
    float d;    //Discriminant 
    //Calculation
    float imag; //Used to solve for imaginary roots
    //Output        
    float r1;   //First root
    float r2;   //Second root
    
//Gather Input Data
    cout<<"Enter your values for a, b, and c of the quadratic equation ";
    cout<<"a(x*x)+bx+c=0\n";
    cout<<"Enter value for a: ";
    cin>>a;
    cout<<"Enter value for b: ";
    cin>>b;
    cout<<"Enter value for c: ";
    cin>>c;
    
//Calculate roots using quadratic formula
    //Calculation for Discriminant
        d=b*b-4*a*c; 
    if (d==0){
        r1=-b/2/a;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"The value of the discriminant is "<<d<<" and therefore equation has";
        cout<<" one real root: "<<r1<<endl;
    }else if (d>0){           
        r1=(-b+(sqrtf(d)))/2/a;
        r2=(-b-(sqrtf(d)))/2/a;
        cout<<"The value of the discriminant is positive, and therefore the equation has";
        cout<<" two real roots!\n";
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Root 1: "<<r1<<" and Root 2: "<<r2<<endl;
    }else{
        //Imaginary part of roots 1 and 2
        imag=sqrtf(-d)/(2*a);
        //Real part of roots 1 and 2 
        r1=-b/(2*a);
        r2=-b/(2*a);
        cout<<"The value of the discriminant is negative, and therefore the equation ";
        cout<<"has two imaginary roots!\n";
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Root 1: "<<r1<<"+"<<imag<<"i and Root 2: "<<r2;
        cout<<"-"<<imag<<"i"<<endl;
    }

//Exit Stage Right
    return 0;
}