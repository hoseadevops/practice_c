#include <stdio.h>

void pf(void);

int main(void)
{
    for(int i=1; i <=3;i++)
    {
        pf();
    }

    return 0;
}

void pf(void)
{
    static int i = 1;
    
    int y =1;

    printf("%d  %d \n", i++, y++);
}
