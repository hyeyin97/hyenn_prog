#include <stdio.h>
void bubble_sort(int num[], int n);
int main(void) {
	int n, num[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	bubble_sort(num, n);
	for (int i = 0; i < n; i++)
		printf("%d\n", num[i]);
}

void bubble_sort(int num[], int n) {
	int flag, temp;
	for (int i = 0; i < n - 1; i++) {
		flag = 0;
		for (int j = 0; j < (n - i - 1); j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
}