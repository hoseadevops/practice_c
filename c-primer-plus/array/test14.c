#include <stdio.h>

int main(void)
{
    int i_arr[] = {1,2,3,4,5};

    //const int *p1 = i_arr;
    int *p1 = i_arr;
    
    p1[1] = 22;
    
    printf("%d \n", i_arr[1]);

    return 0;
}
