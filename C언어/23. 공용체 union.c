// 공용체는 구조체랑 한 가지 차이점만 가진다.
    // 구조체는 변수의 크기만큼 할당된다면, 공용체는 가장 큰 자료형 만큼만 할당하고 공용해서 사용한다.

#include <stdio.h>

union position {

    int x, y;

};

int main(void) {

    union position a;

    a.x = 20;

    printf("%d %d \n", a.x, a.y);

    a.y = 10;

    printf("%d %d \n", a.x, a.y);

    return 0;

}