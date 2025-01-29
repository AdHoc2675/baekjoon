#include <stdio.h>

int main() {
	int n;
	int t, p;

	scanf("%d", &n);

	int shirt_sizes[6] = { 0, };

	for (int i = 0; i < 6; i++) {
		scanf("%d", &shirt_sizes[i]);
	}

	scanf("%d %d", &t, &p);

	int tshirt = 0;
	int penPair, penCount = 0;

	for (int i = 0; i < 6; i++) {
		if (shirt_sizes[i] % t != 0) {
			tshirt = tshirt + (shirt_sizes[i] / t) + 1;
		}
		else {
			tshirt = tshirt + (shirt_sizes[i] / t);
		}
	}

	penPair = n / p;
	penCount = n % p;

	printf("%d\n%d %d", tshirt, penPair, penCount);

	return 0;
}