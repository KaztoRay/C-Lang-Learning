#include <stdio.h>

int main(void) {

    int num = 0;

    scanf("%d", &num);

    while (num) {   // 조건이 거짓이 될 때까지 실행한다.

        prinf("%d\n", num--);

    }

}