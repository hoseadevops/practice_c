#include <stdio.h>

int main(void)
{
    int x = 30;
    
    while(x++ < 33)
    {
        int x = 100;
        x++;
        printf("%d = %p \n", x, &x);
    }

    printf("%d = %p \n", x, &x);
    
    return 0;
}
