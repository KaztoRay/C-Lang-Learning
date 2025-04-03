#include <stdio.h>

int main(void) {

    int num = 0;

    scanf("%d", &num);

    if (num == 1) {

        printf("1\n");

    } else if (num == 2) {

        printf("2\n");

    }

    else if (num) {

        printf("%d \n", num);

    } else {

        printf("0\n");
        printf("else\n");

    }

    return 0;

}