// 2630
#include <iostream>	

using namespace std;

int paper[129][129];
int blue;
int white;

void divide(int x1, int y1, int x2, int y2) {
	int countB = 0;
	int countW = 0;

	// 파란색 색종이와 하얀색 색종이 개수 먼저 구하기
	for (int i = y1; i <= y2; i++) {
		for (int j = x1; j <= x2; j++) {
			if (paper[i][j] == 1)
				countB++;
			else	countW++;
		}
	}

	if (!countB)	// 모두 흰 종이라는 뜻이니까
		white++;
	else if (!countW)	// 모두 파란 종이라는 뜻이니까
		blue++;
	else {		// 흰 종이와 파란 종이 모두 있다는 뜻
		divide(x1, y1, (x1 + x2) / 2, (y1 + y2) / 2);
		divide((x1 + x2) / 2 + 1, y1, x2, (y1 + y2) / 2);
		divide(x1, (y1 + y2) / 2 + 1, (x1 + x2) / 2, y2);
		divide((x1 + x2) / 2 + 1, (y1 + y2) / 2 + 1, x2, y2);
	}

	return;
}

int main(void) {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			paper[i][j] = x;
		}
	}

	divide(0, 0, n - 1, n - 1);

	cout << white << endl << blue;

	return 0;
}