#include <stdio.h>
int main(void) {
	int a; char star = '*';
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int j = (a - i); j >= 1; j--)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("%c", star);
		printf("\n");
	}
}