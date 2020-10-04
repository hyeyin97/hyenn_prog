// 1260
#include <stdio.h>

int nums[10001][10001] = { 0 };
int DFS[10001] = { 0 };
int BFS[10001] = { 0 };
int BFS_[1001] = { 0 };		// 방문 순서에 따른 정점 번호

void DFS_Func(int start, int n);
void BFS_Func(int start, int n, int m);

int main(void) {
	int N, M, V;
	int x, y;

	scanf_s("%d %d %d", &N, &M, &V);
	for (int i = 0; i < M; i++) {
		scanf_s("%d %d", &x, &y);
		nums[x][y] = 1;
		nums[y][x] = 1;
	}

	DFS_Func(V, N);
	printf("\n");
	BFS_Func(V, N, M);
}

void DFS_Func(int start, int n) {
	DFS[start] = 1;
	printf("%d ", start);

	for (int i = 0; i <= n; i++) {
		// 연결된 선은 있지만 방문한 적은 없을 때
		if ((nums[start][i] == 1) && (DFS[i] == 0))
			DFS_Func(i, n);
	}
}

void BFS_Func(int start, int n, int m) {
	int order = 0;
	BFS[start] = 1;
	printf("%d ", start);
	BFS_[order++] = start;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j <= n; j++) {
			if ((nums[BFS_[i]][j] == 1) && (BFS[j] == 0)) {
				printf("%d ", j);
				BFS[j] = 1;
				BFS_[order++] = j;
			}
		}
	}
}
