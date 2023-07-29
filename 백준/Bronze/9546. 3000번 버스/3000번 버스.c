#include <stdio.h>
#include <math.h>

int main() {
	int testCase;
	int k;

	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		scanf("%d", &k);

		printf("%d\n", (int)(pow(2, k) - 1));
	}

	return 0;
}