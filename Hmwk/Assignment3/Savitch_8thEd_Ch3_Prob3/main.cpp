/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Horoscope 
 * Created on July 7, 2014, 11:56 AM
 */

//System Level Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
    //Input 
    unsigned short month;       //Month of user's birthday
    unsigned short day;         //Day of user's birthday
    char choice;                //Whether user wants to run program again (Y/N)
    
//Run loop using do while so user can keep running program until he or she is done.
    do{                 
//Gather Data Input
    cout<<"Enter the month of your birthday (1-12): ";
    cin>>month;
    cout<<"Enter the day of your birthday (1-31): ";
    cin>>day;
//If else statements used to determine horoscope
    if(month==1){
        if((day==18)||(day==19)){
            cout<<"Your sign is Capricorn, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Aquarius."; 
        }else if((day==20)||(day==21)){
            cout<<"Your sign is Aquarius, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Capricorn.";
        }else if(day>20)
           cout<<"Your sign is Aquarius.";
        else if(day<19)
           cout<<"Your sign is Capricorn.";      
    }else if (month==2){
        if((day==17)||(day==18)){
            cout<<"Your sign is Aquarius, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Pisces.";   
        }else if((day==20)||(day==21)){
            cout<<"Your sign is Pisces, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Aquarius.";
        }else if(day>19)
           cout<<"Your sign is Pisces.";
        else if(day<18)
           cout<<"Your sign is Aquarius.";
    }else if (month==3){
        if((day==19)||(day==20)){
            cout<<"Your sign is Pisces, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Aries.";   
        }else if((day==21)||(day==22)){
            cout<<"Your sign is Aries, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Pisces.";
        }else if(day>21)
           cout<<"Your sign is Aries.";
        else if(day<20)
           cout<<"Your sign is Pisces.";
    }else if (month==4){
        if((day==18)||(day==19)){
            cout<<"Your sign is Aries, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Taurus.";   
        }else if((day==20)||(day==21)){
            cout<<"Your sign is Taurus, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Aries.";
        }else if(day>20)
           cout<<"Your sign is Taurus.";
        else if(day<19)
           cout<<"Your sign is Aries.";
    }else if (month==5){
        if((day==19)||(day==20)){
            cout<<"Your sign is Taurus, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Gemini.";   
        }else if((day==21)||(day==22)){
            cout<<"Your sign is Gemini, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Taurus.";
        }else if(day>21)
           cout<<"Your sign is Gemini.";
        else if(day<20)
           cout<<"Your sign is Taurus.";
    }else if (month==6){
        if((day==20)||(day==21)){
            cout<<"Your sign is Gemini, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Cancer.";   
        }else if((day==22)||(day==23)){
            cout<<"Your sign is Cancer, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Gemini.";
        }else if(day>22)
           cout<<"Your sign is Cancer.";
        else if(day<21)
           cout<<"Your sign is Gemini.";
    }else if (month==7){
        if((day==21)||(day==22)){
            cout<<"Your sign is Cancer, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Leo.";   
        }else if((day==23)||(day==24)){
            cout<<"Your sign is Leo, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Cancer.";
        }else if(day>23)
           cout<<"Your sign is Leo.";
        else if(day<22)
           cout<<"Your sign is Cancer.";
    }else if (month==8){
        if((day==21)||(day==22)){
            cout<<"Your sign is Leo, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Virgo.";   
        }else if((day==23)||(day==24)){
            cout<<"Your sign is Virgo, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Leo.";
        }else if(day>23)
           cout<<"Your sign is Virgo.";
        else if(day<22)
           cout<<"Your sign is Leo.";
    }else if (month==9){
        if((day==21)||(day==22)){
            cout<<"Your sign is Virgo, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Libra.";   
        }else if((day==23)||(day==24)){
            cout<<"Your sign is Libra, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Virgo.";
        }else if(day>23)
           cout<<"Your sign is Libra.";
        else if(day<22)
           cout<<"Your sign is Virgo.";
    }else if (month==10){
        if((day==21)||(day==22)){
            cout<<"Your sign is Libra, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Scorpio.";   
        }else if((day==23)||(day==24)){
            cout<<"Your sign is Scorpio, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Libra.";
        }else if(day>23)
           cout<<"Your sign is Scorpio.";
        else if(day<22)
           cout<<"Your sign is Libra.";
    }else if (month==11){
        if((day==20)||(day==21)){
            cout<<"Your sign is Scorpio, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Sagittarius.";   
        }else if((day==22)||(day==23)){
            cout<<"Your sign is Sagittarius, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Scorpio.";
        }else if(day>22)
           cout<<"Your sign is Sagittarius.";
        else if(day<21)
           cout<<"Your sign is Scorpio.";
    }else if (month==12){
        if((day==20)||(day==21)){
            cout<<"Your sign is Sagittarius, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Capricorn.";   
        }else if((day==22)||(day==23)){
            cout<<"Your sign is Capricorn, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Sagittarius.";
        }else if(day>22)
           cout<<"Your sign is Capricorn.";
        else if(day<21)
           cout<<"Your sign is Sagittarius.";
    }  
//Ask user if he or she wants to run program again:
       cout<<endl;
       cout<<"\nRun again? (Y/N): ";
       cin>>choice;
       cout<<endl;
    }
//If user chooses 'Y' or 'y', then program will run again. 
//If not, program will end.
    while((choice=='Y')||(choice=='y'));
    
//Exit Stage Right!
    return 0;
}

