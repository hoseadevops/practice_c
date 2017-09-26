#include <stdio.h>

int main(void)
{
    int a = 12;
    long int b = 12;
    float d = 12.00;
    double e = 12.00;
    char f = 'F';

    int int_size_of;
    int long_size_of;
    int float_size_of;
    int double_size_of;
    int char_size_of;

    int_size_of = sizeof(a);
    long_size_of = sizeof(b);
    float_size_of = sizeof(d);
    double_size_of = sizeof(e);
    char_size_of = sizeof(f);
    
    printf("%d - %d - %d - %d - %d \n", int_size_of, long_size_of, float_size_of, double_size_of, char_size_of);
    printf("%zd \n", sizeof(int));
    printf("%zd \n", sizeof(long));
    printf("%zd \n", sizeof(char));
    printf("%zd \n", sizeof(double));
    printf("%zd \n", sizeof(float));
    printf("%zd \n", sizeof(short));
    printf("%zd \n", sizeof(_Bool));
    return 0;
}
