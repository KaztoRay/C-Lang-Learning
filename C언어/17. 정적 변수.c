// 정적 변수는 값이 함수가 끝나도 바뀌지 않는다.

#include <stdio.h>

int test() {

    static int static_variable = 0;

    static_variable = static_variable + 1;

    return static_variable;

}

int main(void) {

    printf("%d \n", test());    // 1
    printf("%d \n", test());    // 2
    printf("%d \n", test());    // 3
    printf("%d \n", test());    // 4
    printf("%d \n", test());    // 5

}