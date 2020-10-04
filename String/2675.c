#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t, n;
	char str[22];
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d ", &n);
		gets(str);

		int k = 0;
		while (str[k] != NULL) {
			for (int j = 0; j < n; j++)
				printf("%c", str[k]);
			k++;
		}

		printf("\n");
	}
}