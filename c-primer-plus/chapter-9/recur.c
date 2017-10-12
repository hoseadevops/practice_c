#include <stdio.h>

void ud(int);

int main(void)
{
    ud(1);
    return 0;
}



void ud(int i)
{
    printf("%d %p \n", i, &i);
    if(i < 4)
        ud(i+1);

    printf("%d %p \n", i, &i);
}
