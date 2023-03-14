#include <stdio.h>

int main()
{
    int n; // input

    int roomNum = 1; // room Number
    int passCount = 1; // pass count and answer

    scanf("%d", &n);

    while (n > roomNum) {
        roomNum = roomNum + 6 * passCount;
        passCount++;
    }

    printf("%d", passCount);

    return 0;
}