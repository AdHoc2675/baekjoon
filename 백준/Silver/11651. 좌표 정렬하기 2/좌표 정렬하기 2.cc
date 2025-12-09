#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;

	cin >> n;

	vector<pair<int, int>> points(n);

	for (int i = 0; i < n; i++) {
		cin >> points[i].first >> points[i].second;
	}

	sort(points.begin(), points.end(), [](const pair<int, int>& a, const pair<int, int>& b) {

		if (a.second == b.second) {
			return a.first < b.first; // y가 같으면 x 기준 오름차순
		}
		return a.second < b.second; // y 기준 오름차순
	});

	for (const auto& point : points) {
		cout << point.first << " " << point.second << "\n";
	}

	return 0;
}