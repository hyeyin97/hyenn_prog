#include <stdio.h>

int d(int n);
int main(void) {

	int numArray[15000] = { 0 };
	for (int i = 1; i <= 10000; i++)
		numArray[d(i)]++;


	for (int j = 1; j < 10000; j++) {
		if (numArray[j] == 0)
			printf("%d\n", j);
	}

}

int d(int n) {
	int result = n;
	int remain;
	do {
		remain = n % 10;
		n /= 10;
		result += remain;
	} while (n > 0);

	return result;
}