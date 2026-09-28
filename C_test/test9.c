#include <stdio.h>

enum DAY {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
}day;

int main(){
    int i;
    int shu[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
    enum color {red = 1, green, bule};
    enum color favorite_color;

    printf("请输入你喜欢的颜色: 1.red 2.green 3.bule\n");
    scanf("%u", &favorite_color);

    switch (favorite_color)
    {
    case red:
        /* code */
        printf("你喜欢红色\n");
        break;
    
    case green:
        printf("你喜欢绿色\n");
        break;

    case bule :
        printf("你喜欢蓝色\n");
        break;
    
    default:
        printf("你有其他喜欢的颜色\n");
        break;
    }
    day = WED;
    printf("day is %d\n", day);
    day = FRI;
    printf("day is %d\n", day);

    for(i = 0; i < 9; i++){
        printf("i is %d\n", i);
        printf("shu is %d\n",shu[i]);
    }
    for(day = MON; day <=SUN; day++){
        printf("枚举元素有：%d\n", day);
    }

    int a = 2;
    enum DAY weekend;
    weekend = (enum DAY) a;
    printf("weekend:%d\n",weekend);
    /*for(; ;){
        printf("该循环会一直进行下去\n");
    }*/
    return 0;

}