#include <stdio.h>

int main(void)
{
    float fl = 2.11;

    double dou = 2.11;

    long double ldou = 2.11;

    printf("%.3f %.3f %.3Lf \n", fl, dou, ldou);


    return 0;
}
