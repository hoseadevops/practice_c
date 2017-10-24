#include <stdio.h>

int main(void)
{
    //数组名 是首元素的地址
    int i_arr[] = {1,2,3,4,5};
    int *i_p;
    
    printf("%p \n", i_p);
    
    i_p = i_arr;
    
    printf("%p \n", i_arr);
    printf("%p \n", i_p);
    i_p = &i_arr[2];

    printf("%p \n", i_p);
    printf("%p \n", i_p+1);

    return 0;
}
