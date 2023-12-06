#include <stdio.h>

int main(void) {
	int N = 0;
	int M = 0;
	int answer = 0;
	
	if (scanf("%d %d", &N, &M) == 2) {
		answer = N / M;
		if ((N % M) > 0) {
			answer++;
		} else {
			;
		}
		printf("%d\n", answer);
	}
	else {
		fprintf(stderr, "입력에 실패하였습니다.\n");
		return 1;
	}
	
	return 0;
}
