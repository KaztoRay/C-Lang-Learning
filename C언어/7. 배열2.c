#include <stdio.h>

int main(void) {

    int score[5];

    score[0] = 100;
    score[1] = 90;
    score[2] = 80;
    score[3] = 70;
    score[4] = 60;

    for (int i = 0; i < 5; i++) {

        printf("%d번쨰 사람의 점수는 %d이다. \n", i + 1, score[i]);

    }

}