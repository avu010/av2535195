/* 
 * File:   main.cpp
 * Author: Anh Vu
 * Psuedocode for project 2
 * Created on July 29, 2014, 3:36 PM
 */

//System Level Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here:
    //Declare and Initialize Variables

    //Display Menu
    
    //Welcome Message
    
    //Initialize board
    //open file
    //Input data from file to board while i is less than 3
    //Close file

    //Do this while user decides to play again
        //While game is not over
           //Display Grid 
           //User takes turn    
           //Switches between players 1 & 2


        //If game is over, output message 
            //Display final board that ends game      
            //Displays winner
            //Keep track of scores
                //Add scores for player 1 if player 1 wins
                //Add scores for player 2 if player 2 wins
                //Don't add any scores for either players if game is a draw        
                //Output scores to file        
            //Ask if player wants to play again
            //Sorts grid and prints out dance before board resets       
            //Reset board so user can play again
    
    //End of main 
                
//Function to display grid
    //display board and variables 

//Displays welcome message as well as randomly chooses who plays first
    //Welcome player and output which player is what mark   
    //Set random seed    
    //Determine who will go first - generate random number from 1 to 2
        //Set this value to a bool
 
    //If bool is true
        //Player 1 gets to play first
        //It not true, player 2 gets to play first

//Places mark on board
    //While number is from 1-9
    //Get number from user
    //Convert this number to coordinates on board

    //Player 1
        //Output an X
    //Player 2
        //Output an O

    //Switch between player 1 and 2

//Determines whether game is over
    //As long as integer i is less than 3, keep repeating
        //If there are the same marks adjacent to each other horizontally,
        //diagonally, or vertically, then the game is over
        //Game will also end if all spots are taken up


//Determines winner
    //If there are X's vertically, horizontally, or diagonally adjacent, then
    //player 1 wins
    //If there are X's vertically, horizontally, or diagonally adjacent, then
    //player 2 wins
    //If spots are all taken up and there are no marks next to one another,
    //then no one wins

//Menu 
    //Show user options
    //If they choose 1, play game
    //If they choose 2, display rules then play game

//Resets board
    //Set each coordinate equal to a number in increasing order from 1 to 9


//Reads scores to file
    //Open file
    //Output scores to file
    //Compares scores between player 1 and player 2
        //If player 1's scores is less than player 2's scores, then 
        //tell player 1 to step up their game
        //If player 2's scores is less than player 1's scores, then 
        //tell player 2 to step up their game
        //If scores are equal, tell them they are tied
    //Close file

//Sorts grid out after game is over
    //Go through each element of array, compare each value to each other
    //If value 1 is greater than value 2, then swap values 
    //Display grid after sorting
    //Stall printing of grid
     
//Used to swap values in bubble sort
    //switch one value with another using a temporary variable

//Stalls printing of the graph each time it sorts itself
    //count numbers from 0 to 100000000 times



//Converts user's choice to coordinates on grid
    //if the user chooses 1
        //set coordinates
    //if the user chooses 2
        //set coordinates
    //if the user chooses 3
        //set coordinates
    //if the user chooses 4
        //set coordinates
    //if the user chooses 5
        //set coordinates
    //if the user chooses 6
        //set coordinates
    //if the user chooses 7
        //set coordinates
    //if the user chooses 8
        //set coordinates
    //if the user chooses 9
        //set coordinates
