#include <stdio.h>

int main(void)
{
    int num = 9;
    float* p_num = &num;
    printf("%d \n", num);
    printf("%f \n", *p_num);

    *p_num = 9.0;


    printf("%d \n", num);
    printf("%f \n", *p_num);


    return 0;
}
