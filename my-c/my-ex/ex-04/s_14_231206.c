#include <stdio.h>

#define MUL 10

int main(void) {
	int N = 0;
	int ans = 1;
	
	if (scanf("%d", &N) != 1) {
		fprintf(stderr, "입력실패.\n");
		return 1;
	} else {
		;
	}

	for (int i = 0; i < (N - 1); i++) {
		ans *= MUL;
	}

	printf("%d\n", ans);

	return 0;
}
