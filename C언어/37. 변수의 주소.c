// 전역 외부 정적 변수는 주소가 바뀌지 않는다.
    // 지역 변수의 주소는 바뀐다. 즉, 스택의 주소는 바뀐다.

#include <stdio.h>

int* global_variable;

int main() {

    int* localvariable = NULL;
    int** pointer = &global_variable;
    int*** pointer2 = &localvariable;

    printf("%p %p \n", pointer, pointer2);

    return 0;

}