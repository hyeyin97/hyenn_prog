#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int N; int* num;
	int max; int min;
	scanf("%d", &N);

	num = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);

	max = num[0];
	min = num[0];

	for (int j = 0; j < N; j++) {
		if (num[j] > max)
			max = num[j];
		if (num[j] < min)
			min = num[j];
	}

	printf("%d %d\n", min, max);


}