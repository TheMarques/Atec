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
float converterFahrenheitParaCelsius(float temperatura){
    return (((temperatura-32)*5)/9);
}

float converterCelsiusParaFahrenheit(float temperatura){
    return (temperatura*9/5+32);
}


int main (){

    //Variaveis
    //Opc -> Opção escolhida pelo utilizador
    //temperatura -> Recolherá a temperatura que será convertida
    //convertida -> Temperatura após ser convertida
    //loop -> utilizado para controlar se o loop continua(1) ou não (0)
    int opc;
    float temperatura;
    float convertida;
    int loop=1;

    printf("\t--Menu--\n");
    while(loop==1){
        loop=0;
        printf("\t1 - Fahrenheit para Celsius\n");
        printf("\t2 - Celsius para Fahrenheit\n");
        scanf("%d",&opc);
        switch(opc){
        case 1:
            printf("\tValor da temperatura?\n");
            scanf("%f",&temperatura);
            convertida = converterFahrenheitParaCelsius(temperatura);
            printf("\t%f oF = %f oC",temperatura,convertida);
            break;

        case 2:
            printf("\tValor da temperatura?\n");
            scanf("%f",&temperatura);
            convertida = converterCelsiusParaFahrenheit(temperatura);
            printf("\t%f oC = %f oF",temperatura,convertida);
            break;

        default:
            printf("\tOpcao invalida!\n\n");
            loop=1;
        }
    }

return 0;
}
