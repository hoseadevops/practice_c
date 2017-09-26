#include <stdio.h>

void interechanger(int *, int *);

int main(void)
{
    int x = 1;
    int y = 2;
    
    printf("原本的x、y 值分别为 %d, %d \n", x, y);

    interechanger(&x, &y);
    
    printf("改变的x、y 值分别为 %d, %d \n", x, y);
 
    return 0;
}


void interechanger(int * xp, int * yp)
{
    *xp = 2;
    *yp = 1;
}
