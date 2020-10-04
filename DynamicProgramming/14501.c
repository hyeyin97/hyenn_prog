#include <stdio.h>
#define max(a, b) (((a) > (b)) ? (a) : (b))

int main(void) {
	int N;
	int t[16] = { 0 }, p[16] = { 0 }, dp[16] = { 0 };

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
		scanf_s("%d %d", &t[i], &p[i]);

	for (int day = 1; day <= N + 1; day++) {
		int time = t[day];
		int pay = p[day];
		int end = day + time;

		if (end > N + 1) continue;

		for (int i = end; i <= N + 1; i++)
			dp[i] = max(dp[i], dp[i] + pay);
	}

	printf("%d\n", dp[N + 1]);

}


