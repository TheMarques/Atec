#include <stdio.h>

/*
Cria uma variavel para guardar um valor inteiro e depois cria um pointeiro para essa variavel e imprime no ecran o valor que está guardado na variavel
com o resurso do ponteiro.

Boa sorte
*/

int main()
{
    //Variavel
    int valor=10;
    //Pointer
    int *pValor=&valor;
    //Chamar a variavel
    printf("Valor a utilizar a variavel valor: %d\n",valor);
    //Chamar o pointer
    printf("Valor a utilizar o ponteiro pValor: %d\n",*pValor);

    return 0;
}

