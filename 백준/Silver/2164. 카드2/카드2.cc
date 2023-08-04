#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;
	int popOrPush = 0;

	cin >> n;

	queue<int> q;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (true) {
		if (q.size() <= 1) {
			break;
		}

		for (int i = 1; i < n; i++) {
			int temp = q.front();

			q.pop();
			if (popOrPush == 0) {
				popOrPush = 1;
			}
			else if (popOrPush == 1) {
				popOrPush = 0;
				q.push(temp);
			}
		}
	}

	cout << q.front();

	return 0;
}