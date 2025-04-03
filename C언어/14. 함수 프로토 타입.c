#include <stdio.h>

int sum(int a, int b);

int main(void) {

    int a = 1;
    int b = 2;

    print(sum(a, b));

    return 0;

}

int sum(int a, int b) {

    return a + b;

}