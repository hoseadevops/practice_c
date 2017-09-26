#include <stdio.h>
#include <limits.h>
#include <float.h>


#define PI 3.1415926

int main(void)
{
    const float pi = 3.1415926;

    printf("%.2f # %.2f \n", PI, pi);
    
    printf("%d # %d \n", INT_MIN, INT_MAX);

    printf("%f # %f \n", FLT_MIN, FLT_MAX);

    return 0;
}
