#include <stdio.h>

int minInt(double n);

int main(void) {
	double N = 0;
	int temp = 0;

	if (scanf("%lf", &N) == 1) {
		printf("%d\n", minInt(N));
	} else {
		fprintf(stderr, "입력에 실패했습니다.\n");
		return 1;
	}
}

int minInt(double n) {
	int ret = (int)(n * 10);
	
	if ((ret % 10) > 0) {
		ret /= 10;
		ret++;
	} else {
		ret /= 10;
	}

	return ret ;
}