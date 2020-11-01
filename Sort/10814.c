#include <stdio.h>
#include <string.h>
#define SWAP(x, y, tmp) { tmp = x; x = y; y = temp;}

typedef struct {
	int age;
	char name[102];
	int count;
} member;

int q_sort(int left, int right, member* p);

member p[100001];

int main(void) {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %s", &p[i].age, p[i].name);
		p[i].count = i;
	}

	q_sort(0, N - 1, p);

	for (int i = 0; i < N; i++)
		printf("%d %s\n", p[i].age, p[i].name);
}

int q_sort(int left, int right, member* p) {
	int pivot = left;
	int i, j = left;
	member temp;

	if (left < right) {
		for (i = left + 1; i <= right; i++) {
			if (p[i].age < p[pivot].age) {
				j++;
				SWAP(p[i], p[j], temp);
			}

			else if (p[i].age == p[pivot].age) {
				if (p[i].count < p[pivot].count) {
					j++;
					SWAP(p[i], p[j], temp);
				}
			}
		}

		SWAP(p[pivot], p[j], temp);
		pivot = j;

		q_sort(left, pivot - 1, p);
		q_sort(pivot + 1, right, p);
	}
}
