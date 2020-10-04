#include <stdio.h>
int main(void) {
	int a; int b; int c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	int multiple = a * b * c;

	int len = 0; int m = multiple;
	do {
		m /= 10;
		len++;
	} while (m > 0);

	int multiple_s[10] = { 0 };
	int remain;

	for (int i = 0; i < len; i++) {
		remain = multiple % 10;
		multiple /= 10;
		multiple_s[remain]++;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", multiple_s[i]);
}