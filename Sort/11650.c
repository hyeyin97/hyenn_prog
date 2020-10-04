// 11650
#include <stdio.h>
#define SWAP(a, b, temp) { temp = a; a = b; b = temp; }

typedef struct {
	int x;
	int y;
} loc;

void quickSort(int left, int right, loc* arr);

int main(void) {
	int N;
	scanf_s("%d", &N);

	loc arr[100001];

	for (int i = 0; i < N; i++)
		scanf_s("%d %d", &arr[i].x, &arr[i].y);

	quickSort(0, N - 1, arr);

	for (int i = 0; i < N; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
}

void quickSort(int left, int right, loc* arr) {
	int pivot = left;
	int j = left;
	loc temp;

	if (left < right) {
		for (int i = left + 1; i <= right; i++) {
			if (arr[i].x < arr[pivot].x) {
				j++;
				SWAP(arr[i], arr[j], temp);
			}
			else if (arr[i].x == arr[pivot].x) {
				if (arr[i].y < arr[pivot].y) {
					j++;
					SWAP(arr[i], arr[j], temp);
				}
			}
		}
		SWAP(arr[pivot], arr[j], temp);
		pivot = j;

		quickSort(left, pivot - 1, arr);
		quickSort(pivot + 1, right, arr);
	}
}