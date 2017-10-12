#include <stdio.h>

int main(void)
{
    int a = 1;

    int *p_a = &a;

    printf("%p %d %d\n", p_a, *p_a, a);


    return 0;
}
