#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    scanf("%s", str);

    int currentStrIndex = 0;
    int tenUnitCounter = 0;

    while (1)
    {
        for (int i = 0; i < 10; i++) {
            if (currentStrIndex == strlen(str)) {
                break;
            }
            printf("%c", str[tenUnitCounter + i]);
            currentStrIndex++;
        }

        if (currentStrIndex == strlen(str)) {
            break;
        }
            

        tenUnitCounter = tenUnitCounter + 10;
        printf("\n");
    }

    return 0;
}
