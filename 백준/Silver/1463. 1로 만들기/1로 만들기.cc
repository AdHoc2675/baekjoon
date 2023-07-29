#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[1000000];
	int n;
	cin >> n;

	// 다이나믹 프로그래밍 사용
	for (int i = 2; i <= n; i++) {
		// 1을 뺀다.
		arr[i] = arr[i - 1] + 1;

		// 2로 나누어지면
		if (i % 2 == 0) {
			arr[i] = min(arr[i], arr[i / 2] + 1);
		}

		// 3으로 나누어지면
		if (i % 3 == 0) {
			arr[i] = min(arr[i], arr[i / 3] + 1);
		}
	}

	cout << arr[n];

	return 0;
}