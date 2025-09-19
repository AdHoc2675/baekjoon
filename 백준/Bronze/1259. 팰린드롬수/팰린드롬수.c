#include <stdio.h>
#include <string.h>
int main()
{
    char num[5];

    while (1)
    {
        scanf("%s", num);

        if (strcmp(num, "0") == 0)
        {
            break;
        }

        int len = strlen(num);
        int palindrom = 1;

        for (int i = 0; i < len / 2; i++)
        {
            if (num[i] != num[len - 1 - i])
            {
                palindrom = 0;
                break;
            }
        }

        if (palindrom)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}