#include <stdio.h>

/* Cria duas funções, uma para conversão de temperatura de unidades Fahrenheit para Celsius usando a expressão
Celsius=((Fahrenheit-32)*5)/9
E outra função, para conversão de temperatura de unidades Celsius para Fahrenheit usando a expressão
Fahrenheit=Celsius*9/5+32

O utilizador irá escolher qual a conversão que pretende e o valor de temperatura a converter.
A função irá realizar a conversão e irá, após isso, devolver o valor convertido à função main onde será
apresentado o valor introduzido e o valor convertido.

Exemplo1: Celsius=30 >> Fahrenheit= 86

Exemplo2:Fahrenheit= 86 >> Celsius=30

Boa sorte
*/

int convertFtoC(int temperature){
    return (((temperature-32)*5)/9);
}

int convertCtoF(int temperature){
    return (temperature*9/5+32);
}

int main (){

    int temperatureInput;
    int temperatureConverted;
    int selector;

    printf("\nInsert a temperature to be converted: ");
    printf("--->");
    scanf("%d",&temperatureInput);

    do{
        printf("\nConverting Temperature Value of %d", temperatureInput);
        printf("\n1- Convert to Celsius");
        printf("\n2- Convert to Fahrenheit");
        printf("\n3- Exit");
        printf("\nSelect one of the following options");
        printf("--->");
        scanf("%d",&selector);
    switch (selector){
    case 1:
        temperatureConverted = convertFtoC(temperatureInput);
        printf("\nTemperature in Fahrenheit: %d",temperatureInput);
        printf("\nTemperature in Celsius: %d",temperatureConverted);
        break;
    case 2:
        temperatureConverted = convertCtoF(temperatureInput);
        printf("\nTemperature in Celsius: %d",temperatureInput);
        printf("\nTemperature in Fahrenheit: %d",temperatureConverted);
        break;
    default:
        printf("\nSelect a valid option!");
        break;
    }
}while(selector != 3);

        return 0;
}
