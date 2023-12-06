#include <stdio.h>

int main(void) {
	int N = 0;

	if (scanf("%d", &N) != 1) {
		fprintf(stderr, "입력실패.\n");
		return 1;
	} else {
		;
	}

	for (int i = 1; i <= N; i++) {
		if ((i * i) <= N) {
			printf("%d ", i);
		} else {
			break;
		}
	}

	return 0;
}
