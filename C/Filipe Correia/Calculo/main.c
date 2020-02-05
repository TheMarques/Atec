#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y){
return (x+y);
}

int Sub(int x, int y){
return (x-y);
}

int Mul(int x, int y){
return (x*y);
}

int Div(int x, int y){
return (x/y);
}

int main(int argc, char *argv[]){

    if (argc != 4){
        printf("Error. Invalid input parameters.");
        return 0;
    }

    //aoit reads string to int

    //checks if operations are known and runs then
    if (!strcmp(argv[1], "add")){
        printf("The result is : %d",   Add(atoi(argv[2]),atoi(argv[3])));
    }
    else if (!strcmp(argv[1], "sub")){
        printf("The result is : %d",   Sub(atoi(argv[2]),atoi(argv[3])));
    }
    else if (!strcmp(argv[1], "mul")){
        printf("The result is : %d",   Mul(atoi(argv[2]),atoi(argv[3])));
    }
    else if (!strcmp(argv[1], "div")){
        printf("The result is : %d",   Div(atoi(argv[2]),atoi(argv[3])));
    }else{
        printf("Unkown operation.. exiting program.");
    }
    return 0;
}
