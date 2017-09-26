#include <stdio.h>

int main(void)
{
    float f_a = 2.1;
    double d_a = 2.1E-3;

    long double ld_a = 2.1E9;

    printf("%.2f - %e -%La   \n", f_a, d_a, ld_a);


    float f_max = 3.4E38 * 100.0f;

    printf("%f \n", f_max);
    
    return 0;
}
