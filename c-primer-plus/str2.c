#include <stdio.h>

int main(void)
{
    char str[] ="hello world!";

    char *str1 ="hello world!";

    printf("%c \n", *(++str1));
    printf("%c \n", *str);

    return 0;
}
