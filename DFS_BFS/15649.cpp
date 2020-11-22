// 15649

#include <iostream>

using namespace std;

int n, m;
int arr[9] = { 0, };
bool visited[9] = { 0, };

void bt_array(int count);

int main() {
	cin >> n >> m;
	bt_array(0);
}

void bt_array(int count) {
	if (count == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[count] = i;
			bt_array(count + 1);
			visited[i] = false;		// 이렇게 해줘야 다음에 얘가 먼저 나오는 수열을 찾을 수 있음
		}
	}
}