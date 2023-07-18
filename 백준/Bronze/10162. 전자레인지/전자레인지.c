#include <stdio.h>

int main()
{
    int time;

    int aCount = 0, bCount = 0, cCount = 0;

    scanf("%d", &time);

    if (time % 10 != 0) {
        printf("-1");

        return 0;
    }

    while (1) {
        if (time <= 0) {
            break;
        }

        if (time >= 300) {
            time = time - 300;
            aCount++;
        }
        else if (time >= 60) {
            time = time - 60;
            bCount++;
        }
        else {
            time = time - 10;
            cCount++;
        }
    }

    printf("%d %d %d", aCount, bCount, cCount);

    return 0;
}