// 2751
#include <stdio.h>

void heapify(int array[], int index, int heap_size);
void heapSort(int array[], int n);

int nums[1000001];

int main(void) {
	int N;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
		scanf_s("%d", &nums[i]);

	heapSort(nums, N);

	for (int i = 0; i < N; i++)
		printf("%d\n", nums[i]);
}

void heapify(int array[], int index, int heap_size) {
	int largest = index;
	int left_index = 2 * index + 1;
	int right_index = 2 * index + 2;
	int temp;

	if ((left_index < heap_size) && (array[left_index] > array[largest]))
		largest = left_index;
	if ((right_index < heap_size) && (array[right_index] > array[largest]))
		largest = right_index;
	if (largest != index) {
		temp = array[largest];
		array[largest] = array[index];
		array[index] = temp;

		heapify(array, largest, heap_size);
	}
}

void heapSort(int array[], int n) {
	int index = (n / 2) - 1;
	int temp;
	for (int i = index; i >= 0; i--)
		heapify(array, i, n);

	int index_ = n - 1;
	for (int i = index_; i > 0; i--) {
		temp = array[i];
		array[i] = array[0];
		array[0] = temp;
		heapify(array, 0, i);
	}
}
