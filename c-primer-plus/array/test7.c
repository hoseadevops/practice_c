#include <stdio.h>
#define YEAR 5
#define MONTH 12

int main(void)
{
    int i_arr[YEAR][MONTH] = {
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12}
    };

    for(int i=0; i< YEAR; i++)
    {
        printf("第%d年: ", i+1);
        for(int j=0; j < MONTH; j++)
        {
            printf("%d月", i_arr[i][j]);
            if(j+1 < MONTH)
            {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
