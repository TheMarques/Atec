#include <stdio.h>


    int variavel2;

int verPointerBatatas(int pointer){

    pointer *= 2;

    printf("\nValor de variavel2 = %d", variavel2);
    return pointer;
}


int main()
{
    /*char aluno1[] = "Tomas";

    //Problema , tentar adicionar Filipe ao pointer Aluno1
    //aluno1="Filipe";

    char * pAluno2 = "Sandra";

    printf("%c\n", *pAluno2 );
    printf("%c\n", *(pAluno2+1));
    printf("%c\n", *(pAluno2+2));
    printf("%c\n", *(pAluno2+3));
    printf("%c\n", *(pAluno2+4));
    printf("%c\n", *(pAluno2+5));

    //Opção 1
    puts(pAluno2);

    pAluno2="Filipe";

    puts(pAluno2);

    //Opção 2
    //strcpy(aluno1," Filipe");

*/
    int batatas=10;

    printf("%p", &batatas); // Vai imprimir o endereço de memoria onde está gardada a variavel

    printf("\n Nome \t\t Endereco \t\tValor \n");

    printf(" %s \t %p \t %d \n","batatas", &batatas, batatas);

    int *pBatatas = &batatas;

    printf(" %s \t %p \t %d \n","batatas", pBatatas, batatas);

    printf(" %s \t %p \t %p \n","pbatatas", &pBatatas, pBatatas);

    printf("\n*pBatatas: %d\n",*pBatatas);// chamasse

    variavel2 = 10;

    *pBatatas = verPointerBatatas(*pBatatas);

    printf("\n %d ", *pBatatas);

    return 0;
}
