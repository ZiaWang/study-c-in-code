#include <stdio.h>

#include "../include/2.h"


float convert_ht_to_st(float ht);


// 打印温度对照表
void print_temperature_comparison_table(int start, int end, int step){
    printf("ht, st\n");

    /* 声明
     *      声明，实际上就是告诉编译器，该变量的属性（类型）
     *
     * 注意：
     *      所有的变量必须先声明，然后才能使用。
     *      但是没有初始化，初始化的时候才会分配内存空间。
     *
     */
    float st;

    float ht = start;
    for (; ht <= end; ht+=step){
        st = convert_ht_to_st(ht);

        printf("%3.2f, %3.2f\n", ht, st);
    }
}


// 使用while实现
void print_temperature_comparison_table_use_while(int start, int end, int step){
    printf("ht, st\n");

    float st;

    float ht = start;
    while (ht <= end){
        st = convert_ht_to_st(ht);
        printf("%3.2f, %3.2f\n", ht, st);

        ht += step;
    }
}


void print_temperature_comparison_table_use_while_reverse(int start, int end, int step){
    printf("ht, st\n");

    float st;

    float ht = end;
    while (ht >= start){
        st = convert_ht_to_st(ht);
        printf("%3.2f, %3.2f\n", ht, st);

        ht -= step;
    }
}


float convert_ht_to_st(float ht){
    float st;

    // 右侧运算中包含浮点数和整数，因此在开始运算之前，会先将右侧的整形操作数转换成浮点数，然后在开始计算。
    // 为了方便阅读，可以在运算的时候，显式的指明数据的类型
    st = (ht - 32.0f) * 5 / 9;

    return st;
}
