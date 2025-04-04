#include <stdio.h>

int factorial(int num);

int main(void) {

    int result, number = 5;

    result = factorial(number);

    printf("%d \n", result);

}

int factorial(int num) {

    if (num == 1) {

        return 1;

    }

    return (num * factorial(num - 1));

}