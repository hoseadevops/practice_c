#include <stdio.h>

int main(void)
{

    for(int i=0; i<10; i++)
    {
        int a = 5;
        printf("%d=%p \n", i, &i);
        printf("%d \n", a);
    }
    // 块scope 以花括号为例 循环语句 内声明的变量 花括号外面 不能用
    //printf("%d", i);
    //printf("%d \n", a);
    
    return 0;
}
