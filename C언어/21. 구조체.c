// 구조체는 하나 이상의 변수 (자료형)을 묶어서 하나의 새로운 변수를 지정한다.
    // 간단하게 배열처럼 변수 (자료형)을 구조로 모아서 새로운 형을 만든다.
        // 배열은 하나의 자료형을 테이프 형태로 나열하지만 구조체는 자료형을 만든다.

// 데이터를 구성하는 가장 작은 단위가 필드고 필드가 두 개 이상 모여 레코드를 구성된다.
    // C언어에서는 레코드를 구조체라고 하고, 레코드를 구성하고 있는 필드들을 구조체의 멤버라고 한다.

#include <stdio.h>

struct position {

    int x, y;

};

int main(void) {

    struct position a;

    a.x = 10, a.y = 20;

    printf("%d %d \n", a.x, a.y);

    return 0;

}