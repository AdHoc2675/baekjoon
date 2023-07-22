#include <iostream>

using namespace std;

int main() {
	int n;
	int benchmarkPi;
	int afterBenchmarkPi;

	int height = 0, maxHeight = 0; int curruntHeight = 0;

	cin >> n >> benchmarkPi;

	for (int i = 1; i < n; i++) {

		cin >> afterBenchmarkPi;

		if (benchmarkPi < afterBenchmarkPi) {
			height = afterBenchmarkPi - benchmarkPi;
			curruntHeight = curruntHeight + height;

			if (curruntHeight > maxHeight) {
				maxHeight = curruntHeight;
			}
		}
		else {
			height = 0;
			curruntHeight = 0;
		}

		benchmarkPi = afterBenchmarkPi;
	}

	cout << maxHeight;

	return 0;
}