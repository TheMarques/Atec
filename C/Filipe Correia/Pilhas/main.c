#include <stdio.h>
#include <stdlib.h>
#define tamanhoMax 100


typedef struct{
    int item[tamanhoMax];
    int topo;
}TPilha;

void TPilha_iniciar(TPilha *p){
p->topo=-1;
}

int TPilha_vazia(TPilha *p){
    if (p->topo==-1)
    {
        return 1;
    }else{
        return 0;
    }
}
int TPilha_cheia(TPilha *p){
    if (p->topo==tamanhoMax-1)
    {
        return 1;
    }else{
        return 0;
    }
}

void TPilha_inserir(TPilha *p, int valor){
    if (TPilha_cheia(p) == 1){
        printf("\nErro: Pilha Cheia.");
    }else{
        p->topo++;
        p->item[p->topo]=valor;
    }
}

int TPilha_retirar(TPilha *p){
   int valor;
   if (TPilha_vazia(p)==1){
        printf("\nErro: Pilha Vazia.");
   }else{
    valor = p->item[p->topo];
    p->topo--;
    return valor;
   }
}

int main()
{
int valor;
TPilha pilha[tamanhoMax];
TPilha_iniciar(pilha);
TPilha_inserir(pilha,2);
valor = TPilha_retirar(pilha);
printf("\nRetirou o valor %d da pilha\n", valor);
valor = TPilha_retirar(pilha);
return 0;
}
