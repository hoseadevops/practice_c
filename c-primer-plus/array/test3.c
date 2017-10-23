#include <stdio.h>

/**
 * sizeof 计算以字节为单位的长度 可以利用sizeof 计算数组长度
 */
int main(void)
{
    int i_arr[] = {2,1,34,234,3543,53,45,34,1,2,3,4,5,6,6,7,8};

    for(int i=0; i< sizeof(i_arr)/sizeof(i_arr[0]); i++)
    {
        printf("%d \n", i_arr[i]);
    }

    return 0;
}
