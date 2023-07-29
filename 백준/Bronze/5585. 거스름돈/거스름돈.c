#include <stdio.h>

int main() {
	int cost;
	int rest = 1000;
	int count = 0;

	scanf("%d", &cost);

	rest = rest - cost;

	while (1) {
		if (rest <= 0) {
			break;
		}

		if (rest >= 500) {
			rest = rest - 500;
			count++;
		}
		else if (rest >= 100) {
			rest = rest - 100;
			count++;
		}
		else if (rest >= 50) {
			rest = rest - 50;
			count++;
		}
		else if (rest >= 10) {
			rest = rest - 10;
			count++;
		}
		else if (rest >= 5) {
			rest = rest - 5;
			count++;
		}
		else if (rest >= 1) {
			rest = rest - 1;
			count++;
		}
	}

	printf("%d", count);

	return 0;
}