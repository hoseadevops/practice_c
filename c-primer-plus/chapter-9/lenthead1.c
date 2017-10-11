#include <stdio.h>

#define NUM 10

void prSep(char, int);

int main(void)
{
    char sep = '-';
    printf("hi sep test \n");
    prSep(sep, NUM);
    printf("hi sep test \n");
    prSep(sep, NUM);
    printf("hi sep test \n");
    prSep(sep, NUM);
    printf("hi sep test \n");
    prSep(sep, NUM);
    printf("hi sep test \n");
    
    return 0;
}


void prSep(char sep, int num)
{
    for(int i=1; i<=num; i++)
    {
        printf("%c", sep);
    }
        printf("\n");
}
