#include <stdio.h>

int main(void)
{
    int i_arr[] = {1,2,3,4,5};

    int b= *(i_arr+2);

    printf("%d  %p \n", b, &b);


    printf("%p %d \n", i_arr, *i_arr);


    return 0;
}
