#include <stdio.h>

int main(void) {
	char str[101];
	gets(str);
	int count = 0; int i = 0;
	while (str[i] != NULL) {
		if ((str[i] == 'c' && str[i + 1] == '=') || (str[i] == 'c' && str[i + 1] == '-') || (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') || (str[i] == 'd' && str[i + 1] == '-') || (str[i] == 'l' && str[i + 1] == 'j') || (str[i] == 'n' && str[i + 1] == 'j') || (str[i] == 's' && str[i + 1] == '=') || (str[i] == 'z' && str[i + 1] == '='))
			count += 0;
		else
			count++;
		i++;
	}

	printf("%d\n", count);

}