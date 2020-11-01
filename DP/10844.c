#include <stdio.h>
#define mod 1000000000

int main(void) {
	int N;
	scanf("%d", &N);

	int dp[101][10] = { 0 };
	int sum = 0;

	for (int i = 0; i < 10; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0)
				dp[i][0] = dp[i - 1][1] % mod;
			else if (j == 9)
				dp[i][9] = dp[i - 1][8] % mod;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
		}
	}

	for (int i = 1; i < 10; i++)
		sum = (sum + dp[N][i]) % mod;

	printf("%d\n", sum % mod);
}