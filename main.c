#include <stdio.h>

#include "collatz.h"

int main() {

	/*
	Sample program prints out the iterations required if
	that iteration is a new max found up to x
	*/

	int x = 100000;
	int lastLargest = 0;
	for(int n = 1; n < x; n++) {
		int i = collatz(n, 0);

		if(i > lastLargest) {
			lastLargest = i;
			printf("%d, ", n);
		}
	}

	printf("\n");

	return 0;
}
