#include <stdio.h>
#include <stdbool.h>

bool arithSeq(int n);

int main(void) {
	int n;
	int count = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (arithSeq(i))
			count++;
	}

	printf("%d\n", count);
}

bool arithSeq(int n) {
	int numArray[4];
	int i = 0;
	do {
		numArray[i] = n % 10;
		n /= 10;
		i++;
	} while (n > 0);

	if ((i == 1) || (i == 2)) return true;
	else if (i == 3) {
		if ((numArray[0] - numArray[1]) == (numArray[1] - numArray[2]))
			return true;
		else return false;
	}
	else return false;
}