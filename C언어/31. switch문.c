#include <stdio.h>

int main(void) {

    int num = 0;

    scanf("%d", &num);

    switch (num) {

        case 1:

            printf("1\n");
            break;

        case 2:

            printf("2\n");
            break;

        default:

            printf("default\n");

    }

    return 0;

}