#include <stdio.h>

int main(void) {
	int N = 0;
	int sum_odd = 0;
	
	if (scanf("%d", &N) == 1) {
		for (int i = 1; i <= N; i++) {
			if (i % 2 == 1) {
				sum_odd += i;
			} else {
				;
			}
		}
	} else {
		fprintf(stderr, "입력 실패.\n");
		return 1;
	}

	printf("%d\n", sum_odd);

	return 0;
}
