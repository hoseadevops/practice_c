#include <stdio.h>

int main(void)
{
    char c_arr[5] = {[2]='A', 'B'};

    printf("%c %c %c \n", c_arr[0], c_arr[1], c_arr[2]);



    int i_arr_two[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    printf("%d \n", i_arr_two[1][0]);

    return 0;
}
