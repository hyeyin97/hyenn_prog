#include <stdio.h>
int main(void) {
	int c, n;
	int score[100][1000] = { 0 }; int count[100] = { 0 };
	double sum[100] = { 0 }; double avg[100] = { 0 };  double rate[100] = { 0 };

	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &score[i][j]);
			sum[i] += score[i][j];
		}
		avg[i] = sum[i] / n;

		for (int j = 0; j < n; j++) {
			if (score[i][j] > avg[i])
				count[i]++;
		}

		rate[i] = ((double)count[i] / (double)n) * 100.0;
	}

	for (int i = 0; i < c; i++)
		printf("%.3f%%\n", rate[i]);
}