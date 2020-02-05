#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void delay(int seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds)
        ;
}

//Prints Main Menu
int CallMenu(int option){
    system("cls");
    printf("\n\tWelcome to the Rooster Game!\n");
    printf("\n*************MENU***********************");
    printf("\n\t1- Start Game");
    printf("\n\t2- How to play");
    printf("\n\t3- Exit");
    printf("\n***************************************> ");
    scanf("%d", &option);
    return option;
}
//Prints Game Rules
int CallRuleSet(){
    int wait = 0;
    system("cls");
    printf("\n************RULESET*********************");
    printf("\nThis game is meant to played by 2 players.");
    printf("\nEach player places one symbol at the time to build a line (horizontal, vertical or diagonal)");
    printf("\nwith their symbol in a 3x3 Area");
    printf("\nExample:");
    printf("\n\tO | X | X ");
    printf("\n\t  | 0 |   ");
    printf("\n\tX |   | O ");
    printf("\nIn this example the player with the symbol 'O' won with a diagonal line.\n");
    printf("\n************HOW TO PLAY*********************");
    printf("\nDuring the game you will be asked to select the position to place your symbol.");
    printf("\nTo do so you will have to type the line and column.");
    printf("\nThe numbers go from 1 to 3.");
    printf("\nAre you ready to play the rooster game?");
    printf("\n---------------------------------------");
    printf("\n\tPress any key to return to menu-\n");
    printf("\n---------------------------------------");
    scanf("%d", &wait);
    return 0;
}
//Prints Game Board
int ShowGrid(char grid[3][3], int round){
    int line = 0;
    int column =0;

    //Init grid
    if (round == 0){
    for (line=0; line < 3; line++){
        for (column=0; column < 3; column++){
            grid[line][column] = ' ';
            }
        }
    }
    //Print Grid
    system("cls");
    printf("\n\tPlayer 1 (O)  -  Player 2 (X)\n\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n", grid[0][0], grid[0][1], grid[0][2]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n", grid[1][0], grid[1][1], grid[1][2]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n", grid[2][0], grid[2][1], grid[2][2]);
    printf("\t     |     |     \n\n");
    return 3;
}
//Selects Symbol based on playerIndex
char SelectSymbol(int playerIndex){
    if (playerIndex == 0){
        return 'O';
    }
    else{
        return 'X';
    }
}
//Place Symbol on GameBoard
bool PlaceSymbol(char grid[3][3],char symbol, int line, int column){
    //Detects if grid position is empty and places the symbol then returns true
    if (grid[line][column] == ' '){
        grid[line][column] = symbol;
        return true;
    }
    //if grid position is not empty means failure
    else{
        return false;
    }
}
//Verifies Win Condition
bool CallCheckWinCondition(char grid[3][3], char symbol){
    int line = 0;
    int column = 0;
    //Check Diagonal Left Positions
    if (symbol == grid[line][column] && grid[line][column] == grid[line+1][column+1] && grid[line+1][column+1] == grid[line+2][column+2]){
        return true;
    }
    //Check Diagonal Right Positions
    line = 2;
    column = 0;
    if  (symbol == grid[line][column] && grid[line][column] == grid[line-1][column+1] && grid[line-1][column+1] == grid[line-2][column+2]){
        return true;
    }

    int nSymbol = 0;
    //Check Lines 1 by 1
    for (line=0; line < 3; line++){
        nSymbol = 1;
        for (column = 0; column < 3; column++){
            if (symbol == grid[line][column] && grid[line][column]== grid[line][column+1]){
                nSymbol++;
            }
            else{
                nSymbol = 0;
            }
            if (nSymbol == 3){
                return true;
            }
        }
    }

    //Check Columns 1 by 1
    for (column = 0; column < 3; column++){
        nSymbol = 1;
        for (line= 0; line < 3; line++){
            if (symbol == grid[line][column] && grid[line][column]== grid[line+1][column]){
                nSymbol++;
            }
            else{
                nSymbol = 0;
            }

            if (nSymbol == 3){
                return true;
            }
        }
    }
    //Returns failure if none of the checks are true
    return false;
}
//Receives and input int and returns True if the program knows the input
bool VerifyInput(int input){
    //Known valid input options
    int validOptions[4] = {1,2,3,4};
    int i;
    for (i = 0; i < 4; i++){
        if (validOptions[i] == input){
            return true;
        }
    }
    //Returns failure and invalid option message
    //if input option isn't known by the program
    printf("\nInvalid option, please choose again.\n");
    return false;
}

void ShowHighScore(){
    char text[100];
    char text2[100];

        FILE * fpointer;

        fpointer = fopen("results.txt", "r");

        fscanf(fpointer," %s ", &text);
        fscanf(fpointer,"\n %s ", &text2);

        fclose(fpointer);

        printf("\nP1 Score = %s " , text);
        printf("\nP2 Score = %s " , text2);
}

int main(){

    //File
     FILE * fpointer;

     if ((fpointer = fopen("results.txt", "r")) == NULL) {
        fpointer = fopen("results.txt" , "w");
        fclose(fpointer);
     }

    char fileText[100];
    int scoreP1 = 0;
    int scoreP2 = 0;

    //Game Board Parameters
    int line;
    int column;
    char grid[3][3];
    //Menu Input
    int selector;
    //Game Parameters
    int playCount = 0;
    int playerIndex = 0;
    char symbol;
    //Time Parameter
    int t;

    //Menu Loop
    do {
        //Calls Menu and waits for input and
        //Verifies if input is known
        do {
            selector = CallMenu(selector);
        }while(!VerifyInput(selector));

    //Menu Switch ( 1 - Start Game / 2 - Show Rules / 3 - Exit Program )
    switch (selector){
    case 1:
        //Resets number of rounds played and Initiates the GameBoard
        playCount = 0;
        ShowGrid(grid, playCount);

        //Loop goes on unless the Game Board is full or someone Wins
        do{
            ShowGrid(grid, playCount);
            //Verifies if player index is out of range and resets it to 0.
            if (playerIndex > 1){ playerIndex = 0;}
            //Gets player symbol using playerIndex
            symbol = SelectSymbol(playerIndex);
            //Input Request Loop ( Line and Column ), verifies if both of then are valid.
            do {
            printf("\nPlayer %d pick a line and column to place your symbol:\n", playerIndex+1);
            printf("line ");
            scanf ("%d", &line);
            printf("column: ");
            scanf ("%d", &column);
            }while (!VerifyInput(line) || !VerifyInput(column));
            //Tries to place symbol, if PlaceSymbol returns true
            //Swaps player, increments number of Rounds and Shows grid to the user
            if (PlaceSymbol(grid, symbol, --line, --column)){
                playerIndex++;
                playCount++;
                ShowGrid(grid, playCount);
            }
        }while(playCount < 9 && !CallCheckWinCondition(grid,symbol));
        printf("\n****************************************\n");
        //Checks if the game is a tie, then shows end menu screen
        //If the game ends in a tie
        if (playCount == 9){
            printf("\n\tPlayer  %d did the last available move, its a tie!", (playerIndex+1));
            printf("\nAre you ready for next round?\n");
        }
        //Regular End Game Menu
        else{
            //increments match point on winning player
            if (playerIndex == 1){
                scoreP2++;
            }else{
            scoreP1++;
            }
            printf("\n\tPlayer  %d won the game!!", (playerIndex));
            printf("\n\tCongratulations!\n");
        }

        fpointer = fopen("results.txt", "w");

        fprintf(fpointer," %d ", scoreP1);
        fprintf(fpointer,"\n %d ", scoreP2);

        fclose(fpointer);

        printf("\nReturning to menu in");
        for (t = 5 ; t > 0; t--){
            printf(" %d", t);
            delay(1);
        }
        break;
    case 2:
        //Shows informative page about the game to the user
        CallRuleSet();
        selector = CallMenu(0);
        break;
    case 3:
        //Exit Message before closing loop
        printf("\n\tThank you for playing! See you soon!\n");
        break;
    case 4:
        ShowHighScore();
        break;
        }
    }
    //Loop condition, if user doesn't input 3 loop wont stop
    while(selector != 3);
    return 0;
}
