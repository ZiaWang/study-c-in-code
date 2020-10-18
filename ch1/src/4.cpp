#include <stdio.h>

#include "../include/4.h"


void use_getchar(){
    printf("input a char >>>: ");

    // getchar返回的是ascii码表中字符对应的数字
    int c = getchar();

    printf("%d", c);
}


void use_putchar(){
    int ret = putchar(100);
    printf("%d", ret);  // 100
}
