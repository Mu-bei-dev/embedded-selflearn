#include <stdio.h>
#define LENGTH sizeof(balance) / sizeof(balance[0])

double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};

int main() {

    int i;
    int length;

    length = LENGTH;

    //length = sizeof(balance) / sizeof(balance[0]);
    printf("balance length : %d\n", length);

    printf("balance 3 : %.2f\n", balance[3]);

    for (int i = 0; i < 5; i++) {
        printf("Balance %d: %.2f\n", i, balance[i]);
    }

    return 0;
}