#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n; int a;

	scanf("%d", &n);


	for (a = n / 5; (n - a * 5) % 3; a--) {
		if (a < 0) break;
	}

	if (a < 0) printf("%d\n", -1);
	else printf("%d\n", a + (n - a * 5) / 3);

	return 0;
}
