#include <stdio.h>

#define MOD 10

int main(void) {
	int N = 0;
	int temp = 0;
	int num_digits = 0;
	int divide = 1;

	if (scanf("%d", &N) != 1) {
		fprintf(stderr, "입력실패.\n");
		return 1;
	} else {
		;
	}

	temp = N;
	while (temp > 0) {
		num_digits++;
		temp /= MOD;
	}

	for (int i = 0; i < (num_digits / 2); i++) {
		divide *= MOD;
	}

	printf("선두 : %d, 하위 : %d\n", N / divide, N % divide);

	return 0;
}
