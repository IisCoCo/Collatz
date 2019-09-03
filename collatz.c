#include <stdio.h>

/* collatz function
Arguments:
	n: The number you want to run through the collatz function
	print: 1 if you want the collatz function to print the sequence

If n is 1, were done!
If n is even, divide it by two
If n is odd, multiply it by 3 and add 1

Returns the number of iterations for n to reach 1
*/
int collatz(int n, int print) {
	//print
	if(print == 1)
		printf("%d\n", n);

	//break condition
	if(n == 1) {
		return 1;
	}
	else if(n % 2 == 0) {
		return 1 + collatz(n / 2, print);
	}
	else{
		return 1 + collatz((3 * n) + 1, print);
	}
}

int main() {

	/*
	Sample program prints out the iterations required if
	that iterations is a new max found up to x
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
