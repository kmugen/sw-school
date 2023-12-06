#include <stdio.h>

#define MOD 10

int main(void) {
	int N = 0;
	int ans = 0;

	if (scanf("%d", &N) != 1) {
		fprintf(stderr, "입력실패.\n");
		return 1;
	} else {
		;
	}

	while (N > 0) {
		ans++;
		N /= MOD;
	}

	printf("%d\n", ans);


	return 0;
}
