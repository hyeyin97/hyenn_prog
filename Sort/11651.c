#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} array;

array arr[100001];

int compare(const void* a, const void* b) {
	array* num1 = (array*)a;
	array* num2 = (array*)b;

	if (num1->y == num2->y)
		return num1->x - num2->x;

	return num1->y - num2->y;
}

int main(void) {
	int N;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d %d", &arr[i].x, &arr[i].y);

	qsort(arr, N, sizeof(array), compare);

	for (int i = 0; i < N; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
}