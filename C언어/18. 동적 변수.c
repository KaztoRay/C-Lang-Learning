// 동적 변수는 힙(heap)이란 영역에서 메모리를 할당해서 사용한다.
#include <stdio.h>
#include <stdlib.h>

int main() {

    int* variable;  // 메모리 할당당

    variable = malloc(sizeof(int) * 2);  // 8바이트를 동적 변수에 할당한다. 4byte * 2

    free(variable);

}