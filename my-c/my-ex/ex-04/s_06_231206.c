#include <stdio.h>

typedef int bool_t;

int main(void) {
	int N = 0;
	bool_t is_prime = 0;

	if (scanf("%d", &N) != 1) {
		fprintf(stderr, "입력실패.\n");
		return 1;
	} else {
		;
	}

	for (int i = 1; i <= N; i++) {
		is_prime = 1;
		for (int mod = 2; mod < i; mod++) {
			if ((i % mod) == 0) {
				is_prime = 0;
				break;
			} else {
				;
			}
		}
		if (is_prime) {
			printf("%d ", i);
		} else {
			;
		}
	}
}
