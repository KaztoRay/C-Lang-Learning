// goto는 레이블 : 과 함꼐 사용된다.
    // 이름: 의 형식으로 레이블의 이름을 지정할 수 있고 goto 레이블이름; 이렇게 사용한다.
        // 사용시 그 A:의 코드로 이동한다. (줄 이동)

#include <stdio.h>

int main(void) {

    goto A;
    printf("1");    // 건너뛴다.

A:

    printf("2");    // 2가 출력된다.

    return 0;

}