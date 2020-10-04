#include <stdio.h>
#include <string.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int num[100];
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	int max = 0; int sum;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if ((max < num[i] + num[j] + num[k]) && (num[i] + num[j] + num[k] <= m))
					max = num[i] + num[j] + num[k];
			}
		}
	}

	if (max != 0)
		printf("%d\n", max);
}