#include <stdio.h>

int main(void) {
	int num[10]; int remain[10]; int diff[42] = { 0 };
	for (int i = 0; i < 10; i++)
		scanf("%d", &num[i]);

	for (int j = 0; j < 10; j++) {
		remain[j] = num[j] % 42;
		diff[remain[j]]++;
	}

	int count = 0;
	for (int k = 0; k < 42; k++) {
		if (diff[k] != 0)
			count++;
	}

	printf("%d\n", count);
}