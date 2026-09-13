#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    /*基本数据类型及其存储大小*/
    printf("char类型的存储大小为: %lu\n", sizeof(char));//字符型，存储大小为1字节

    printf("int类型的存储大小为: %lu\n", sizeof(int));//整型，存储大小为4字节

    printf("short类型的存储大小为: %lu\n", sizeof(short));//短整型，存储大小为2字节

    printf("long类型的存储大小为: %lu\n", sizeof(long));//长整型，存储大小为4字节

    printf("float类型的存储大小为: %lu\n", sizeof(float));//单精度浮点型，存储大小为4字节

    printf("double类型的存储大小为: %lu\n", sizeof(double));//双精度浮点型，存储大小为8字节

   /*float类型的最大值、最小值和精准度*/
    printf("float类型的最大值为: %e\n", FLT_MAX);
    printf("float类型的最小值为: %e\n", FLT_MIN);
    printf("float类型的精准度为: %d\n", FLT_DIG);
    /*double类型的最大值、最小值和精准度*/
    printf("double类型的最大值为: %e\n", DBL_MAX);
    printf("double类型的最小值为: %e\n", DBL_MIN);
    printf("double类型的精准度为: %d\n", DBL_DIG);
    return 0;
}