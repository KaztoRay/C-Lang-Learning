// 문자열의 끝을 나타낼 때는 \0으로 끝을 0으로 해주어야 한다.

#include <stdio.h>

int main(void) {

    char string[6];

    string[0] = 'H';
    string[1] = 'E';
    string[2] = 'L';
    string[3] = 'L';
    string[4] = 'O';
    string[5] = '\0';

    printf(string);

}