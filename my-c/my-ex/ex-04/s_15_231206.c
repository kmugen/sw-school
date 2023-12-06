#include <stdio.h>

#define MAX_SIZE 9
#define MOD 10

int main(void) {
	int N = 0;
	int digits[MAX_SIZE] = { 0 };
	int index = 0;
	
	if (scanf("%d", &N) != 1) {
		fprintf(stderr, "입력실패.\n");
	} else {
		;
	}

	while (N > 0) {
		digits[index] = N % MOD;
		N /= MOD;
		index++;
	}
	
	if (index == 0) {
		printf("%d\n", 0);
	} else {
		while (--index >= 0) {
			printf("%d\n", digits[index]);
		}
	}

	return 0;
}
