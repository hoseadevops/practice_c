#include <stdio.h>

/*
 * rand0.c 一起编译 
 * gcc r_drive0.c rand0.c && ./a.out
 *
 * */
extern unsigned int rand0(void);

int main(void)
{
    for(int count = 0; count < 5; count ++)
    {
        printf("%d \n", rand0());   
    }
}
