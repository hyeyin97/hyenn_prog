// 9372
#include <iostream>

using namespace std;

int main(void) {
	int t;
	int n, m;
	int a, b;

	cin >> t;

	// 모든 노드 방문할 수 있는 최소 횟수를 구하면 됨
	// 모든 노드를 방문할 수 있는 경로가 무조건 존재한다고 생각하면 됨
	// 그러면 최소 횟수는 (노드 수 - 1)이 될 수 밖에 없음 (컴수 시간에 배운 내용!)

	while (t--) {
		cin >> n >> m;

		for (int i = 0; i < m; i++)
			cin >> a >> b;

		cout << n - 1 << endl;
	}

	return 0;
}