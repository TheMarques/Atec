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

    char arrow[size*2][size];

    for (column = 0; column < size*2; column++){
         arrow[0][column] = '*';
    }

    for (line = 1; line < size*2; line+=2){
            for (column = 1; column < size*2; column++){
                        arrow[line+1][column+2] = '1';
            }
        }

    //Decoration
    printf("\n");
    for (line=0; line < size*2; line++){
        printf("\t");
        for (column=0; column < size; column++){
            printf(" %c ", arrow[column][line]);
        }
        printf("\n");
    }

	return 0;
}

