#include <stdio.h>

/* Cria uma matriz de 3x3 e introduz numeros inteiros à tua escolha e mostra a matrix ao utilizador
quando o programa correr

Boa sorte
*/


int main()
{
    int matrix[3][3] = {
                        1, 2, 3,
                        4, 5, 6,
                        7, 8, 9,
                        };
    int line =0;
    int column = 0;

    //Decoration
    printf("\n");
    for (line=0; line< 3; line++)
    {
        printf("\t");
        for (column=0; column < 3; column++)
        {
            printf(" %d ", matrix[line][column]);
        }
        printf("\n");
    }

    //Debug Print
    //printf("\n%d", matrix[column][line]);

    return 0;
}
