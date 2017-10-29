#include <stdio.h>
#define SIZE 5

int sum(int *, int *);

int main(void)
{
    int i_arr[SIZE] = {1,2,3,4,5};
    
    int total = sum(i_arr, i_arr+SIZE);

    printf("%p \n", &i_arr[SIZE-1]);

    printf("%d \n", total);

    return 0;
}


int sum(int * start, int * end)
{
    int total  = 0;
    while(start < end)
    {
        total += *start;
        start++;
    }

    return total;
}
