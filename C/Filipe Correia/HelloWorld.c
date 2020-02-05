#include <stdio.h>

void main()
{
printf("\tHello World\n");
printf("\n");

    //ex1();
    //ex2();
    //ex3();
    //ex4();
    //ex5();
    //ex6();
    //ex7();
    //ex8();
    //ex9();
    exString();
}


void ex1()
{
    /*
    Escreva um algoritmo e pseudocódigo que receba o total de receitas (valores
recebidos) e o total de despesas (valores pagos) de um mês, e devolva ao
utilizador o saldo.
    */
    int v = 0;
    int d = 0;

    printf("Qual o valor das receita?");
    scanf("%d", &v);

    printf("Qual o valor da dispesa?");
    scanf("%d", &d);

    printf("O saldo e de %d", v - d );
}

void ex2()
{
    /*
    Escreva um algoritmo e pseudocódigo que receba um salário, um subsídio de
alimentação e um valor para descontos e devolve o salário liquido:
    */
    int s;
    int sa;
    int d;

    printf("Qual o valor do salário?");
    scanf("%d", &s);

    printf("Qual o valor do subsidio de Alimentacao?");
    scanf("%d", &sa);

    printf("Qual o valor dos descontos?");
    scanf("%d", &d);

    printf("O Salario liquido e de %d", (s + sa) - d);
}

void ex3()
{
    /*
    Escreva um algoritmo que receba dois números, um valor a pagar e o dinheiro
entregue pelo cliente e calcule o número de notas de 5 euros a devolver ao
cliente. Não é necessário ter em consideração situações em que o troco é
diferente de um mvoid ex6(){
    float t;
{
    return ((f-32)*5)/9;
}
    printf("Insira uma temperatura em Fahrenheit ");
    scanf("%f", &t);

    printf("\nO valor da temperature em Celsius e de %.2f", (t - 32)/1.8000);
    }últiplo de 5.
    */
    int p;
    int e;

    printf("Qual o valor a pagar?");
    scanf("%d", &p);

    printf("Qual o numerario entregue?");
    scanf("%d", &e);

    printf("O cliente deve receber %d notas de 5€", (e - p) / 5 );
}

void ex4()
{
    /*
Desenvolva um programa que, dado um número, calcule a diferença entre a soma
dos dois números seguintes e a soma dos dois números anteriores. Confirme que
independentemente do número inserido, o resultado é sempre 6.
*/
    int n;
    int r1;
    int r2;

    printf("Insira um numero");
    scanf("%d", &n);

    r1 = (n + 1) + (n + 2);
    r2 =(n - 1) + ( n-2);
    printf("A diferenca entre a soma dos 2 numeros seguintes e de %d .\n", r1);
    printf("A soma dos 2 numeros anteriores e de %d.\n" , r2);
    printf("o resultado e sempre %d", r1 - r2 );

}

void ex5(){
    int n;

    printf("Insira um numero");
    scanf("%d", &n);

    if (n % 2 == 0){
        printf("O numero %d e par.", n);
        }
        else{
        printf("O numero %d e impar.", n);
        }
    }

void ex6(){
    float t;

    printf("Insira uma temperatura em Fahrenheit ");
    scanf("%f", &t);

    printf("\nO valor da temperature em Celsius e de %.2f", (t - 32)/1.8000);
    }


float Fahrenheit (float t)
{
    return t*1.8 + 32;
}

float Celsius (float t)
{
    return (t-32)/1.8;
}

void ex7(){
    float t;
    char c;

    do{
    printf("\nInsira um valor de temperatura para converter");
    scanf("%f", &t);
        printf("Escolha uma das opções(c/f)/e");
                printf("\nc - Mostrar graus em Celsius");
                        printf("\nf - Mostrar graus em Fahrenheit");
                                printf("\ne - sair do programa");
    scanf(" %c", &c);

    switch (c){
    case 'c' :
            printf("\n\tO valor da temperature em Celsius e de %.2f", Celsius(t));
            break;

        case  'f' :
            printf("\n\tO valor da temperature em Fahrenheit e de %.2f", Fahrenheit(t));
            break;
        case  'e' :
                    printf("\nSair do menu...");
                    break;
        default:
            printf("\nEscolha outra opção");
        }
    }while (c != 'e');
}



void ex8(){
    //Fn = Fn-1 + Fn-2
    int f;
    int i;
    char s = 'n';

    while(s != 'y'){

        printf("Insert a number");
        scanf("%d", &f);

        if (f > 0){

            int n1 = 0;
            int n2 = 1;

            for (i = 0; i <=f; i++){
                i = n1 + n2;
                if (i <= f){
                    printf("%d\n", i);
                    }
                n1 = n2;
                n2 = i;
                }
            printf("Exit program?(y/n)");
            scanf(" %c", &s);
        }
        else{
             printf("You choose an invalid number");
        }
    }
    printf("Exiting...");
}

void ex9(){
//Definir as variáveis //
int n;
int i;
int troca;
int j;

//perguntar ao utilizador quantas temperaturas deseja //

printf("\nDigite o numero de temperaturas que deseja: ");
scanf("%d", &n);

int temp[n];

//Temperaturas que pretende digitar

 printf("\nIndique as temperaturas que deseja");
for(i=0; i<n; i++){
    printf("\nTemperatura %d = ", i+1);
    scanf("%d", &temp[i]);
}
//Aqui ordena as temperaturas com a bubble up//
printf("\nTemperaturas ordenadas da menor para a maior: ");
for(j=0; j<n; j++){
    for(i=0; i<n; i++){
      if(temp[i]>temp[i+1]){
        troca=temp[i+1];
          temp[i+1]=temp[i];
            temp[i]=troca;
}
}
}
for(i=0; i<n; i++){
printf("\nA temperatura numero %d valor da temp %d", i+1, temp[i]);
}}

void exString(){
    /*String em C
    char turma[10] ="TPSI_0919";
    Substitui totalmente o conteúdo do array
    strcpy(turma, "TPSI_0918");
    printf("A turma %s e a melhor.\n", turma);
    */

    char iString[100];
    char rString[100];
    int pos = 0;
    int count = 0;
    int i;

    //Asks the user for a string to reverse
    printf("\nWrite a text to write it in reverse : ");
    scanf("%s", iString);

    //Debug
    //printf("\n%s", array);

    //Increments limit until the array lenght is verified
    while(iString[count] != '\0')
    {
        count++;

        //Debug
        //printf("\n%d",i);
        //printf("\n%c",array[i]);
    }

    pos = count - 1;

    //Increases position i in reverse array while decreasing index on the input array,
    //adding the char to the reverse array
    for (i=0; i < count ; i++)
    {
        rString[i] = iString[pos--];

        //Debug
        //printf("\n\t%c", array[i]);
        //printf("\n%c", rArray[i]);
    }

    //Adds the end char to the Array
    rString[i] = '\0';

    //Prints the reversed array
    printf("Reverse Input : %s", rString);
    }

