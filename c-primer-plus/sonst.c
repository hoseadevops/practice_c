#include <stdio.h>

int main(void)
{
    double rates[5]        = {1.1, 2.2,  3.3, 4.4, 5.5};

    const double locked[4] = {0.01, 0.077, 0.111, 0.07};

    const double *pc = rates;
    
    pc = locked;
    pc = &locked[3]; 
    printf("%p \n", pc);
    

    return 0;
}
