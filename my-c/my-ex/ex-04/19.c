#include <stdio.h>

#define SIZE_BYTE 8

typedef unsigned char byte_t;

void printBits(byte_t b);
void closeBit(byte_t *b, int pos);
void openBit(byte_t *b, int pos);
void flipBits(byte_t *b);
void closeAll(byte_t *b);
void openAll(byte_t *b);
void openOneToFour(byte_t *b);
void closeFiveToEight(byte_t *b);

int main(void) {
	byte_t dam = 0x0A;
	printBits(dam);
	closeBit(&dam, 5);
	printBits(dam);
	openBit(&dam, 5);
	printBits(dam);
	flipBits(&dam);
	printBits(dam);
	closeAll(&dam);
	printBits(dam);
	openAll(&dam);
	printBits(dam);
	openOneToFour(&dam);
	printBits(dam);
	closeFiveToEight(&dam);
	printBits(dam);
}

void printBits(byte_t b) {
	byte_t bit_print = 0x80;  // 1000 0000

	for (int i = 0; i < SIZE_BYTE; i++) {
		if ((b & bit_print) != 0x00) {
			printf("%d", 1);
		} else {
			printf("%d", 0);
		}
		bit_print >>= 1;
	}
	printf("\n");
}

void closeBit(byte_t *b, int pos) {
	byte_t bit_close = 0x80;	// 1000 0000

	bit_close >>= (pos - 1);	// 0010 0000
	bit_close = ~bit_close;		// 1101 1111

	*b &= bit_close;
}

void openBit(byte_t *b, int pos) {
	byte_t bit_open = 0x80;	// 1000 0000

	bit_open >>= (pos - 1);	// 0010 0000

	*b |= bit_open;
}

void flipBits(byte_t *b) {
	*b = ~(*b);
}

void closeAll(byte_t *b) {
	*b = 0x00;
}

void openAll(byte_t *b) {
	*b = 0xFF;
}

void openOneToFour(byte_t *b) {
	for (int i = 1; i <= 4; i++) {
		openBit(b, i);
	}
}

void closeFiveToEight(byte_t *b) {
	for (int i = 5; i <= 8; i++) {
		closeBit(b, i);
	}
}