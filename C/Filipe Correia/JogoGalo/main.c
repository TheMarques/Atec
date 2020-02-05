#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int CallMenu()
{
    //Menu Parameters
    int option = 0;

    //Init Menu
    printf("\n****************************************");
    printf("\n\t1- Start Game");
    printf("\n\t2- See Commands");
    printf("\n\t3- Exit");
    printf("\n***************************************> ");
    scanf(" %d", &option);
    return option;
}

int CallRuleSet()
{
    printf("\n");
    printf("\n************RULESET*********************");
    printf("\nThis game is meant to played by 2 players.");
    printf("\nEach player places one symbol at the time to build a line (horizontal, vertical or diagonal)");
    printf("\nwith their symbol in a 3x3 Area");
    printf("\nExample:");
    printf("\n\tO | X | X ");
    printf("\n\t  | 0 |   ");
    printf("\n\tX |   | O ");
    printf("\nIn this example the player with the symbol 'O' won with a diagonal line.");
    printf("\n************How to play*********************");
    printf("\nDuring the game you will be asked to select the position to place your symbol.");
    printf("\nTo do so you will have to type the line and colunm.");
    printf("\nThe numbers go from 1 to 3.");
    printf("\nExample:");
    printf("\nInput 1 + 2");
    printf("\n\t  |   |   ");
    printf("\n\t  | 0 |   ");
    printf("\n\t  |   |   ");
    printf("\n\tGood Luck!.");
    printf("\nAre you ready to play the rooster game?");
    printf("\n");
    return 1;
}

int CallEndGame(int op, int playerIndex)
{
    //Menu Parameters
    int option = 0;
    if (op == 0)
    {
        printf("\n****************************************");
        printf("\n\tPlayer  %d did the last available move, its a tie!", (playerIndex+1));
        printf("\nAre you ready for next round?");
    }
    else
    {
        printf("\n****************************************");
        printf("\n\tPlayer  %d won the game!!", (playerIndex));
        printf("\n\tCongratulations!");
    }
    //Init EndMenu
    printf("\n\t1- Return to Menu");
    printf("\n\t2- Exit");
    printf("\n***************************************> ");
    return option;
}

int StartGame(int nLine, int nColumn, char grid[5][5])
{
    //Indexes
    int i,j;
    //Init Grid
    for (i=0; i < nLine; i++)
    {
        for (j=0; j < nColumn; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                grid[i][j] = ' ';
            }
            else if (i % 2 != 0)
            {
                grid[i][j] = '-';
            }
            else
            {
                grid[i][j] = '|';
            }
        }
    }
    return 2;
}

char SelectSymbol(int playerIndex)
{
    if (playerIndex == 0)
    {
        return 'O';
    }
    else
    {
        return 'X';
    }
}

bool PlaceSymbol(char grid[5][5],char symbol, int line, int column)
{
    if (grid[line][column] != ' ')
    {
        return false;
    }
    else
    {
        grid[line][column] = symbol;
        return true;
    }
}

bool CheckGrid(int nLine, int nColumn, char grid[5][5], char symbol)
{
    int line = 0;
    int column = 0;
    int nSymbol = 0;
    //Check Line
    for (line=0; line < nLine; line += 2)
    {
        nSymbol = 1;
        for (column = 0; column < nColumn-1; column += 2)
        {
            printf("\n\t lin = %d , col = %d,\t lin = %d, col+2 = %d", line,column,line, (column+2));
            if (symbol == grid[line][column] && grid[line][column]== grid[line][column+2])
            {
                nSymbol++;
            }
            else
            {
                nSymbol = 0;
            }

            if (nSymbol == 3)
            {
                return true;
            }
        }
    }

    //Check Column
    for (column = 0; column < nColumn; column += 2)
    {
        nSymbol = 1;
        for (line= 0; line < nLine-1; line += 2)
        {
            if (symbol == grid[line][column] && grid[line][column]== grid[line+2][column])
            {
                nSymbol++;
            }
            else
            {
                nSymbol = 0;
            }

            if (nSymbol == 3)
            {
                return true;
            }
        }
    }
    return false;
}

bool CheckDiagonalLeft(int nLine, int nColumn, char grid[5][5], char symbol)
{
    int line = 0;
    int column =0;
    int nSymbol;
    //Check Diagonal Left
    int s;
    for (s = 0; s < 3; s++)
    {
        nSymbol = 1;
        for (line = 0; line < nLine; line +=2)
        {
            switch (line)
            {
            case 0:
                column = 4;
                break;
            case 2:
                column = 2;
                break;
            case 4:
                column = 0;
                break;
            default:
                printf("Error Code 9: Line not in grid");
                break;
            }
            //printf("\n\t i = %d , j = %d, i+2 = %d, j-2 = %d", i,j,(i+2), (j-2));
            if (symbol == grid[line][column] && grid[line][column] == grid[line+2][column-2])
            {
                nSymbol++;
            }
            else
            {
                nSymbol = 0;
            }
            if (nSymbol == 3)
            {
                return true;
            }
        }
    }
    return false;
}

bool CheckDiagonalRight(int nLine, int nColumn, char grid[5][5],char symbol)
{
    int line = 0;
    int column =0;
    int nSymbol;
    int n;
    //Check Diagonal Right
    for (n = 0; n < 3; n++)
    {
        nSymbol = 1;
        for (line =0; line < nLine; line += 2)
        {
            switch (line)
            {
            case 0:
                column = 0;
                break;
            case 2:
                column = 2;
                break;
            case 4:
                column = 4;
                break;
            default:
                printf("Error Code 10: Line not in grid");
                break;
            }
            //printf("\n\t i = %d , j = %d, i+2 = %d, j+2 = %d", i,j,(i+2), (j+2));
            if (symbol == grid[line][column] && grid[line][column]== grid[line+2][column+2])
            {
                nSymbol++;
            }
            else
            {
                nSymbol = 0;
            }
            if (nSymbol == 3)
            {
                return true;
            }
        }
    }
    return false;

}

int ShowGrid(int nLine, int nColumn, char grid[5][5])
{
    //Indexes
    int line = 0;
    int column =0;
    //Print Grid
    printf("\n");
    for (line=0; line< nLine; line++)
    {
        printf("\t");
        for (column=0; column < nColumn; column++)
        {
            printf(" %c ", grid[line][column]);
        }
        printf("\n");
    }
    return 3;
}

int main()
{
    //Grid Parameters
    int nLine = 5;
    int nColumn = 5;
    int line;
    int column;
    char grid[nLine][nColumn];

    //Menu Loop Parameters
    int options[3] = {1,2,3};
    int option;
    int s;

    //Game Loop ParametersCallEndMenu
    int playCount = 0;
    int playerIndex = 0;
    int player[2];
    int pos[1][1];
    bool inGame = false;
    char symbol;

    do
    {
        printf("\n");
        printf("\n\tWelcome to the Rooster game\n");
        do
        {
            option = CallMenu();
        }
        while (option == options);

        switch (option)
        {
        case 1:
            printf("\n****************************************");
            printf("\n\tGame Starting!\n");
            printf("\n****************************************");
            playCount = 0;
            StartGame(nLine, nColumn,grid);
            inGame = true;
            break;
        case 2:
            CallRuleSet();
            break;
        case 3:
            printf("\n\tThank you for playing! See you soon!\n");
            return 1;
        default :
            printf("\nSelect a valid choice.\n");
            break;
        }

        while (inGame)
        {
            //system("cls");
            ShowGrid(nLine, nColumn, grid);
            if (playerIndex > 1){ playerIndex = 0;}
            printf("\nPlayer %d pick a line and column to place your symbol:\n", playerIndex+1);
            playCount++;
            printf("\tline: \tcoluna: ");
            scanf ("%d %d", &line, &column);
            symbol = SelectSymbol(playerIndex);
            printf("symbol: ");
            printf("%c \n", symbol);
            printf("\n");
            printf("\n");
            switch (line)
            {
            case 1:
                if (column == 1 || column == 2 || column == 3)
                {
                    if (column == 1)
                    {
                        column = 0;
                    }
                    else if (column == 3)
                    {
                        column = 4;
                    }
                    if (PlaceSymbol(grid, symbol, line-1,column))
                        playerIndex++;
                }
                break;
            case 2:
                if (column == 1 || column == 2 || column == 3)
                {
                    if (column == 1)
                    {
                        column = 0;
                    }
                    else if (column == 3)
                    {
                        column = 4;
                    }
                    if (PlaceSymbol(grid, symbol, line,column))
                        playerIndex++;
                }
                break;
            case 3:
                if (column == 1 || column == 2 || column == 3)
                {
                    if (column == 1)
                    {
                        column = 0;
                    }
                    else if (column == 3)
                    {
                        column = 4;
                    }
                    if (PlaceSymbol(grid, symbol, line+1,column))
                        playerIndex++;
                }
                break;
            default:
                printf("\nBem Burro mete bem o simbolo FODASSEEE\n");
                break;
            }

            if (CheckGrid(nLine,nColumn,grid,symbol) || CheckDiagonalLeft(nLine,nColumn,grid,symbol) || CheckDiagonalRight(nLine,nColumn,grid,symbol))
            {
                ShowGrid(nLine, nColumn, grid);
                s = CallEndGame(1,playerIndex);
                inGame = false;
            }
            if (playCount > 8)
            {
                ShowGrid(nLine, nColumn, grid);
                s = CallEndGame(0,playerIndex);
                inGame = false;
            }

        }
    }while (!inGame);

    switch (s)
    {
    case 1:
        printf("\nReturning to Menu...\n");
        break;
    case 2:
        printf("\n\tThank you for playing! See you soon!\n");
        return 1;
        break;
    case 3:
        printf("\n\tRules\n");
        CallRuleSet();
        break;
    default:
        printf("\nSelect a valid option.\n");
        break;
    }
    return 0;
}

