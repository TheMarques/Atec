#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer;

    int line = 2,col = 3,i,j;
    int text1 =0,text2 = 0;
    int text3 = 0, text4 = 0;

    int matrix[2][3] = {{2,3,4},{6,7,8}};

    //a add to an existing file
    //r read from an existing file
    //w write on new file

    //verify if file exists
    if (fopen("newFile.txt", "r"))
    {
        printf("\nFile Exists");
        fpointer = fopen("newFile.txt", "r");
        fscanf(fpointer," %d\n %d",&text1,&text2);

        do{
            fscanf(fpointer," %d",&text3);
            printf("%d",text3);
            if(fscanf(fpointer," %d") == "\n"){
            fscanf(fpointer," %d",&text4);
            printf("%d",text4);
            }
        }while(fscanf(fpointer," %d") != "\n");
    }
    else{
    printf("Creating file\n");
    //Creates new file on variable fpointer
    fpointer = fopen("newFile.txt", "w");

    for(i = 0; i < line; i++){
        for(j = 0;j < col; j++){
            printf(" %d ", matrix[i][j]);
            //Writes message inside fpointer
            fprintf(fpointer ," %d ",matrix[i][j]);
        }
        printf("\n");
        fprintf(fpointer,"\n");
    }

    }

    printf(" %d\n %d", text1, text2);
    //Closes file
    fclose(fpointer);

    return 0;
}
