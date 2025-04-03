// 열거형의 경우, 변수로 사용할 수도 있고, 아니면 그 형자체로 사용할 수도 있다.

#include <stdio.h>

enum Numbers {

    One = 1,
    Two, 
    Three,
    Four,
    Five,
    Six,
    Seven

};

int main(void) {

    enum Numbers Num = One;

    printf("%d \n", Num);

    printf("%d \n", One);

    printf("%d \n", Two);

    return 0;

}