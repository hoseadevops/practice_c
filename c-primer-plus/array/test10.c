#include <stdio.h>

int sum(int *, int);

//int sum(int [], int);

int main(void)
{
    int i_arr[] = {1,2,3,4,5,6,7,8};
    //数组长度
    int num = sizeof(i_arr)/sizeof(i_arr[0]);

    int total = sum(i_arr, num);

    printf("%d\n", total);

    return 0;
}

//int sum(int arr[], int num)
int sum(int * arr, int num)
{
    //指针长度
    int size = sizeof(arr);

    printf("size : %d \n", size);
    
    printf("%d \n", num);
    printf("%d \n", *arr);
    int total = 0;  
    int t = 0;
    for(int i=0; i< num; i++)
    {
        total +=arr[i];
        t += *(arr+i);
    }

    printf("%d \n", t);

    return total;
}
