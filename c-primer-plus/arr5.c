#include <stdio.h>

int main(void)
{
    int i_arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    printf("%p \n%p \n%p \n", i_arr, &i_arr[0], &i_arr[0][0]);

    printf("%d \n", *(i_arr+1)[0]);

    printf("%d \n", **i_arr);


    return 0;
}
