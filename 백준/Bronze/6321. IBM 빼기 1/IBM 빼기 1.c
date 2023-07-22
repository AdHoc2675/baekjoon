#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char computerName[50];

		scanf("%s", computerName);

		printf("String #%d\n", i + 1);

		for (int j = 0; j < strlen(computerName); j++) {
			if (computerName[j] == 'Z') {
				printf("A");
			}
			else {
				printf("%c", computerName[j] + 1);
			}
		}
		printf("\n\n");
	}
    

    return 0;
}