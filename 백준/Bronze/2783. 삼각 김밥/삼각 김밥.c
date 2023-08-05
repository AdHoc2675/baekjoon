#include <stdio.h>

int main() {
	int x, y;
	int n;
	int xi, yi;

	scanf("%d %d", &x, &y);

	scanf("%d", &n);

	float min = (float)x / y;

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &xi, &yi);

		if (min > (float) xi / yi) {
			min = (float)xi / yi;
		}
	}
	
	printf("%.2f", min * 1000);

	return 0;
}