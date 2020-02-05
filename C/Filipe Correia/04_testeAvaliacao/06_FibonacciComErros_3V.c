

/* Perante o codigo que é apresentado, que tem como objectivo apresentar a sequência de Fibonacci
até ao valor introduzido pelo utilizador. Detecta e corrige os varios erros de forma a que o
programa corra correctamente.

Boa sorte
*/



int main (){

    int Num1, Num2, LimiteFibonacci, ProximoFibonacci;

    printf("\n Sequencia Fibonacci \n");
    printf("\n Escolha o valor maximo da sequencia:\t");
    scanf("%d", &LimiteFibonacci);

    Num1=0;
    printf("%d\n",Num1);
    Num2=1;
    printf("%d\n",Num2);
    for(ProximoFibonacci=0;ProximoFibonacci<=LimiteFibonacci;ProximoFibonacci++){
        ProximoFibonacci=Num1+Num2;
        if(ProximoFibonacci<=LimiteFibonacci)printf("%d\n",ProximoFibonacci);
        Num1=Num2;
        Num2=ProximoFibonacci;
    }

    return 0;
}
