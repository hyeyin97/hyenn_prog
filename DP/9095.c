// 9095
#include <stdio.h>

int main(void) {
	int T, n, dp[12];
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	scanf_s("%d", &T);

	for (int i = 4; i <= 11; i++)
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];


	for (int i = 0; i < T; i++) {
		scanf_s("%d", &n);
		printf("%d\n", dp[n]);
	}
}
