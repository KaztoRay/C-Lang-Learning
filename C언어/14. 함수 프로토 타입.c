#include <stdio.h>

int sum(int a, int b);  // 함수 프로토 타입

int main(void) {

    int a = 1;
    int b = 2;

    print(sum(a, b));

    return 0;

}

int sum(int a, int b) {

    return a + b;

}