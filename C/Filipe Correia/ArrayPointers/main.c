#include <stdio.h>


int mul2(int *parr){
    int i;
    for (i=0;i < 5; i++){
        parr[i]*=2;
    }
}

int main()
{
    int temperatura[5] ={1,2,3,4,5};
    int i;

    printf("Posicao \t\t Endereco \t Valor");

    for (i=0;i < 5; i++){
        printf("\nTemperatures[%d] \t %p \t %d\n", i, &temperatura[i], temperatura[i]);
    }

        printf("\n temperature \t\t%p \n",temperatura);

    mul2(temperatura);

    for (i=0;i < 5; i++){
        printf("\nTemperatures[%d] \t %p \t %d\n", i, &temperatura[i], temperatura[i]);
    }

    printf("\n *temperature+5 \t\t %d", *(temperatura+5));

    return 0;
}
