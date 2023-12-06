#include <stdio.h>

typedef int bool_t;

int main(void) {
	bool_t is_leap = 0;
	for (int year = 2020; year <= 3020; year++) {
		is_leap = 0;
		if (year % 400 == 0) {
			is_leap = 1;
		} else if (year % 100 == 0) {
			is_leap = 0;
		} else if (year % 4 == 0) {
			is_leap = 1;
		} else {
			;
		}

		if (is_leap == 1) {
			printf("%d\n", year);
		} else {
			;
		}
	}
}
