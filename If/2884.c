#include <stdio.h>

int main(void) {
	int H; int M;
	scanf("%d %d", &H, &M);

	if (M > 45)
		M -= 45;
	else if (M < 45) {
		if (H == 0)
			H = 23;
		else H--;
		M = (M + 60) - 45;
	}

	if (M == 0)
		printf("%d\n", H);
	else
		printf("%d %d\n", H, M);
}