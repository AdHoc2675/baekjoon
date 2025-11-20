#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;

	cin >> n;
	queue<int> q;

	for (int i = 0; i < n; i++) {
		string command;
		cin >> command;
		if (command == "push") {
			int value;
			cin >> value;
			q.push(value);
		}
		else if (command == "pop") {
			if (q.empty() == true) {
				cout << -1 << "\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (command == "size") {
			cout << q.size() << "\n";
		}
		else if (command == "empty") {
			if (q.empty() == true) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (command == "front") {
			if (q.empty() == true) {
				cout << -1 << "\n";
			}
			else {
				cout << q.front() << "\n";
			}
		}
		else if (command == "back") {
			if (q.empty() == true) {
				cout << -1 << "\n";
			}
			else {
				cout << q.back() << "\n";
			}
		}
	}
	return 0;
}