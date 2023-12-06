#include <stdio.h>

int main(void) {
	int N = 0;
	int M = 0;
	int ans = 1;

	if (scanf("%d%d", &N, &M) != 2) {
		fprintf(stderr, "입력실패.\n");
		return 1;
	} else {
		;
	}

	for (int i = 1; i <= M; i++) {
		ans *= N;
		printf("%d의 %d승 : %d\n", N, i, ans);
	}

	return 0;
}
