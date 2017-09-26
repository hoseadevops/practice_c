#include <stdio.h>

int main(void)
{
    int i_arr1[2][2];

    int i_arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int i_arr2[2] = {1, 2};
    int *i_p      = &i_arr2[0]; 

    printf("%p \n",i_p);

    printf("%p \n",i_arr2);
    
    printf("%p \n",&i_arr2[0]);
    printf("%d  %d \n", i_arr[0][1],  i_arr[1][2]);

    return 0;
}
