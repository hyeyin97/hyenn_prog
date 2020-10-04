#include <stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int mid;
	if (a > b) {
		if (b > c) mid = b;
		else {
			if (a > c) mid = c;
			else mid = a;
		}
	}
	else {
		if (b > c) {
			if (a > c)  mid = a;
			else mid = c;
		}
		else mid = b;
	}

	printf("%d\n", mid);
}