#include <stdio.h>

int sum(int *, int *);

int main(void)
{
    int i_arr[5] = {1,2,3,4,5};
    
    for(int i=0; i<=10; i++)
    {
        printf("%p \n",  &i_arr[i]);
    }

    printf("%zd-%zd \n", sizeof(i_arr), sizeof(int));

    int size     = sizeof(i_arr)/sizeof(int);

    int i_total  = sum(i_arr, (i_arr + size));

    printf("------------------------------------\n");
    
    printf("%d \n",  i_total);


    printf("%ld \n", (&i_arr[3] - &i_arr[4]));


    return 0;
}


int sum(int * start, int * end)
{
    int temp = 0;
    
    printf("end # %p = %d \n",  end, *end);
    
    while(start != end)
    {
        printf("%p = %d \n",  start, *start);
        // 相同优先级 结合律 从右向左 temp += *(start++);
        // i++ ：先运算后加；++i：先加后运算
        temp += *start++;
    }

    return temp;
}


