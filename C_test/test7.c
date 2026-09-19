#include <stdio.h>

int main() {
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    printf("line 1 - c 的值是 %d\n", c);//c = 31

    c += a; //c = c + a
    printf("line 2 - c 的值是 %d\n", c);//c = 52

    c -= a;//c = c - a
    printf("line 3 - c 的值是 %d\n", c);//c = 31

    c *= a; //c = c * a
    printf("line 4 - c 的值是 %d\n", c);//c = 651

    c /= a; //c = c / a
    printf("line 5 - c 的值是 %d\n", c);//c = 31 

    c = 200;//c = 1100 1000
    c %= a; //c = c % a
    printf("line 6 - c 的值是 %d\n", c);//c = 200 % 21 = 11

    //c = 11 = 0000 1011
    c <<= 2; //c = c << 2, c = 0000 1011 << 2 = 0010 1100 = 44 /c = c * 2^2 = 11 * 4 = 44
    printf("line 7 - c 的值是 %d\n", c);

    //c = 44 = 0010 1100
    c >>= 2; //c = c >> 2, c = 0010 1100 >> 2 = 0000 1011 = 11 /c = c / 2^2 = 44 / 4 = 11
    printf("line 8 - c 的值是 %d\n", c);
    




}