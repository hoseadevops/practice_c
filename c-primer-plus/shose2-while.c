#include <stdio.h>

#define ADJUST 7.31

int main(void)
{
    const double SCALE = 0.333;
    double foot, shoe;
    
    shoe = 3.0;

    while(shoe < 18.5){

        foot = SCALE * shoe + ADJUST;

        printf("%-10.2f  %-15.2f \n", shoe, foot);
    
        shoe += 1.0;
    }

    return 0;
}
