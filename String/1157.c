#include <stdio.h>

int main(void) {
	char str[1000000];
	int alphabet[26] = { 0 };

	int i = 0, max = 0;
	char maxStr;
	gets(str);
	while (str[i] != NULL) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		alphabet[str[i] - 'A']++;
		i++;
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			maxStr = i + 'A';
		}
		else if (alphabet[i] == max)
			maxStr = '?';
	}
	printf("%c\n", maxStr);
}