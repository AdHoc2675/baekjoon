#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	
	cin >> n;

	vector<pair<int, int>> coordinate;
	int x, y;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		coordinate.push_back({ x, y });
	}

	sort(coordinate.begin(), coordinate.end());

	for (int i = 0; i < n; i++) {
		cout << coordinate[i].first << " " << coordinate[i].second << '\n';
	}

	return 0;
}