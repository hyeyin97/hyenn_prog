#include <stdio.h>

int main(void) {
	char str[1000000];
	gets(str);
	int i = 0;
	int count = 0;

	char* ptr;
	ptr = strtok(str, " ");
	while (ptr != NULL) {
		count++;
		ptr = strtok(NULL, " ");
	}

	printf("%d\n", count);
}