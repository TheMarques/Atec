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
int main(){
    //Variaveis
    //Valor -> Utilizado para recolher o valor indicado pelo utilizador
    int valor;

    printf("\nIndique um valor:\n");
    scanf("%d",&valor);
    printf("\n\n");

    //Regras de exclusão indicadas
    if(valor==1)valor=0;
    if(valor>20)valor=20;

    //For para desenhar a parte crescente da peça
    for(int rLinhas=0;rLinhas<valor;rLinhas++){
        printf("*");
        for(int rEspacos=0;rEspacos<rLinhas;rEspacos++){
        printf("  ");
        }
        printf("*\n");
    }

    //For para desenhar a parte decrescente da peça
    for(int rLinhas=(valor-1);rLinhas>=0;rLinhas--){
        printf("*");
        for(int rEspacos=rLinhas;rEspacos>0;rEspacos--){
            printf("  ");
        }
        printf("*\n");
    }

	return 0;
}

