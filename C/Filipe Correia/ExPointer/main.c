#include <stdio.h>

void fibonacci(int *pfib, int i){
    *(pfib+i)=*(pfib+i-2)+*(pfib+i-1);
}

int main (){

    int i, fib[20];
    fib[0] = 0;
    fib[1] = 1;

    for (i=2;i<20;i++){
        fibonacci(fib, i);
    }

    for (i=0;i<20;i++){
        printf("\n[%d] \t %p \t %d\n", i+1, &fib[i], fib[i]);
    }
    return 0;
}
