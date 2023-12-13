#include <stdio.h>

int maxInt(double n);

int main(void) {
	double N;

	if (scanf("%lf", &N) == 1) {
		printf("%d\n", maxInt(N));
	} else {
		fprintf(stderr, "입력에 실패했습니다.\n");
		return 1;
	}

	return 0;
}

int maxInt(double n) {
	return (int)n;
}