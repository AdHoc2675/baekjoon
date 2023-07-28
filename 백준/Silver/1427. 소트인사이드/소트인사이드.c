#include <stdio.h>
#include <stdlib.h>

int descending(const void* a, const void* b) {
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2) return 1; 
	if (num1 > num2) return -1;
	return 0;
}

int main() {
	int n;

	scanf("%d", &n);
	int* digit = malloc(sizeof(int) * 10);

	int index = 0;

	while (1)
	{
		if (n <= 0) {
			break;
		}

		digit[index] = n % 10;
		index++;
		n = n / 10;
	}

	qsort(digit, index, sizeof(int), descending);

	for (int i = 0; i < index; i++) {
		printf("%d", digit[i]);
	}
}