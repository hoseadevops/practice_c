#include <stdio.h>

int main(void)
{
    char c[2];
    // 读入一个单词
    //scanf("%s", c);
    // 获取整行
    //gets(c);
    //只读入最大长度的字符串
    fgets(c, 2, stdin);
    
    puts(c);
    
    return 0;
}
