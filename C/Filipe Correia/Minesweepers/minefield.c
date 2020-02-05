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
neste caso a variável randLinha vai receber um valor aleatório entre 1 e 6
3-Escolher a casa através de coordenadas (linha,coluna)
4-Após cada jogada verificar todas as casas e detectar:
        - Se existe uma mina na casa escolhida, termina o jogo
        - Se não existir mina, dar informação da quantidade de minas nas casa adjacentes.
5-As casas poderão ser identificadas com um M para marcar as minas.



************************************************************************************/

void createBoard(int sizeX, int sizeY, char visual[sizeX][sizeY], char logic[sizeX][sizeY], int mineNumber)
{
    int x = 0;
    int y = 0;
    //Add '-' to empty slots
    for (x = 0; x < sizeX; x++)
    {
        for (y = 0; y < sizeY; y++)
        {
            visual[x][y] = '-';
            logic[x][y] = ' ';
        }
    }

    /*
    //Generates 5 random mines and overwrites empty slots
    int n;
    srand((unsigned)time(NULL));
    for (n = 0; n < mineNumber; n++)
    {
        x = 0 + (rand() % sizeX);
        y = 0 + (rand() % sizeY);
        printf("\nMine Added in %d\t%d", (x+1), (y+1));
        if (logic[x][y] == 'M')
        {
            n -= 2;
        }
        else
        {
            logic[x][y] = 'M';
        }
    }*/

    logic[1][2] = 'M';

    logic[2][1] = 'M';
}

//Prints board
void printBoard(int sizeX, int sizeY, char visual[sizeX][sizeY])
{
    int x;
    int y;

    for (x = 0; x < sizeX; x++)
    {
        printf("\n");
        for (y = 0; y < sizeY; y++)
        {
            printf("%c\t", visual[x][y]);
        }
    }
}

void updateTile(int sizeX, int sizeY, char visual[sizeX][sizeY], int x, int y)
{
    printf("\t\tx: %d\t y: %d\n", x, y);

    if (visual[x][y] == '-')
    {
        visual[x][y] = 'x';
    }
}

char checkTilesAround(int sizeX, int sizeY, char logic[sizeX][sizeY], int x, int y, char tile)
{

    int tilesFound = 0;

    if (logic[x][y] == 'M')
    {
        printf("You've blown up!");
        return -1;
    }

    //first row
    if (x == 0 && y == 0)
    {
        //below
        if (logic[x + 1][y] == tile)
        {
            tilesFound++;
        }
        if (logic[x][y + 1] == tile)
        {
            tilesFound++;
        }
        if (logic[x + 1][y + 1] == tile)
        {
            tilesFound++;
        }
    }
    /*
        //last colum?
        else if (y == (sizeY - 1))
        {
            //check left and diagonal left
            if (logic[x][y - 1] == tile || logic[x + 1][y - 1] == tile){
                tilesFound++;}
        }
        else
        {
            if (logic[x][y + 1] == tile || logic[x + 1][y + 1] == tile ||
                logic[x][y - 1] == tile || logic[x + 1][y - 1] == tile){
                tilesFound++;}
        }
    }
    else if (x == (sizeX - 1)) {
    //above
    if (logic[x - 1][y] == tile)
        {
            tilesFound++;
        }
        //first colum ?
        if (y == 0)
        {
            //check right and diagonal right
            if (logic[x][y + 1] == tile || logic[x - 1][y + 1] == tile){
                tilesFound++;}
        }
        //last colum?
        else if (y == (sizeY - 1))
        {
            //check left and diagonal left
            if (logic[x][y - 1] == tile || logic[x - 1][y - 1] == tile)
                tilesFound++;
        }else{
            if (logic[x][y + 1] == tile || logic[x - 1][y + 1] == tile ||
                logic[x][y - 1] == tile || logic[x - 1][y - 1] == tile){
                tilesFound++;}
        }
    }
    else
    {
        //first colum ?
        if (y == 0)
        {
            //right , down right,
            //down
            if (logic[x][y + 1] == tile || logic[x + 1][y + 1] == tile ||
                    logic[x - 1][y + 1] == tile || logic[x + 1][y] == tile ||
                    logic[x-1][y] == tile){
                tilesFound++;}
        }
        //last colum?
        else if (y == (sizeY - 1))
        {
            //left , down left
            //down
            if (logic[x][y - 1] == tile || logic[x - 1][y - 1] == tile ||
                    logic[x + 1][y - 1] == tile || logic[x + 1][y] == tile ||
                    logic[x-1][y] == tile){
                tilesFound++;}
        }
        else
        {
            // Check all positions
            if (logic[x][y - 1] == tile || logic[x + 1][y - 1] == tile ||
                    logic[x][y + 1] == tile || logic[x + 1][y + 1] == tile ||
                    logic[x+1][y] == tile ||
                    logic[x][y - 1] == tile || logic[x - 1][y - 1] == tile ||
                    logic[x][y + 1] == tile || logic[x - 1][y + 1] == tile ||
                    logic[x-1][y] == tile){
                tilesFound++;}
        }
    }*/

    printf("Numero de bombas %d ", tilesFound);

    //convert int to char
    char m[2];
    if (tilesFound == 0)
    {
        m[0] = ' ';
    }
    else
    {
        m[0] = tilesFound + '0';
    }
    return m[0];
}

void delay(int seconds)
{
    int ms = 1000 * seconds;

    clock_t start_time = clock();

    while(clock() < start_time + ms);
}


void main()
{
    //board parameters
    int sizeX = 3;
    int sizeY = 3;
    char visual[sizeX][sizeY];
    char logic[sizeX][sizeY];
    int mineNumber = 2;

    //inputs variabes
    int n;
    int alive = 0;
    int x,y;
    char m[2];

    createBoard(sizeX,sizeY, visual, logic, mineNumber);
    //Game loop
    while(alive == 0)
    {
        printBoard(sizeX, sizeY,visual);
        printf("\nInput");
        scanf ("%d %d", &x, &y);
        x = x-1;
        y = y-1;
        updateTile(sizeX, sizeY,visual, x,y);
        visual[x][y] = checkTilesAround(sizeX, sizeY,logic, x,y, 'M');
        /*if (visual[x][y] == ' ')
        {
            visual[x][y] = checkTilesAround(sizeX, sizeY,logic, x,y, ' ');
        }*/
    }
    printBoard(sizeX, sizeY,visual);

    //Prestige aka Grand Finale
    for (n = 0; n < 5; n++)
    {
        delay(1);
        printf("\nPerdeu");
    }
}
