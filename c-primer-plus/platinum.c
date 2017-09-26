#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    scanf("%f", &weight);

    value= 2 * weight;

    printf("weight: %.2f \n", weight);
    printf("value: %.2f \n", value);


    printf("hi 数字%d \n", 2343);
    printf("hi 浮点数 %.2f \n", 3.1415926);
    
    value = 3.563;
    /**
     * 保留两位小数 四舍五入
     */
    printf("%.2f \n", value);


    return 0;
}
