#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;

	cin >> n;
	stack<int> s;
	vector<char> operations;

	int current = 1;

	for (int i = 0; i < n; ++i) {
		int target;
		cin >> target;

		while (current <= target) {
			s.push(current++);
			operations.push_back('+');
		}

		if (s.top() == target) {
			s.pop();
			operations.push_back('-');
		} else {
			cout << "NO\n";
			return 0;
		}
	}

	for (char op : operations) {
		cout << op << "\n";
	}
	return 0;
}