#include <stdio.h>

int main(void)
{
    char size = sizeof(int);

    size_t size_t_float = sizeof(float);

    printf("%zd  %zd \n", size, size_t_float);

    return 0;
}
