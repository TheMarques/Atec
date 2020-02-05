#include <stdio.h>

/* Pretende-se que este programa identifique quantos dias já passaram de um determinado ano,
quando o utilizador introduz uma desterminada data(dia,mês e ano).
Exemplo:
O utilizador introduz: dia:20  mês:2  ano: 2016,
O programa irá devolver: dia 51 do ano de 2016
Ou seja 31 dias de Janeiro mais 20 de Fevereiro.
Não esquecer que os anos bisextos(4 em 4 anos) são multiplos de 4 ( Ano%4==0), têm 29 dias em Fevereiro.

Boa Sorte
*/

int CalculateMissingDays(int missingMonths, int missingDays){
    int i;

    for(i = 0; i < missingMonths; i++){
        if(i % 2 == 1 && i != 9 && i != 11 || i == 8 || i == 10 || i == 12)
        {
            missingDays += 31;
        }
        else {
            missingDays += 30;
        }
    }
return missingDays;
}


int main()
{
    int day;
    int month;
    int year;

    int missingDays = 0;
    int missingMonths = 0;
    int dayLimit = 0;

    do{
    printf("\nInsert a day, month and year.");
    printf("--->");
    scanf("%d%d%d",&day,&month,&year);

    while(month >= 13 || month <= 0){
        printf("\nInsert a month between 1 and 12");
        printf("--->");
        scanf("%d",&month);
    }

    missingMonths = month;

    while(day >= 32 || day <= 0){
        printf("\nInsert a day between 1 and 29");
        printf("--->");
        scanf("%d",&day);
    }

    if (year %4 == 0){
            if (month == 2){
                    dayLimit = 29;
                while (day >= 30 && day <= 0){
                    printf("\nInsert a day between 1 and 29");
                    printf("--->");
                    scanf("%d",&day);
                    }
                }
            }
            else {
                if (month == 2){
                    dayLimit = 28;
                while (day >= 29 && day <= 0){
                    printf("\nInsert a day between 1 and 28");
                    printf("--->");
                    scanf("%d",&day);
                    }
                }
            }

            missingDays = CalculateMissingDays(missingMonths, (day-dayLimit));
            printf("Missing Days = %d", (missingDays-1));
    }while(missingDays = 0);


    return 0;
}
