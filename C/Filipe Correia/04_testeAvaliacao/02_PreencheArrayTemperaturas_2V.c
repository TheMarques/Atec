#include <stdio.h>

/* Cria um array com 10 posições para que o utilizador possa introduzir 10 temperaturas
e apos a introdução, devolva a tempertatura mais alta de todas.

Boa sorte
*/


int main()
{
    int temperatures[10];
    int maxTemperature = 0;
    int i;
    for(i = 0; i < 10; i++){
        int temperatureInput = 0;
        printf("\nInsert a temperature");
        scanf("%d", &temperatureInput);

        if (maxTemperature < temperatureInput){
            maxTemperature = temperatureInput;
        }
        temperatures[i] = temperatureInput;
    }

    printf("\nThe highest temperature inserted was : %d", maxTemperature);

    return 0;
}
