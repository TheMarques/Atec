#include <stdio.h>
#include "alunosAtec.h"

int main(){

    struct alunosAtec aluno1;

    puts("Primeiro nome do aluno1");
    gets(aluno1.primeiroNome);

    puts("Idade do aluno1");
    scanf(" %d", &aluno1.idade);

    printf("\nO nome do aluno1 e %s e tem %d anos de idade.\n", aluno1.primeiroNome, aluno1.idade);
    return 0;
}
