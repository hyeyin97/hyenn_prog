#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char str[100];
	int alphabet[26];
	gets(str);
	for (int i = 0; i < 26; i++)
		alphabet[i] = -1;

	int i = 0;
	while (str[i] != NULL) {
		if (alphabet[str[i] - 'a'] == -1)
			alphabet[str[i] - 'a'] = i;
		i++;
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", alphabet[i]);
	printf("\n");
}