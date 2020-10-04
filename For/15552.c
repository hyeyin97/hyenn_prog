#include <stdio.h>

int main(void) {
	int T; int a; int b;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}