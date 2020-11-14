// 2630
#include <iostream>	

using namespace std;

int paper[129][129];
int blue;
int white;

void divide(int x1, int y1, int x2, int y2) {
	int countB = 0;
	int countW = 0;

	// �Ķ��� �����̿� �Ͼ�� ������ ���� ���� ���ϱ�
	for (int i = y1; i <= y2; i++) {
		for (int j = x1; j <= x2; j++) {
			if (paper[i][j] == 1)
				countB++;
			else	countW++;
		}
	}

	if (!countB)	// ��� �� ���̶�� ���̴ϱ�
		white++;
	else if (!countW)	// ��� �Ķ� ���̶�� ���̴ϱ�
		blue++;
	else {		// �� ���̿� �Ķ� ���� ��� �ִٴ� ��
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