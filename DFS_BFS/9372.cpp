// 9372
#include <iostream>

using namespace std;

int main(void) {
	int t;
	int n, m;
	int a, b;

	cin >> t;

	// ��� ��� �湮�� �� �ִ� �ּ� Ƚ���� ���ϸ� ��
	// ��� ��带 �湮�� �� �ִ� ��ΰ� ������ �����Ѵٰ� �����ϸ� ��
	// �׷��� �ּ� Ƚ���� (��� �� - 1)�� �� �� �ۿ� ���� (�ļ� �ð��� ��� ����!)

	while (t--) {
		cin >> n >> m;

		for (int i = 0; i < m; i++)
			cin >> a >> b;

		cout << n - 1 << endl;
	}

	return 0;
}