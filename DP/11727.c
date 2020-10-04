//11727
#include <stdio.h>

int main(void) {
	int n;
	int dp[1001];
	scanf_s("%d", &n);
	dp[1] = 1; dp[2] = 3;
	for (int i = 3; i <= n; i++)
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	printf("%d\n", dp[n]);
}
