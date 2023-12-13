#include <stdio.h>

// 여기에 정수 값 N을 전달받아 N값 이상이며 N의 자리수 보다 한 자리 큰 최소 정수 값을 출력하는 함수를 선언합니다.
// N 값에 대한 N 이상, 한자리수 이상의 최소 값은 다음과 같습니다.
//
// N		값
// 1		1
// 9		10
// 10		10
// 99		100
// 100		100
// 101		1000
// 999		1000
// 3455		10000
int minMax(int N);

int main() {

    int N = 0;
    printf("입력 : ");

    if (scanf("%d", &N) == 1) {

        // 여기에 정수 값 N의 자리수를 구하는 함수를 호출합니다.
        // N의 자리수를 출력합니다.
        printf("%d\n", minMax(N));
    } else {
        printf("잘못 입력하였습니다.\n");
    }

    printf("프로그램을 종료합니다.\n");
    return 0;
}


// 여기에 정수 값 N을 전달받아 N값 이상이며 N의 자리수 보다 한 자리 큰 최소 정수 값을 출력하는 함수를 정의합니다.
int minMax(int N) {
    int ret = 10;
    while (ret <= N) {
        ret *= 10;
    }
    return ret;
}