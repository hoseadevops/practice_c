# include <stdio.h>

int power(int m, int n);

int main()
{
    printf("%d \n", power(2, 8));   
}

int power(int m, int n)
{
    int start = 1;
    int value = 1;
    for(start=1; start <=n; ++start ){
        value *= m;
    }

    return value;
}
