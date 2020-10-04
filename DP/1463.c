#include <stdio.h>

int dp[1000001];

int min(int a, int b) {
	return a > b ? b : a;
}

int main(void) {
	int N;
	dp[1] = 0;
	scanf("%d", &N);

	for (int i = 2; i <= N; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
		else if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
		else
			dp[i] = min(dp[i], dp[i - 1] + 1);
	}

	printf("%d\n", dp[N]);
}