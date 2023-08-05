#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int current;
	int max;
	vector<int> rope;

	cin >> n;


	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;

		rope.push_back(input);
	}

	// 로프의 중량을 정렬
	sort(rope.begin(), rope.end());

	// 중량이 가장 큰 로프 하나만 이용했을 때
	max = rope[n - 1];

	for (int i = n - 1; i >= 0; i--) {
		// 현재 로프의 중량 (해당 로프의 중량 * 로프의 개수)
		current = rope[i] * (n - i);
		// 최대 중량보다 현재 중량이 더 크다면
		if (max < current) {	
			// 최대 중량을 현재 값으로 교체
			max = current;
		}
	}

	cout << max;

	return 0;
}