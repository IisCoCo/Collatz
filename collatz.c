#include <stdio.h>

int collatz(int n) {
	static int i = 0;
	i++;

	//print
	//printf("%d\n", n);

	//break condition
	if(n == 1) {
		int ti = i;
		i = 0;
		return ti;
	}
	else if(n % 2 == 0) {
		collatz(n / 2);
	}
	else{
		collatz((3 * n) + 1);
	}
}

int main() {
	//int n;

	//printf("Input a number to collatz: ");
	//scanf("%d", &n);

	int lastLargest = 0;
	for(int n = 1; n < 10000; n++) {
		int i = collatz(n);
		//printf("%d: %d\n", n, i);

		if(i > lastLargest) {
			lastLargest = i;
			printf("%d, ", n);
		}
	}

	//printf("Iterations: %d\n", i);

	return 0;
}
