#include <stdio.h>

int main(void)
{
    int i_arr[] = {1,2,3,4,5,6,7,8};

    int i_arr_size = sizeof(i_arr)/sizeof(i_arr[0]);

    for(int i=0; i<i_arr_size; i++)
    {
        printf("%d \n", i_arr[i]);
    }

    return 0;
}
