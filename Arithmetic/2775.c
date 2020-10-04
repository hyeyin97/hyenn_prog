#include <stdio.h>
int main(void) {
	int testCase, k, n;
	scanf("%d", &testCase);
	int people[15][15] = { 0 };

	for (int i = 1; i < 15; i++)
		people[0][i] = i;

	for (int j = 1; j < 15; j++) {
		for (int k = 1; k < 15; k++) {
			for (int l = 1; l <= k; l++)
				people[j][k] += people[j - 1][l];
		}
	}

	for (int i = 0; i < testCase; i++) {
		scanf("%d", &k);	// Ãþ
		scanf("%d", &n);	// È£

		printf("%d\n", people[k][n]);
	}
}