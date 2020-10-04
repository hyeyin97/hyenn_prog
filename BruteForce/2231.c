#include <stdio.h>
#include <stdbool.h>

int d(n);

int main(void) {
	int n, m; bool tf = false;
	scanf("%d", &n);
	int min = n;

	for (int i = 1; i < n; i++) {
		if (d(i) == n) {
			if (min > i)
				min = i;
			tf = true;
		}
		else if ((i == (n - 1)) && (!tf))
			min = 0;
	}

	if (n == 1)
		min = 0;
	printf("%d\n", min);
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