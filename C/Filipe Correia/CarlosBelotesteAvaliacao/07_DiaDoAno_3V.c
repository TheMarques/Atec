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


int main()
{
    //Variaveis:
    //dia -> Para guardar informação do dia indicado
    //mes -> Para guardar informação do mes indicado
    //ano -> Para guardar informação do ano indicado
    //totalDias -> O total de dias que passaram
    //loop -> Utilizado para continuar (1) ou parar (2) o loop
    int dia;
    int mes;
    int ano;
    int totalDias=0;

    printf("\nIndique o presente dia:");
    scanf("%d",&dia);
    printf("\nIndique o presente mes:");
    scanf("%d",&mes);
    printf("\nIndique o presente ano:");
    scanf("%d",&ano);

    printf("\n\nO utilizador introduziu: %d do %d de %d\n",dia,mes,ano);

    totalDias=totalDias+dia;
    //Calcula as somas a utilizar um for para passar por todos os meses que já passaram por completo
    //Também só acrescenta o valor certo de dias por cada mês
    for(int repMes=1;repMes<mes;repMes++){
        if(repMes==1||repMes==3||repMes==5||repMes==7||repMes==8||repMes==10||repMes==12)totalDias=totalDias+31;
            else if(repMes==4||repMes==6||repMes==9||repMes==11)totalDias=totalDias+30;
                else{
                    if(ano%4==0) totalDias=totalDias+29;
                    else totalDias=totalDias+28;
                }
    }

    printf("Ja passaram %d dias do ano %d!\n",totalDias,ano);
    return 0;
}
