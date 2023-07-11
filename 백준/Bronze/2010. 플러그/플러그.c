#include <stdio.h>

int main()
{
    int multitapCount;
    int plugCount;
    int accessablePC = 0;

    scanf("%d", &multitapCount);

    for (int i = 0; i < multitapCount; i++) {
        scanf("%d", &plugCount);

        accessablePC = accessablePC + plugCount;
    }

    accessablePC = accessablePC - (multitapCount - 1);

    printf("%d", accessablePC);

    return 0;
}