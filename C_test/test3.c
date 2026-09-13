#include <stdio.h>
#include <string.h>


const int MAX = 100;//常量定义
const int MIN = 0;
int main() {
    int length;
    int MIN = 5;//局部变量定义,与全局变量同名,局部变量优先级高于全局变量
    length = MAX - MIN;


    int myint1 = 10;//10进制数
    int myint2 = 0213;//8进制数
    int myint3 = 0x1a;//16进制数

    long mylong = 10000L;//长整型数
    unsigned myuint = 100u;//无符号整型数
    float myfloat = 3.14f;//单精度浮点数
    double mydouble = 3.1415926;//双精度浮点数

    char mychar = 'a';//字符型数
    int myascii = (int)mychar;//字符型数转换为整型数
    char mystring[] = "hello world";//字符串型数,系统会自动在字符串末尾添加'\0'作为结束标志

    printf("length的值为:%d\n", length);
    printf("myint1的值为:%d,myint2的值为:%d,myint3的值为:%d\n", myint1, myint2, myint3);
    /*printf函数默认输出小数点后6位*/
    printf("mylong的值为:%ld,myuint的值为:%u,myfloat的值为:%f,mydouble的值为:%f\n", mylong, myuint, myfloat, mydouble);
    printf("输出myfloat的值为:%.10f\n", myfloat);//输出小数点后10位
    printf("输出mydouble的值为:%.10f\n", mydouble);//输出小数点后10位

    printf("MIN的值为:%d\n", MIN);//局部变量MIN的值为5,全局变量MIN的值为0,输出局部变量MIN的值

    printf("a的ASCII码为:%d\n", myascii);
    printf("mystring的长度和占用空间分别为:%zu和%zu\n", strlen(mystring), sizeof(mystring));
    printf("mystring的内容为:%s\n", mystring);
    printf("hello\t world\n\n");

    return 0;
}