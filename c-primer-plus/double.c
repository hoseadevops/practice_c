#include <stdio.h>

double ret(double);

int main(void)
{
    double x;
    double double_val = 100.22; 
                    x = ret(double_val);
    printf("%.2f \n", x);
    return 0;   
}

double ret(double val)
{
    return val;
}
