// 포인터는 자료형* 형태로 *를 붙여서 만든다.
    // 포인터에 값을 넣을 때는 *변수로 입력을 받는다.

#include <stdio.h>

int main(void) {

    int a;

    int* pointer_a;

    a = 5;

    pointer_a = &a;

    *pointer_a = 1;

}