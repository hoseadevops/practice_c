#include <stdio.h>

void up_and_down(int);

int main(void)
{

    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    printf("# - 级别 %d 指针 %p \n", n, &n);

    if ( n < 4 )
    { 
        up_and_down(n+1);
    }
    printf("# - 级别 %d 指针 %p \n", n, &n);
}
