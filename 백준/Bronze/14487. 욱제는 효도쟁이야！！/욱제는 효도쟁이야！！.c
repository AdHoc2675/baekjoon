#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numOfTown;

    scanf("%d", &numOfTown);

    int* moveCost = malloc(sizeof(int) * numOfTown);
    int totalCost = 0;

    for (int i = 0; i < numOfTown; i++) {
        scanf("%d", &moveCost[i]);

        totalCost = totalCost + moveCost[i];
    }

    int max = 0;

    for (int i = 0; i < numOfTown; i++) {
        if (max <= moveCost[i]) {
            max = moveCost[i];
        }
    }

    totalCost = totalCost - max;

    printf("%d", totalCost);

    free(moveCost);

    return 0;
}