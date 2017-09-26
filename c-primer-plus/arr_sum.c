#include <stdio.h>

int sum(int *);

int main(void)
{
    int i_arr[] = {1, 2, 3, 4, 5};
    
    int total;

    total       = sum(i_arr);

    printf("%d \n", total);


    return 0;
}

int sum(int * arr)
{
    int i;
    int total = 0;
    for(i=0; i<5; i++)
    {
        total += arr[i]; 
    }
    return total;
}
