#include <stdio.h>

int main(void)
{
    char c_arr[4] = {'1', 'B', 'c', 'D'};
    char c_arr1[5] = {'1', 'B', 'c', 'D','\0'};
    char c_str[5] = "hello";
    char * str    = "hi";

    char c_str1[]= "这是一个字符串";
 
    printf("%c%c%c%c \n", c_arr[0], c_arr[1], c_arr[2], c_arr[3]);
    puts(c_arr);
    puts(c_str);
    puts(str);
    puts("\n---------------\n");
    
    printf("%c \n", *"cab");
    puts(c_arr1);
    puts(c_str1);


    return 0;
}
