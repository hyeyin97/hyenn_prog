#include <stdio.h>
void bubble_sort(char num[], int n);
int main(void) {
	int num, i;
	char buf[11];
	scanf("%d", &num);
	sprintf(buf, "%d", num);
	for (i = 0; buf[i] != NULL; i++);
	bubble_sort(buf, i);
	for (int j = 0; j < i; j++)
		printf("%c", buf[j]);
	printf("\n");
	return 0;
}

void bubble_sort(char num[], int n) {
	int flag; char temp;
	for (int i = 0; i < n; i++) {
		flag = 0;
		for (int j = 0; j < (n - i - 1); j++) {
			if (num[j] < num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) break;
	}
}