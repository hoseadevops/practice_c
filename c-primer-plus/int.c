#include <stdio.h>

int main(void)
{
    float f = 0.12E1;

    int  num = 100;

    printf("%f \n", f);


    printf("%d - %d - %d \n", 10, 12,14);
    
    printf("十进制：%d, 八进制: %o, 十六进制: %x \n", num, num, num);


    printf("十进制：%d, 八进制: %#o, 十六进制: %#x \n", num, num, num);


    return 0;
}
