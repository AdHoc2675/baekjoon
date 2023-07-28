#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;

	cin >> n;

	vector<int> digit;

	while (true)
	{
		if (n <= 0) {
			break;
		}

		digit.push_back(n % 10);
		n = n / 10;
	}

	sort(digit.begin(), digit.end(), greater<int>());

	for (int i = 0; i < digit.size(); i++) {
		cout << digit[i];
	}

	return 0;
}