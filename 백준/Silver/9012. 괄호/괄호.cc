#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	while (true) {
		string ps;
		cin >> ps;

		stack<char> s;

		bool isVPS = true;

		for (char ch : ps) {
			if (ch == '(') {
				s.push(ch);
			}
			else if (ch == ')') {
				if (s.empty() == false ) {
					s.pop();
				}
				else {
					isVPS = false;
					break;
				}
			}
		}

		if (s.empty() == false) {
			isVPS = false;
		}

		if (isVPS) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}

		t--;
		if (t == 0) {
			break;
		}
	}
	return 0;
}