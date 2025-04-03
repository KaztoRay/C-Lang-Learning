#include <stdio.h>

int main(void) {

    int a = 3;

    int result = a += 1;
    printf("%d \n", result);
    int result1 = a -= 2;
    printf("%d \n", result1);
    int result2 = a *= 3;
    printf("%d \n", result2);
    int result3 = a /= 2;
    printf("%d \n", result3);
    int result4 = a %= 3;
    printf("%d \n", result4);

    return 0;



}