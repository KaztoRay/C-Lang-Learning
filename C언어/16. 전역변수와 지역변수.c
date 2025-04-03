#include <stdio.h>

int global_a = 3;

int main(void) {

    int local_a = 30;

    printf("%d \n", local_a);
    printf("%d \n", global_a);

    return 0;

}