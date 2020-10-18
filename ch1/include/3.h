#ifndef CH1_3_H
#define CH1_3_H


/* c 符号常量
 *      #define name value
 * 好处
 *      1. 避免硬编码
 *      2. 复用
 *      3. 可读性高
 * 特点
 *      1. define定义的符号常量，实际上是一种"替换文本"。在预处理阶段，将使用value对应的替换文本把代码中包含符号常量name大的地方都替换。
 *      2. 替换文本可以是任何序列，而不局限于数字。
 */


#define ENV "online"
#define USER "wangzihao"


void use_symbol_const();


#endif
