#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'A') {
            str[i] = 'X';
        }
        else if (str[i] == 'B') {
            str[i] = 'Y';
        }
        else if (str[i] == 'C') {
            str[i] = 'Z';
        }
        else {
            str[i] = str[i] - 3;
        }
	}

    printf("%s", str);

	return 0;
}