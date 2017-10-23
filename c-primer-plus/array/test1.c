#include <stdio.h>

int main(void)
{
    const int i_arr[5] = {1,2,3,4,5};

    for(int i=0; i<5; i++)
    {
        printf("%d \n", i_arr[i]);
    }
    
    return 0;
}
