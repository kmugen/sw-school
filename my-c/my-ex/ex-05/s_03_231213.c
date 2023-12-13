#include <stdio.h>

// 여기에 정수 값(N) 하나를 전달받아 2의 N승 값을 반환하는 함수를 선언합니다.
int power(int N);
int main() {

    int N = 0;
    printf("입력 : ");

    if (scanf("%d", &N) == 1) {

        // 여기에서 2의 N승값을 구하는 함수를 호출하고 결과를 출력합니다.
    	printf("%d\n", power(N));
    } else {
        printf("잘못 입력하였습니다.\n");
    }

    printf("프로그램을 종료합니다.\n");
    return 0;
}

// 여기에 정수 값(N) 하나를 전달받아 2의 N승 값을 반환하는 함수를 정의합니다.
int power(int N) {
	int ret = 1;
	for (int i = 0; i < N; i++) {
		ret *= 2;
	}
	return ret;
}