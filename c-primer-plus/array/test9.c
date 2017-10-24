#include <stdio.h>

int main(void)
{
    int i_arr[12] = {31,28,31,30,31,30,31,30,30,29,31,30};

    for(int i=0; i < 12; i++)
    {
        printf("%2d月有 %d 天\n", i+1, *(i_arr+i));
    
    }

    return 0;
}
