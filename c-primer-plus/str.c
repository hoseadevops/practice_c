#include <stdio.h>

void pf(char *);

#define STR "string"

int main(void)
{
    char str[40];

    printf("Enter you name. \n");

    scanf("%s", str);

    printf("---------------\n");

    pf(str);

    printf("---------------\n");
 
    char *str_p;

    printf("指针:char *str_p=%p\n", str_p);

    return 0;
}

void pf(char *str){

    printf("hi %s \n", str);
}
