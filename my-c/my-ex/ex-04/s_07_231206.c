#include <stdio.h>

int main(void) {
	int N = 0;
	char grade = '\0';
	
	if (scanf("%d", &N) != 1) {
		fprintf(stderr, "입력실패.\n");
		return 1;
	} else {
		;
	}

	if ((N > 100) || (N < 0)) {
		fprintf(stderr, "잘못된 입력.\n");
		return 1;
	}
	
	switch (N / 10) {
	case 10:
		grade = 'A';
		break;
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
		break;
	}

	printf("%c\n", grade);

	return 0;
}
