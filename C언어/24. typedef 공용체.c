#include <stdio.h>

typedef union position {

    int x, y;

} pos;

int main(void) {

    pos a;

    a.x = 20;

    printf("%d %d\n", a.x, a.y);

    a.y = 10;

    printf("%d %d \n", a.x, a.y);

    return 0;

}