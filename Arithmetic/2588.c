#include <stdio.h>

int main(void) {
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);

	int num2_first = num2 / 100;
	int num2_sec = (num2 % 100) / 10;
	int num2_thr = num2 % 10;


	int a = num1 * num2_thr;
	int b = num1 * num2_sec;
	int c = num1 * num2_first;

	int m = a + b * 10 + c * 100;

	printf("%d\n%d\n%d\n%d\n", a, b, c, m);

}