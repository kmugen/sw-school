#include <stdio.h>

// 전달 받은 값이 소수인 경우 1을, 소수가 아닌 경우 0을 반환하는 함수를 선언합니다.
int isPrime(int n);

int main() {

    int num = 0;
    printf("2 이상의 양의 정수 입력 : ");

    if (scanf("%d", &num) == 1) {

        // 여기에서 소수를 체크하는 함수를 호출하고 결과에 따라 처리를 합니다.
        // 입력 받은 값이 소수 이면 "소수 입니다"를 출력
        // 소수가 아니라면 "소수가 아닙니다"를 출력
        if (isPrime(num) == 1) {
        	printf("소수 입니다.\n");
        } else {
        	printf("소수가 아닙니다.\n");
        }

    } else {
        printf("잘못 입력하였습니다.\n");
    }

    printf("프로그램을 종료합니다.\n");
    return 0;
}

// 여기에 전달 받은 값이 소수인 경우 1을, 소수가 아닌 경우 0을 반환하는 함수를 선언합니다.
int isPrime(int n) {
	int ret = 1;
	for (int i = 2; i <= n - 1; i++) {
		if (n % i == 0) {
			ret = 0;
			break;
		}
 	}
 	return ret;
}