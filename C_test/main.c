#include <stdio.h>
#define X 5         //宏定义

//函数声明
int add(int a, int b);

int main() {

    int num1, num2, sum1, sum2;//变量声明
    /*用户输入*/
    printf("请输入两个整数：");//编译时，加上-fexec-charset=GBK，否则运行时，输出中文会乱码
    scanf("%d %d", &num1, &num2);

    if(num1 < 0 || num2 < 0){      //判断输入的数是否为负数
        printf("输入的数不能为负数！\n");
        return 1; // 返回错误码
    }

    sum1 = add(num1, num2);//函数调用
    printf("两个数的和为：%d\n", sum1);

    sum2= X + 10; //宏定义的使用
    printf("宏定义X+10的值为: %d\n", sum2);

    printf("Hello, World!\n");     //第一个C程序

    return 0;

}

//函数定义
int add(int a, int b) {
    return a + b;
}