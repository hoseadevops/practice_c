#include <stdio.h>

#include <stdlib.h>

int main(void)
{
    int ch;
    FILE * fp;
    char fname[50];

    printf("the name of file is: \n");

    scanf("%s", fname);

    fp = fopen(fname, "r"); // 打开待读取文件

    if(fp == NULL)
    {
        printf("failed to open file %s \n", fname);
        exit(1);
    }

    while((ch = getc(fp)) != EOF){
        putchar(ch);
    }

    fclose(fp); // 关闭文件

    return 0;

}
