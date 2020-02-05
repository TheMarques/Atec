#include <stdio.h>

/* Faz a conversão da temperatura de unidades Fahrenheit para Celsius após a introdução da temperatura em
Fahrenheit por parte do utilizador.
Expressão para conversão: Celsius=((Fahrenheit-32)*5)/9
86 F = 30 C;
Boa sorte
*/

int main (){

    int fahrenheit;

    printf("\nInsert an temperature in Fahrenheit degrees");
    printf("--->");
    scanf("%d", &fahrenheit);

    int celcius;

    celcius = ((fahrenheit-32)*5)/9;

    printf("\nTemperature in Fahrenheit: %d",fahrenheit);
    printf("\nTemperature in Celsius: %d",celcius);

    return 0;
}
