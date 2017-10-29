#include <stdio.h>

int main(void)
{
    int i_arr[] = {1,2,3,4,5};
    
    int *p1, *p2;

    p1 = i_arr;

    p2 = &i_arr[3];

    printf("%ld \n", p2-p1);
    printf("%ld \n", p1-p2);

    return 0;
}
