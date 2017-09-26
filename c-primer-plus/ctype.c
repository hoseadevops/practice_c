#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char i_a = 'a';

    _Bool b_a = isalnum(i_a);

    printf("%b \n", b_a);

    return 0;
}
