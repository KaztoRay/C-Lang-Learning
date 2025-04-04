#include <stdio.h>

typedef struct position {

    int x, y;

} pos;

int main(void) {

    pos x = { 20, 10 };

    pos* x_pointer = &x;

    printf("%d %d\n", x.x, x.y);
    printf("%d %d\n", (*x_pointer).x, (*x_pointer).y);

    printf("%d %d \n", x_pointer->x, x_pointer->y);

    return 0;

}