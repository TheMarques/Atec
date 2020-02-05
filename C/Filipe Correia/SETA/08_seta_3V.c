#include <stdio.h>

/*
Escreve um programa que peça ao utilizador para introduzir um valor e imprima no ecran o dobro das linhas do valor introduzido.
A primeira metade das linhas contem um * no inicio e vai incrementando espaço conforme o numero da linha e termina com um *.
A Segunda metade também inicia com um * e vai decrementando espaços em relação à linha anterior.
O resultado deverá ser parecido ao de uma seta.

Condições particulares:
Quando o utilizador introduz o valor 1, nada será impresso no ecran.
Quando o utilizador introduz um valor superior a 20 o programa irá limitar até 20.

Dois Exemplos:

Exemplo 1------------------------------------------------
Valor introduzido
3

Resultado do programa

**
* *
*  *
*  *
* *
**

Exemplo 2-------------------------------------------------
Valor introduzido
9

Resultado do programa

**
*   *
*    *
*     *
*      *
*       *
*        *
*         *
*          *
*          *
*         *
*        *
*       *
*      *
*     *
*    *
*   *
**

Boa sorte
*/
int main()
{
    int size;
    int line;
    int column;

    printf("\nInsert a number to print a arrow shaped glyph");
    printf("--->");
    scanf("%d", &size);

    if (size == 0){
        printf("\nInvalid value");
    }

    if (size >= 20){
        size = 20;
    }

    char arrow[size][size*2];

    for(column=0; column < size*2; column++){
        arrow[0][column] = '*';
    }

    for (column = 0; column < size; column++){
        for(line = size; line > 1; line--){
            if (column % 2 == 0){
                arrow[line-1][column] = '1';
            }else{
                arrow[line-1][column] = '2';
            }
        }}

    for (column = 0; column < size*2; column++){
            printf("\n");
        for(line =0; line < size; line++){
            printf(" %c ", arrow[line][column]);
        }
    }

    /*
    for (column = 0; column < size*2; column++){
             for (line = 0; line < size; line++){
                     printf(" %c ", arrow[0][column]);
             }
    }*/

    /*for (line = 1; line < size*2; line+=2){
            for (column = 1; column < size; column++){
                        arrow[line][column] = '1';
            }
        }*/
/*
    //Decoration
    printf("\n");
    for (column = 0; column < size*2; column++){
        printf("\t");
        for (line = 1; line < size; line+=2){
            printf(" %c ", arrow[line][column]);
    }

        }
        printf("\n");
*/

	return 0;
}

