#include <stdio.h>

float cut(float n, int m);

int main(void) {
	float N = 0.f;
	int M = 0;

	if (scanf("%f %d", &N, &M) == 2) {
		printf("%f\n", cut(N, M));
	} else {
		fprintf(stderr, "입력에 실패했습니다.\n");
		return 1;
	}

	return 0;
}

float cut(float n, int m) {
	float ret = n;

	if (m == 0) {
		ret = (float)((int)ret);
	} else {
		for (int i = 0; i < m; i++) {
			ret *= 10;
		}
		ret = (float)((int)ret);
		for (int i = 0; i < m; i++) {
			ret /= 10;
		}
	}

	return ret;
}