#include <stdio.h>
int fact(int num);

int main(void) {
	int n;
	scanf("%d", &n);

	printf("%d\n", fact(n));
}

int fact(int num) {
	int ans = 1;
	while (num != 0) {
		ans *= num;
		num--;
	}

	return ans;
}