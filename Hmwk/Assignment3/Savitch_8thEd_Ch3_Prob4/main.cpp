/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Purpose: Horoscope 
 * Created on July 7, 2014, 4:17 PM
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
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Taurus and Virgo";
        }else if((day==20)||(day==21)){
            cout<<"Your sign is Aquarius, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Capricorn.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Gemini and Libra";
        }else if(day>20){
           cout<<"Your sign is Aquarius.";
           cout<<endl;
           cout<<"Element: Air\n";
           cout<<"Most compatible with: Gemini and Libra";
        }else if(day<19){
           cout<<"Your sign is Capricorn."; 
           cout<<endl;
           cout<<"Element: Air\n";
           cout<<"Most compatible with: Gemini and Libra";
        }
    }else if (month==2){
        if((day==17)||(day==18)){
            cout<<"Your sign is Aquarius, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Pisces.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Gemini and Libra";
        }else if((day==20)||(day==21)){
            cout<<"Your sign is Pisces, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Aquarius.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Cancer and Scorpio";
        }else if(day>19){
            cout<<"Your sign is Pisces.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Cancer and Scorpio";
        }else if(day<18){
            cout<<"Your sign is Aquarius.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Gemini and Libra";
        }
    }else if (month==3){
        if((day==19)||(day==20)){
            cout<<"Your sign is Pisces, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Aries.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Cancer and Scorpio";
        }else if((day==21)||(day==22)){
            cout<<"Your sign is Aries, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Pisces.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Leo and Sagittarius";
        }else if(day>21){
            cout<<"Your sign is Aries.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Leo and Sagittarius";
        }else if(day<20){
            cout<<"Your sign is Pisces.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Cancer and Scorpio";
        }
    }else if (month==4){
        if((day==18)||(day==19)){
            cout<<"Your sign is Aries, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Taurus.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Leo and Sagittarius";
        }else if((day==20)||(day==21)){
            cout<<"Your sign is Taurus, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Aries.";
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Virgo and Capricorn";
        }else if(day>20){
            cout<<"Your sign is Taurus.";
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Virgo and Capricorn";
        }else if(day<19){
            cout<<"Your sign is Aries.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Leo and Sagittarius";
        }
    }else if (month==5){
        if((day==19)||(day==20)){
            cout<<"Your sign is Taurus, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Gemini.";
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Virgo and Capricorn";
        }else if((day==21)||(day==22)){
            cout<<"Your sign is Gemini, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Taurus.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Libra and Aquarius";            
        }else if(day>21){
            cout<<"Your sign is Gemini.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Libra and Aquarius";
        }else if(day<20){
            cout<<"Your sign is Taurus.";
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Virgo and Capricorn";
        }
    }else if (month==6){
        if((day==20)||(day==21)){
            cout<<"Your sign is Gemini, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Cancer.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Libra and Aquarius";
        }else if((day==22)||(day==23)){
            cout<<"Your sign is Cancer, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Gemini.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Scorpio and Pisces";
        }else if(day>22){
            cout<<"Your sign is Cancer.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Scorpio and Pisces";
        }else if(day<21){
            cout<<"Your sign is Gemini.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Libra and Aquarius";
        }
    }else if (month==7){
        if((day==21)||(day==22)){
            cout<<"Your sign is Cancer, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Leo.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Scorpio and Pisces";
        }else if((day==23)||(day==24)){
            cout<<"Your sign is Leo, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Cancer.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Aries and Sagittarius";
        }else if(day>23){
            cout<<"Your sign is Leo.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Aries and Sagittarius";
        }else if(day<22){
            cout<<"Your sign is Cancer.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Scorpio and Pisces";
        }
    }else if (month==8){
        if((day==21)||(day==22)){
            cout<<"Your sign is Leo, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Virgo.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Aries and Sagittarius";
        }else if((day==23)||(day==24)){
            cout<<"Your sign is Virgo, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Leo.";
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Taurus and Capricorn";
        }else if(day>23){
            cout<<"Your sign is Virgo.";
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Taurus and Capricorn";
        }else if(day<22){
            cout<<"Your sign is Leo.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Aries and Sagittarius";
        }
    }else if (month==9){
        if((day==21)||(day==22)){
            cout<<"Your sign is Virgo, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Libra.";
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Taurus and Capricorn";
        }else if((day==23)||(day==24)){
            cout<<"Your sign is Libra, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Virgo.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Gemini and Aquarius";
        }else if(day>23){
            cout<<"Your sign is Libra.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Gemini and Aquarius";
        }else if(day<22){
            cout<<"Your sign is Virgo.";
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Taurus and Capricorn";
        }
    }else if (month==10){
        if((day==21)||(day==22)){
            cout<<"Your sign is Libra, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Scorpio.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Gemini and Aquarius";
        }else if((day==23)||(day==24)){
            cout<<"Your sign is Scorpio, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Libra.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Cancer and Pisces";
        }else if(day>23){
            cout<<"Your sign is Scorpio.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Cancer and Pisces";
        }else if(day<22){
            cout<<"Your sign is Libra.";
            cout<<endl;
            cout<<"Element: Air\n";
            cout<<"Most compatible with: Gemini and Aquarius";
        }
    }else if (month==11){
        if((day==20)||(day==21)){
            cout<<"Your sign is Scorpio, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Sagittarius.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Cancer and Pisces";
        }else if((day==22)||(day==23)){
            cout<<"Your sign is Sagittarius, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Scorpio.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Aries and Leo";
        }else if(day>22){
            cout<<"Your sign is Sagittarius.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Aries and Leo";
        }else if(day<21){
            cout<<"Your sign is Scorpio.";
            cout<<endl;
            cout<<"Element: Water\n";
            cout<<"Most compatible with: Cancer and Pisces";
        }
    }else if (month==12){
        if((day==20)||(day==21)){
            cout<<"Your sign is Sagittarius, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Capricorn.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Aries and Leo";
        }else if((day==22)||(day==23)){
            cout<<"Your sign is Capricorn, but ";
            cout<<"your birthday is on a cusp, meaning that your sign ";
            cout<<"could also be Sagittarius.";
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Taurus and Virgo";
        }else if(day>22){
            cout<<"Your sign is Capricorn.";
            cout<<endl;
            cout<<"Element: Earth\n";
            cout<<"Most compatible with: Taurus and Virgo";
        }else if(day<21){
            cout<<"Your sign is Sagittarius.";
            cout<<endl;
            cout<<"Element: Fire\n";
            cout<<"Most compatible with: Aries and Leo";
        }
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