#include <stdio.h>

extern int addnum1;//全局变量声明
extern int addnum2;

int addtwonum(){
    return addnum1 + addnum2;
}