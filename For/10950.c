#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int T; int* a; int* b;
	scanf("%d", &T);

	a = (int*)malloc(sizeof(int) * T);
	b = (int*)malloc(sizeof(int) * T);
	for (int i = 0; i < T; i++)
		scanf("%d %d", &a[i], &b[i]);

	for (int j = 0; j < T; j++)
		printf("%d\n", a[j] + b[j]);

	free(a);
	free(b);

}