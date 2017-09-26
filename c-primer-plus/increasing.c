#include <stdio.h>

int main(void)
{
     int i=3;
     int j=4;
     int a = i++;
     int b = ++j;
     printf("%d, %d\n", a, b);
     
     return 0;
}
