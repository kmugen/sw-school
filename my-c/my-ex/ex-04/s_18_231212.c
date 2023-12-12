#include <stdio.h>

int main(void) {
	int N = 0;
	int M = 0;
	int ans = 0;

	scanf("%d %d", &N, &M);

	ans = (N > (M * 3)) ? (M * 10) : ((N * 3) + M);

	printf("%d\n", ans);

	return 0;
}