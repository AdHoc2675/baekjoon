#include <stdio.h>

int main() {
	int n;
	int num[100] = { 0, };
	int primeCount = 0;
	int primeCheck;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int input;

		scanf("%d", &input);

		num[i] = input;
	}

	for (int i = 0; i < n; i++) {
		primeCheck = 0;

		if (num[i] == 2) {
			primeCount++;
		}
		else if (num[i] > 2) {
			for (int j = 2; j <= num[i]; j++) {
				if (num[i] % j == 0) {
					primeCheck++;
				}
			}
			if (primeCheck == 1) {
				primeCount++;
			}
		}
	}

	printf("%d", primeCount);
}