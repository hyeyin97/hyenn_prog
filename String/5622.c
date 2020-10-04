#include <stdio.h>

int main(void) {
	char str[16];
	int i = 0; int time = 0;

	gets(str);
	while (str[i] != NULL) {
		if (str[i] >= 'A' && str[i] <= 'C')
			time += 3;
		else if (str[i] >= 'D' && str[i] <= 'F')
			time += 4;
		else if (str[i] >= 'G' && str[i] <= 'I')
			time += 5;
		else if (str[i] >= 'J' && str[i] <= 'L')
			time += 6;
		else if (str[i] >= 'M' && str[i] <= 'O')
			time += 7;
		else if (str[i] >= 'P' && str[i] <= 'S')
			time += 8;
		else if (str[i] >= 'T' && str[i] <= 'V')
			time += 9;
		else if (str[i] >= 'W' && str[i] <= 'Z')
			time += 10;
		i++;
	}

	printf("%d\n", time);
}