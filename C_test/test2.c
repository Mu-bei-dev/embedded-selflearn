#include <stdio.h>

int addnum1 = 1;//全局变量
int addnum2 = 2;
int addtwonum();
int main(void){
    int sum;
    sum= addtwonum();
    printf("sum = %d\n", sum);
    return 0;

}