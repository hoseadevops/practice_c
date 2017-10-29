#include <stdio.h>

int main(void)
{
    int i_arr[] = {1,2,3,4,5};

    int *p1, *p2, *p3;

    p1 = i_arr;
    p2 = &i_arr[2];

    printf("%p %d %p \n", p1, *p2, &p1);

    return 0;
}
