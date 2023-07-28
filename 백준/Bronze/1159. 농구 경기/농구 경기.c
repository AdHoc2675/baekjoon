#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n;

	scanf("%d", &n);

	int firstChar[26] = { 0, };

	for (int i = 0; i < n; i++) {
		char name[30];
		scanf("%s", name);

		firstChar[name[0] - 'a']++;
	}

	int overFive = 0;

	for (int i = 0; i < 26; i++) {
		if (firstChar[i] >= 5) {
			overFive = 1;
			printf("%c", (char)(i + 'a'));
		}
	}

	if (overFive == 0) {
		printf("PREDAJA");
	}

	return 0;
}