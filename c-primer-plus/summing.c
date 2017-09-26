#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;

    int status;
    status = scanf("%ld", &num);

    printf("enter integer(q to quit) \n");

    while(status == 1)
    {
        sum += num;
        printf("enter %ld next integer(q to quit) \n", sum);
        status = scanf("%ld",  &num);
    }

    return 0;
}
