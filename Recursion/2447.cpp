// 2447

#include <iostream>
#include <string>

using namespace std;

void star(int i, int j, int n);

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			star(i, j, n);
		}
		cout << endl;
	}


}

void star(int i, int j, int n) {
	if (((i / n) % 3 == 1) && ((j / n) % 3 == 1))
		cout << ' ';

	else {
		if (n / 3 == 0)	// n이 3이 되는 경우
			cout << '*';
		else
			star(i, j, n / 3);
	}
}