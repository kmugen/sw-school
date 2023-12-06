#include <stdio.h>

typedef char bool_t;

int main(void) {
	int N = 0;
	int is_prime = -1;

	if (scanf("%d", &N) != 1) {
		fprintf(stderr, "입력실패.\n");
		return 1;
	} else {
		;
	}
	
	is_prime = 1;
	for (int mod = 2; mod < N; mod++) {
		if ((N % mod) == 0){
			is_prime = -1;
			break;
		} else {
			;
		}
	}	

	printf("%d\n", is_prime);

	return 0;
}
