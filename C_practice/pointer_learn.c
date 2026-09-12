#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    system("chcp 65001 > nul");

    int var_runoob = 10;
    int *p;              // 定义指针变量
    p = &var_runoob;
 
   printf("var_runoob 变量的地址： %p\n", p);
   return 0;
}