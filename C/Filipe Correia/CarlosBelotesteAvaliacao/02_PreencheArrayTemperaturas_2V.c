#include <stdio.h>

/* Cria um array com 10 posições para que o utilizador possa introduzir 10 temperaturas
e apos a introdução, devolva a tempertatura mais alta de todas.

Boa sorte
*/


int main(){
    //Variaveis
    //temperatura -> utilizada para recolher as temperaturas indicadas pelo utilizador
    //todasAsTemperaturas -> Array com as temperaturas indicadas pelo utilizador
    //maiorTemperatura -> Utilizada para demonstrar a maior temperatura
    float temperatura;
    float todasAsTemperaturas[10];
    float maiorTemperatura=0;

    printf("\t--A temperatura mais alta--\n");
    printf("\tIndique 10 temperaturas\n");
    printf("\tA mais alta sera identificada\n");

    for(int rep=0;rep<10;rep++){
        printf("\tIndique a %da temperatura!\n",rep+1);
        scanf("%f",&temperatura);
        todasAsTemperaturas[rep]=temperatura;
        if(temperatura>maiorTemperatura)maiorTemperatura=temperatura;
    }

    printf("\nA maior temperatura indicada e %f",maiorTemperatura);

    return 0;
}
