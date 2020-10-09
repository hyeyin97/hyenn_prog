#include <stdio.h>

int visited[1001] = { 0 };
int nums[1001][1001];

void DFS(int start, int n);

int main(void) {
	int N, M;
	int x, y;
	int cnt = 0;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++) {
		scanf("%d %d", &x, &y);
		nums[x][y] = 1;
		nums[y][x] = 1;
	}

	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			DFS(i, N);
			cnt++;
		}
	}

	printf("%d\n", cnt);
}

void DFS(int start, int n) {
	visited[start] = 1;
	for (int i = 1; i <= n; i++) {
		if (nums[start][i] && !visited[i])
			DFS(i, n);
	}
}