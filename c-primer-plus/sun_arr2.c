#include <stdio.h>

int sum(int *, int *);

int main(void)
{
    int i_arr[5] = {1, 2, 3, 4, 5};
    
    printf("%d \n", sum(i_arr, i_arr+5));

    return 0;
}

int sum(int * start, int * end)
{
    int total = 0;
    while(start < end)
    {
        total += *start;
        start ++;
    }

    return total;
}
