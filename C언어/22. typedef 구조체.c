// typedef로 형을 지정해서 편하게 사용한다.

#include <stdio.h>

typedef struct position
{
    int x, y;
} pos;

int main(void) {

    pos a;

    a.x = 10, a.y = 20;

    printf("%d %d\n", a.x, a.y);

}