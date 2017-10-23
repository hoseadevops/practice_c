#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i_arrp[SIZE] = {1, [4]=22, [1]=2, [3]=2};

    for(int i=0; i<SIZE; i++)
    {
        printf("%d \n", i_arrp[i]);
    }
    return 0;
}
