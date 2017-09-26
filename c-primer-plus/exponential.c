#include <stdio.h>

#define QI_PAN_COUNT 64       // 棋盘方格数

int main(void)
{
    const double CROP = 2E16; // 世界小麦的年产量
    double now        = 1.0;
    double total      = 1.0;
    short count       = 1;

    while(count < QI_PAN_COUNT)
    {
        count += 1;
        now = now * 2.0;
        total += now;

        printf("%d 格子 小麦 %20.2e  总计 %20.2e \n", count, now, total);
    }

    return 0;
}
