#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int testCase;
	scanf("%d", &testCase);
	char str[82];

	for (int i = 0; i < testCase; i++) {
		scanf("%s", str);

		int k = 0; int ans = 0; int start = 1;
		while ((k < 80) && (str[k] != NULL)) {
			if (str[k] == 'O') {
				ans += start;
				if (str[k + 1] == 'O')
					start++;
				else start = 1;
			}
			k++;
		}
		printf("%d\n", ans);
	}
}