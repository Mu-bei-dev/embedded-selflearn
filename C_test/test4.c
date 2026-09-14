#include <stdio.h>

static int year =2026;
int main(){
    auto int mount;//auto存储类是所有局部变量的默认存储类，auto存储类的变量在函数调用结束后会被销毁
    static int month =1;//static存储类用于定义静态局部变量，静态局部变量在函数调用结束后不会被销毁
    register int day;//register存储类用于定义存储在寄存器中的局部变量，寄存器变量的访问速度比内存变量快，但不能对其取地址
    
    scanf("%d", &mount);
    printf("mount:%d\n", mount);

    while(month <= 12){
        printf("year:%d, month:%d\n", year, month);
        month++;
    }
    
    for(day = 1;day <= 31; day++){
        printf("day:%d\n", day);
    }
    return 0;
}