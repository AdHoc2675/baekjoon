#include <stdio.h>

int main() {
	int n;
	int count = 0;

	scanf("%d", &n);

	while (1) {
		if (n <= 0) {
			break;
		}

		if (n % 5 == 0) {
			count = count + (n / 5);
			n = 0;
		}
		else {
			n = n - 3;
			count++;
		}
	}

	if (n != 0) {
		printf("-1");
	}
	else {
		printf("%d", count);
	}

	return 0;
}