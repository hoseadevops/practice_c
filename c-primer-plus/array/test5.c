#include <stdio.h>

int main(void)
{
    int i_arr[] = {1,2,3,4,5,6,7,8,9};

    int num = sizeof(i_arr)/sizeof(i_arr[0]);

    for(int i=0;i < num; i++)
    {
        i_arr[i] =  i_arr[i]  * 2;
        
        printf("%d \n", i_arr[i]);
    }

    return 0;
}
