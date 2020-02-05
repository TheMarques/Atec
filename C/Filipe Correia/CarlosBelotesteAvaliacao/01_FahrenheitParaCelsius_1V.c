#include <stdio.h>

/* Faz a conversão da temperatura de unidades Fahrenheit para Celsius após a introdução da temperatura em
Fahrenheit por parte do utilizador.
Expressão para conversão: Celsius=((Fahrenheit-32)*5)/9

Boa sorte
*/

int main (){
    //Variáveis utilizadas para recolher as temperaturas
    float temperaturaFahrenheit;
    float temperaturaCelsius;

    printf("\t--Conversao de Fahrenheit para Celsius--\n");
    printf("\t--Insira o valor em Fahrenheit\n");
    scanf("%f",&temperaturaFahrenheit);

    //Expressão de conversão
    temperaturaCelsius=((temperaturaFahrenheit-32)*5)/9;

    printf("\n\t%f oF = %f oC",temperaturaFahrenheit,temperaturaCelsius);

    return 0;
}
