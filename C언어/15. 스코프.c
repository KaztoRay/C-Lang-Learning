// 변수는 선언된 블록 안에서만 사용할 수 있고, 블록 바깥에서는 사용할 수 없다.

#include <stdio.h>

int main(void) {

    int a = 10;

    printf("%d \n", a);

    {

        int a = 30;

        printf("%d \n", a);

    }

}