#include <stdio.h>

#define ARR_SIZE 6

int main(void) {
	int N = 0;
	int coins[ARR_SIZE] = { 500, 100, 50, 10, 5, 1 };
	int ans = 0;
	
	if (scanf("%d", &N) != 1) {
		fprintf(stderr, "입력실패.\n");
		return 1;
	} else {
		;
	}

	for (int i = 0; i < ARR_SIZE; i++) {
		ans += N / coins[i];
		N %= coins[i];
	}

	printf("%d\n", ans);

	return 0;
}
