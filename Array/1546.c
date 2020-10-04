#include <stdio.h>
int main(void) {
	int n;
	int score[1000] = { 0 };
	double newScore[1000] = { 0 };
	int max = 0;
	double sum = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &score[i]);

	for (int i = 0; i < n; i++) {
		if (max <= score[i])
			max = score[i];
	}

	for (int i = 0; i < n; i++) {
		newScore[i] = (double)score[i] / max * 100;
		sum += newScore[i];
	}

	printf("%.2lf\n", sum / n);
}