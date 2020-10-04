#include <stdio.h>

void hanoi(int num, int from, int by, int to);

int main(void) {
	int n; int cnt = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		cnt *= 2;

	printf("%d\n", cnt - 1);
	hanoi(n, 1, 2, 3);
}

void hanoi(int num, int from, int by, int to) {
	int count = 0;
	if (num == 1) {
		printf("%d %d\n", from, to);
	}
	else {
		hanoi(num - 1, from, to, by);
		printf("%d %d\n", from, to);
		hanoi(num - 1, by, from, to);
	}
}