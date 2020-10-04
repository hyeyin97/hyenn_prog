#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int n;
	scanf("%d", &n);
	char str[101]; char alphabet[27];
	int count = 0;

	for (int i = 0; i < n; i++) {
		bool exitLoop = false;
		scanf("%s", str);
		int j = 1; int k = 1;
		alphabet[0] = str[0];	// aaabbbcccbxx
		count++;
		while (str[j] != NULL) {
			if (str[j] != alphabet[k - 1]) {
				alphabet[k] = str[j];
				for (int l = 0; l < (k - 1); l++) {
					if (alphabet[l] == alphabet[k]) {
						count--;
						exitLoop = true;
						break;
					}
				}
				k++;
			}
			j++;
			if (exitLoop == true) break;
		}
	}
	printf("%d\n", count);
}