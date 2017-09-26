#include <stdio.h>

#define MSG "hello world!"

int main(void)
{
    const char c_str[] = "hello world!";
    const char * c_p = "hello world!";
    
    printf("%p \n", c_p);
    printf("%p \n", MSG);
    printf("%p \n", c_str);

    return 0;
}
