#include <stdio.h>
/**
 * this is hello.c
 */

void printfString(void);

int main(void)
{
    int dog_count, cat_count;

    dog_count=3 * 3;
    cat_count=4 * 4;

    printf("%d, %d \n", dog_count, cat_count);


    printfString();

    printf("hello world! \n");
    return 0;
}
void printfString()
{
    printf("hi i am a function \n");
}
