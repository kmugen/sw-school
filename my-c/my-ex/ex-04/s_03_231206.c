#include <stdio.h>

int main(void) {
	int N = 0;
	int sum_even = 0;

	if (scanf("%d", &N) == 1) {
		while (N > 0) {
			if (N % 2 == 0) {
				sum_even += N;
			} else {
				;
			}
			N--;
		}
		printf("%d\n", sum_even);
	} else {
		fprintf(stderr, "입력실패.\n");
		return 1;
	}
	return 0;
}
