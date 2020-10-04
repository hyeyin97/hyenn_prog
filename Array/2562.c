#include <stdio.h>

int main(void) {
	int num[9]; int max = num[0];
	int line;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
		if (num[i] > max) {
			max = num[i];
			line = i + 1;
		}
	}

	printf("%d\n", max);
	printf("%d\n", line);
}