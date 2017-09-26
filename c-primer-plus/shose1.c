#include <stdio.h>

#define B 3.11

int main(void)
{

    const double SCALE = 3.33;

    double shose, foot;

    shose = 9;

    foot = SCALE * shose + B;

    printf("%-10.1f %-15.2f \n", shose, foot);


    return 0;
}
