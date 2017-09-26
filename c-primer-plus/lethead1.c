#include <stdio.h>

#define WIDTH 40
#define BAR '*'

void starBar(char, short);

int main(void)
{
    starBar(BAR, WIDTH);

    printf("             hello world! \n");

    starBar(BAR, WIDTH);

    return 0;
}

void starBar(char ch, short width)
{
    short i;

    for(i = 1; i <= width; i++)
    {
        printf("%c", ch);
    }

    printf("\n");
}
