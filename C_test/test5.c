#include <stdio.h>

int main() {
   
    int a = 5;
    int b = 10;
    int c;

    c = a + b;//line 1
    printf("line 1: The sum of %d and %d is %d\n", a, b, c);

    c = a * b;//line 2  
    printf("line 2: The product of %d and %d is %d\n", a, b, c);

    c = b - a;//line 3
    printf("line 3: The difference between %d and %d is %d\n", b, a, c);

    c = b / a;//line 4
    printf("line 4: The quotient of %d divided by %d is %d\n", b, a, c);

    c = b % a;//line 5
    printf("line 5: The remainder of %d divided by %d is %d\n", b, a, c);

    c = a++;//line 6,先赋值后自增
    printf("line 6: After post-increment, a is %d and c is %d\n", a, c);    

    c = ++b;//line 7,先自增后赋值
    printf("line 7: After pre-increment, b is %d and c is %d\n", b, c);

    c = a--;//line 8,先赋值后自减
    printf("line 8: After post-decrement, a is %d and c is %d\n", a, c);

    c = --b;//line 9,先自减后赋值
    printf("line 9: After pre-decrement, b is %d and c is %d\n", b, c);

    a = 10;
    b = 20;

    if(a == b) {//line 10,使用==进行比较是否相等
        printf("line 10: a is equal to b\n");
    } else {
        printf("line 10: a is not equal to b\n");
    }

    if(a != b) {//line 11,使用!=进行比较是否不相等
        printf("line 11: a is not equal to b\n");
    } else {
        printf("line 11: a is equal to b\n");
    }

    if(a > b) {//line 12,使用>进行比较是否大于
        printf("line 12: a is greater than b\n");
    } else {
        printf("line 12: a is not greater than b\n");
    }

    if(a < b) {//line 13,使用<进行比较是否小于
        printf("line 13: a is less than b\n");
    } else {
        printf("line 13: a is not less than b\n");
    }

    if(a >= b) {//line 14,使用>=进行比较是否大于等于
        printf("line 14: a is greater than or equal to b\n");
    } else {
        printf("line 14: a is not greater than or equal to b\n");
    }

    if(a <= b) {//line 15,使用<=进行比较是否小于等于
        printf("line 15: a is less than or equal to b\n");
    } else {
        printf("line 15: a is not less than or equal to b\n");
    }

    if(a && b) {//line 16,使用&&进行逻辑与运算
        printf("line 16: a and b are both non-zero\n");
    } else {
        printf("line 16: either a or b is zero\n");
    }

    if(a || b) {//line 17,使用||进行逻辑或运算
        printf("line 17: either a or b is non-zero\n");
    } else {
        printf("line 17: both a and b are zero\n");
    }

    a = 0;
    b = 8;

    if(!(a && b)) {//line 18,使用!进行逻辑非运算
        printf("line 18: either a or b is zero\n");
    } else {
        printf("line 18: both a and b are non-zero\n");
    }

    return 0;
}