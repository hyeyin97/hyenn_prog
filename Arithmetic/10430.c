#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= 2 && b >= 2 && c >= 2) {
		printf("%d\n", (a + b) % c);
		printf("%d\n", (a % c + b % c) % c);
		printf("%d\n", (a * b) % c);
		printf("%d\n", ((a % c) * (b % c)) % c);
	}
	return 0;
}