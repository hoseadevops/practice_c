#include <stdio.h>

#define MSG "字符串"
#define MAX_LENGTH 81

int main(void)
{
    char str_arr[10] = {'A', 'B', 'C', 'D', 'E', '\0'};
    char str[10]  = "abcde";
    const char *cp = "const char *p";
    puts("输出字符串");
    puts(MSG);
    puts(str_arr);
    puts(str);
    puts(cp);


    printf("%s %p %c \n", "we", "are", *"hexing");

    printf("%c \n", * str_arr);

    printf("%c \n", * (str_arr+1));


    printf("%c \n", str_arr[1]);

    return 0;
}
