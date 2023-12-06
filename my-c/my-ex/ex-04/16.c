#include <stdio.h>

int main(void) {
	int start = 1;
	int end = 10;

	while (start < end) {
		printf("%d %d ", start, end);
		start++;
		end--;
	}

	if (start == end) {
		printf("%d", start);
	} else {
		;
	}
	
	printf("\n");
	
	return 0;
}
