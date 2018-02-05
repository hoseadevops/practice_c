#include <stdio.h>
#include <string.h>

#define MEN_MIDU 62.4

int main(void)
{
    float weight, volume;

    int size, letters;

    char name[40];

    scanf("%s", name);

    scanf("%f", &weight);

    size = sizeof(name);
    letters = strlen(name);
    volume = weight / MEN_MIDU;


    printf("%zd %f %s %f %d", size, weight, name,volume, letters);

    return 0;
}
