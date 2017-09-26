#include <stdio.h>
#include <string.h>

#define DENSIYT 62.6 

#define STR "hi define string"
#define HI "hello world!"

//void pf(char str);

int main(void)
{
    char sh[40];

    char str[40] = "hello string! ";

    scanf("%s", sh);

    printf("sizeof：%zd; strlen：%zd \n", sizeof(sh), strlen(sh));

    printf("sizeof 7：%zd \n", sizeof(7));
    
    printf("%s; %s", str, STR);
    
    return 0;
}

/*
void pf(char str)
{
    printf("%s \n", str);
}
*/
