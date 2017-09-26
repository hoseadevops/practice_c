#include <stdio.h>

int main(void)
{
    // 初始化
    const int i_arr[10] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9};

    //i_arr[9] = 11;


    char c_arr[4] = {'A', 'B'};

    float f_arr[2] = {2.11, 2.0};


    double d_arr[] = {2.1, 3,1};


    printf("%d \n", i_arr[9]);

    printf("%c \n", c_arr[1]);

    return 0;
}
