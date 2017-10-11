#include <stdio.h>

int main(void)
{
    int a;
    int b;

    while(scanf("%d %d", &a, &b) == 2)
    {
        printf("a+b=%d \n", (a+b));
    }
    
    return 0;
}
