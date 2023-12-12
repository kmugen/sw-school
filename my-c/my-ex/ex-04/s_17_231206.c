#include <stdio.h>

int count369(int n);

int main(void) {
	int N = 0;
	int total_count = 0;
	
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		total_count += count369(i);
	}

	printf("%d\n", total_count);

	return 0;
}

int count369(int n) {
	int ret = 0;
	int remain = 0;
	
	while (n > 0) {
		remain = n % 10;
		if ((remain == 3) || (remain == 6) || (remain == 9)){
			ret++;
		}
		n /= 10;
	}
	
	return ret;
}
