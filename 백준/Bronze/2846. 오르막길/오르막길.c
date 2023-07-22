#include <stdio.h>

int main() {
	int n;
	int benchmarkPi;
	int afterBenchmarkPi;

	int height = 0, maxHeight = 0; int curruntHeight = 0;

	scanf("%d", &n);
	scanf("%d", &benchmarkPi);

	for (int i = 1; i < n; i++) {
		scanf("%d", &afterBenchmarkPi);

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

	printf("%d", maxHeight);

	return 0;
}