#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer, size_t);

int main(void)
{
    int i_x;
    float f_x;
    void *v_x;

    show_bytes((byte_pointer)&i_x, sizeof(int));
    
    show_bytes((byte_pointer)&f_x, sizeof(float));
    
    show_bytes((byte_pointer)&v_x, sizeof(void *));
 
    return 0;
}

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;

    for(i =0; i<len; i++)
    {
        printf(" %.2x", start[i]);

    }
    printf("\n");
}
