#include <stdio.h>

int main() {
	int n;

	scanf("%d", &n);

	int i = 1;

	while (1) {
		if (n <= i) {
			break;
		}

		n = n - i;
		i++;
	}

	if (i % 2 == 1) {
		printf("%d/%d", i + 1 - n, n);
	}
	else {
		printf("%d/%d", n, i + 1 - n);
	}

	return 0;
}