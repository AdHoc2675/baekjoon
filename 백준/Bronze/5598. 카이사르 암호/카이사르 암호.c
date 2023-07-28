#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];

	scanf("%s", name);

	for (int i = 0; i < strlen(name); i++) {
        if (name[i] == 'A') {
            name[i] = 'X';
        }
        else if (name[i] == 'B') {
            name[i] = 'Y';
        }
        else if (name[i] == 'C') {
            name[i] = 'Z';
        }
        else {
            name[i] = name[i] - 3;
        }
	}

    printf("%s", name);

	return 0;
}