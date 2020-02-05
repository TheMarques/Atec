#include <stdio.h>

/*
Cria uma variavel para guardar um valor inteiro e depois cria um pointeiro para essa variavel e imprime no ecran o valor que está guardado na variavel
com o resurso do ponteiro.

Boa sorte
*/

int main()
{
    int value;

    printf("\nInsert a number");
    printf("--->");
    scanf("%d",&value);

    int *pValue = &value;

    printf("\nVariable\tPointer\t\tIntValue");
    printf("\n%s\t\t%d\t\t%d", "value", *pValue, value);

    return 0;
}

