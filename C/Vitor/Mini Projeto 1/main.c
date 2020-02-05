#include <stdio.h>
#include <string.h>
#include <math.h>

int OrderBy()
{
    char w[3][20];
    int i;
    int compare;
    char max[20];

    for (i = 0; i < 3; i++)
    {
        printf("Words#%d :", i);
        scanf("\n%s", w[i]);
    }

    max = w[0];
    for (i = 0; i < 3; i++)
    {
        if (max < w[i]){
            max = w[i];
            i = 0;
            w[i-1] = max;
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("\n%s", w[i]);
    }
    return 0;
}



int main(int argc, char const *argv[])
{
    OrderBy();
    return (0);
}
