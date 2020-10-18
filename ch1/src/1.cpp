#include <stdio.h>

#include "../include/1.h"


void hello_world(){

    // 用双引号括起来的字符序列是是一个字符常量。
    // \n 是一个字符，类似的还有\t、\d、\\等
    printf("hello world!\n");
}


void try_excape_invalid_char(){
    printf("\c");           // 只会输出一个c，不会报错
}
