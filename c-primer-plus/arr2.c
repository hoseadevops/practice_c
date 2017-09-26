#include <stdio.h>

int main(void)
{
    int i_arr[5]  = {1,2,3,4,5};
    int i_arr1[2] = {[0]=2, 1};
    int i_arr_2[2];

    int i;
    for (i=0; i< 2; i++)
    {
        i_arr_2[i] = (i+1)*2;
    }

    printf("%d %d \n", i_arr[0], i_arr1[0]);
    printf("%d %d \n", i_arr_2[0], i_arr_2[1]);
//    printf("%d \n", i_arr[-1]);
//    printf("%d \n", i_arr[7]);

    return 0;
}
