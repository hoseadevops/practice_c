#include <stdio.h>

int main(void)
{
    char str[10];

    fgets(str, 10, stdin);

    puts(str);

    fputs(str, stdout);

    return 0;
}
