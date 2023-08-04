#include <iostream>

using namespace std;

int main() {
	int m;
	int belt = 0;
	int cur = 1;
	int a, b, s;

	cin >> m;

	for (int i = 0; i < m; i++) {
		if (m <= 0) {
			break;
		}

		cin >> a >> b >> s;

		if (s == 1) {
			if (belt == 0) {
				belt = 1;
			}
			else if (belt == 1) {
				belt = 0;
			}
		}

		cur = cur * (double)b / a;
	}

	cout << belt << " " << cur;

	return 0;
}