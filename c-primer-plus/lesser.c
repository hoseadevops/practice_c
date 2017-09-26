#include <stdio.h>

int imin(int, int);

int main(void)
{
    int arg1, arg2;

    while(scanf("%d %d", &arg1, &arg2) == 2)
    {
        printf("%d %d %d", arg1, arg2, imin(arg1, arg1));
    }
    return 0;
}

int imin(a, b)
{
    if(a > b){
        return a;
    }else{
        return b;
    }
}

