#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/***********************************************************************************
Jogo MineField
****************
1-Criar o tabuleiro (Uma matriz de 6 por 6)
2-Espalhar aleatoriamente 5 minas.
        Exemplo:
        srand((unsigned)time(NULL));
        randLinha = 1 + (rand()%6);
neste caso a vari�vel randLinha vai receber um valor aleat�rio entre 1 e 6
3-Escolher a casa atrav�s de coordenadas (linha,coluna)
4-Ap�s cada jogada verificar todas as casas e detectar:
        - Se existe uma mina na casa escolhida, termina o jogo
        - Se n�o existir mina, dar informa��o da quantidade de minas nas casa adjacentes.
5-As casas poder�o ser identificadas com um M para marcar as minas.



************************************************************************************/

char checkTilesAround(int sizeX, int sizeY, char logic[sizeX][sizeY], int x, int y, char tile)
{
    int tilesFound = 0;

    if (logic[x][y] == 'M')
        return 'M';

    //top left
    if (x == 0 && y == 0)
    {
        //below
        if (logic[x + 1][y] == tile)
            tilesFound++;
        //
        if (logic[x][y + 1] == tile)
            tilesFound++;
        //
        if (logic[x + 1][y + 1] == tile)
            tilesFound++;
    }
    //top right
    else if (x == 0 && y == (sizeY - 1))
    {
        //below
        if (logic[x][y - 1] == tile)
            tilesFound++;
        //
        if (logic[x + 1][y] == tile)
            tilesFound++;
        //
        if (logic[x + 1][y - 1] == tile)
            tilesFound++;
    }
    //bottom left
    else if (x == (sizeX - 1) && y == 0)
    {
        //
        if (logic[x - 1][y] == tile)
            tilesFound++;
        //
        if (logic[x - 1][y + 1] == tile)
            tilesFound++;
        //
        if (logic[x][y + 1] == tile)
            tilesFound++;
    }
    //bottom right
    else if (x == (sizeX - 1) && y == (sizeY - 1))
    {
        //
        if (logic[x - 1][y - 1] == tile)
            tilesFound++;
        //
        if (logic[x][y - 1] == tile)
            tilesFound++;
        //
        if (logic[x - 1][y] == tile)
            tilesFound++;
    }
    //middle row
    else if (x == 0 && y > 0 && y < (sizeY - 1))
    {
        //
        if (logic[x][y + 1] == tile)
            tilesFound++;
        //
        if (logic[x + 1][y] == tile)
            tilesFound++;
        //
        if (logic[x][y - 1] == tile)
            tilesFound++;
        //
        if (logic[x + 1][y + 1] == tile)
            tilesFound++;

        //
        if (logic[x + 1][y - 1] == tile)
            tilesFound++;
    }
    //Bottom middle
    else if (x == (sizeX - 1) && y > 0 && y < (sizeY - 1))
    {
        //
        if (logic[x - 1][y - 1] == tile)
            tilesFound++;
        //
        if (logic[x - 1][y] == tile)
            tilesFound++;
        //
        if (logic[x - 1][y + 1] == tile)
            tilesFound++;
        //
        if (logic[x][y - 1] == tile)
            tilesFound++;
        //
        if (logic[x][y + 1] == tile)
            tilesFound++;
    }
    //Left middle
    else if (y == 0 && x > 0 && x < (sizeY - 1))
    {
        //
        if (logic[x - 1][y] == tile)
            tilesFound++;
        //
        if (logic[x - 1][y + 1] == tile)
            tilesFound++;
        //
        if (logic[x][y + 1] == tile)
            tilesFound++;
        //
        if (logic[x + 1][y + 1] == tile)
            tilesFound++;
        //
        if (logic[x + 1][y] == tile)
            tilesFound++;
    }
    //Left middle
    else if (y == (sizeY - 1) && x > 0 && x < (sizeY - 1))
    {
        //
        if (logic[x - 1][y - 1] == tile)
            tilesFound++;
        //
        if (logic[x][y - 1] == tile)
            tilesFound++;
        //
        if (logic[x - 1][y] == tile)
            tilesFound++;
        //
        if (logic[x + 1][y - 1] == tile)
            tilesFound++;
        //
        if (logic[x + 1][y] == tile)
            tilesFound++;
    }

    //Check all Tiles
    else
    {
        if (logic[x + 1][y] == tile)
            tilesFound++;
        if (logic[x - 1][y] == tile)
            tilesFound++;
        if (logic[x][y + 1] == tile)
            tilesFound++;
        if (logic[x][y - 1] == tile)
            tilesFound++;
        if (logic[x + 1][y + 1] == tile)
            tilesFound++;
        if (logic[x + 1][y - 1] == tile)
            tilesFound++;
        if (logic[x - 1][y + 1] == tile)
            tilesFound++;
        if (logic[x - 1][y - 1] == tile)
            tilesFound++;
    }
    //convert int to char
    char m[2];
    if (tilesFound == 0)
        m[0] = '0';
    else
        m[0] = tilesFound + '0';
    return m[0];
}

void floodFill(int sizeX, int sizeY, char logic[sizeX][sizeY], char visual[sizeX][sizeY], int x, int y, char oldTile)
{
    if (x < 0 || x >= sizeX || y < 0 || y >= sizeY)
        return;
    if (logic[x][y] != oldTile)
        return;
    visual[x][y] = checkTilesAround(sizeX,sizeY,logic,x,y,'M');
    floodFill(sizeX, sizeY, logic, visual, (x + 1), y, oldTile);
    floodFill(sizeX, sizeY, logic, visual, (x - 1), y, oldTile);
    floodFill(sizeX, sizeY, logic, visual, x, (y + 1), oldTile);
    floodFill(sizeX, sizeY, logic, visual, x, (y - 1), oldTile);
}
/*
void floodFill(int sizeX, int sizeY, char logic[sizeX][sizeY], char visual[sizeX][sizeY], int x, int y)
{ 
    char oldTile = visual[x][y];
    floodFillUtil(sizeX, sizeY, logic, visual, x, y, oldTile);
}*/

void createBoard(int sizeX, int sizeY, char visual[sizeX][sizeY], char logic[sizeX][sizeY], char fullboard[sizeX][sizeY], int mineNumber)
{
    int x;
    int y;
    int n;

    //Generates n random mines and overwrites empty slots
    srand((unsigned)time(NULL));
    for (n = 0; n < mineNumber; n++)
    {
        x = 0 + (rand() % sizeX);
        y = 0 + (rand() % sizeY);
        printf("\nMine Added in %d\t%d", (x + 1), (y + 1));
        if (logic[x][y] == 'M')
            n -= 2;
        else
            logic[x][y] = 'M';
    }

    //Add '-' to empty slots on Visual board and numbers to Logic board
    for (x = 0; x < sizeX; x++)
    {
        for (y = 0; y < sizeY; y++)
        {
            visual[x][y] = '-';
            if (logic[x][y] != 'M')
                logic[x][y] = '-';
            fullboard[x][y] = logic[x][y];
        }
    }
}

//Prints board
void printBoard(int sizeX, int sizeY, char board[sizeX][sizeY])
{
    int x;
    int y;

    for (x = 0; x < sizeX; x++)
    {
        printf("\n");
        for (y = 0; y < sizeY; y++)
        {
            printf("%c  ", board[x][y]);
        }
    }
}

void delay(int seconds)
{
    int ms = 1000 * seconds;
    clock_t start_time = clock();
    while (clock() < start_time + ms)
        ;
}

int main()
{
    //board parameters
    int sizeX = 7;
    int sizeY = 7;
    char visual[sizeX][sizeY];
    char logic[sizeX][sizeY];
    char fullBoard[sizeX][sizeY];
    int mineNumber = 10;

    //inputs variabes
    int n = 0;
    int alive = 0;
    int x, y;

    createBoard(sizeX, sizeY, visual, logic, fullBoard, mineNumber);

    while (alive == 0)
    {
        printBoard(sizeX, sizeY, visual);
        printf("\n");
        printBoard(sizeX, sizeY, logic);
        printf("\nInput");
        scanf("%d %d", &x, &y);
        if (logic[x][y] == 'M')
        {
            alive = 1;
        }
        if (logic[x][y] == '-')
        {
            floodFill(sizeX, sizeY, logic, visual, x, y, logic[x][y]);
        }
    }
    printBoard(sizeX, sizeY, fullBoard);
    //Prestige aka Grand Finale
    for (n = 0; n < 5; n++)
    {
        delay(1);
        printf("\nPerdeu");
    }
    return 0;
}
