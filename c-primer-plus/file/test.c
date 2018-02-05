#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv [])
{
    int ch;

    FILE *fp; // 文件指针

    unsigned long int count = 0;

    if(argc != 2)
    {
        printf("Usage filename %s \n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("can not open %s \n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while((ch = getc(fp)) != EOF)
    {
        putchar(ch);
        count++;
    }

    fclose(fp);

    printf("file %s %lu \n", argv[1], count);

    return 0;
}
