#include <stdio.h>
int main(void) {
	int num1, num2;
	char str1[4], str2[4];
	scanf("%d %d", &num1, &num2);

	str1[0] = num1 % 10;
	str1[1] = (num1 / 10) % 10;
	str1[2] = num1 / 100;

	str2[0] = num2 % 10;
	str2[1] = (num2 / 10) % 10;
	str2[2] = num2 / 100;

	int newNum1 = str1[0] * 100 + str1[1] * 10 + str1[2];
	int newNum2 = str2[0] * 100 + str2[1] * 10 + str2[2];

	if (newNum1 > newNum2)
		printf("%d\n", newNum1);
	else printf("%d\n", newNum2);
}