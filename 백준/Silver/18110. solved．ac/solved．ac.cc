#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	if (n == 0) {
		cout << "0\n";
		return 0;
	}

	vector<int> opinions(n);
	for (int i = 0; i < n; i++) {
		cin >> opinions[i];
	}

	sort(opinions.begin(), opinions.end());

	int trim_count = (n * 15 + 50) / 100; // 상위, 하위 15% 절사
	long long sum = 0;

	for (int i = trim_count; i < n - trim_count; i++) {
		sum = sum + opinions[i];
	}

	int count = n - 2 * trim_count;
	int average = (sum * 2 + count) / (2 * count); // 반올림 처리

	cout << average << "\n";
	return 0;
}