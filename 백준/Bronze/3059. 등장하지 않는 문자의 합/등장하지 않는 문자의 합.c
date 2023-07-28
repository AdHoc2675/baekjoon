#include <stdio.h>
#include <string.h>

int main() {
	int n;
	char str[1000];
	int alphabetChecker[26];
	int asciiSum;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		asciiSum = 0;

		for (int i = 0; i < 26; i++) {
			alphabetChecker[i] = 0;
		}

		scanf("%s", str);

		for (int i = 0; i < strlen(str); i++) {
			alphabetChecker[str[i] - 'A'] = 1;
		}

		for (int i = 0; i < 26; i++) {
			if (alphabetChecker[i] == 0) {
				asciiSum = asciiSum + (i + 'A');
			}
		}

		printf("%d\n", asciiSum);
	}

	return 0;
}