//
//  main.c
//  helloC
//
//  Created by 贺兴 on 16/11/7.
//  Copyright (c) 2016年 贺兴. All rights reserved.
//

#include <stdio.h>

int main(void) {
    // insert code here...
    float weight;
    float value;
    scanf("%f", &weight);
    value = 770 * weight;
    printf("haha 这是一个c语言程序 $%.2f.\n", value);
    return 0;
}
