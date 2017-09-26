#include <stdio.h>


int main(void)
{
    // float 别名 f
    typedef float f;

    f f_val = 3.14;

    printf("%-10.2f \n", f_val);

    return 0;
}
