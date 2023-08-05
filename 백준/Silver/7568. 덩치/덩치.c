#include <stdio.h>

int main() {
	int n;
	int k;

	int weight[50] = { 0, };
	int height[50] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &weight[i], &height[i]);
	}

	for (int i = 0; i < n; i++) {
		k = 0;

		for (int j = 0; j < n; j++) {
			if (weight[i] < weight[j] && height[i] < height[j]) {
				k++;
			}
		}

		printf("%d ", k + 1);
	}

	return 0;
}