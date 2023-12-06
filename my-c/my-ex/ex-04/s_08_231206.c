#include <stdio.h>

int main(void) {
	int N = 0;
	int ans = 1;
	
	if (scanf("%d", &N) != 1) {
		fprintf(stderr, "입력 실패.\n");
		return 1;
	} else {
		;
	}

	for (int i = 0; i < N; i++) {
		ans *= 2;
	}

	printf("%d\n", ans);

	return 0;
}
