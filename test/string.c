#include <stdio.h>

int main()
{
    char name[] = {104,  101,  120,  105,  110,  103, '\0'};

    char str1[] = {"hexing"};

    char str2[] = "hexing";

    printf("%s %s %s \n", name, str1, str2);

    return 0;
}

