#include <stdio.h>

/* Cria uma matriz de 3x3 e introduz numeros inteiros à tua escolha e mostra a matrix ao utilizador
quando o programa correr

Boa sorte
*/


int main(){
    //Variaveis
    //Matriz -> Contém os valores
    int matriz[3][3];

    //For só para atribuir os valores
    for(int r=0;r<3;r++){
        for(int r2=0;r2<3;r2++){
            matriz[r][r2]=(r*3)+r2+1;
        }
    }

    //For para passar por todas as posições da matriz e a demonstrar, posição a posição
    for(int r=0;r<3;r++){
        printf("|");
        for(int r2=0;r2<3;r2++){
            printf(" %d |",matriz[r][r2]);
        }
        printf("\n");
    }

    return 0;
}
