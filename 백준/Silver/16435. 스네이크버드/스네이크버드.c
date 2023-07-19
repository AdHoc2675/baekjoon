#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numOfFruits;
    int snakebirdLength;

    scanf("%d %d", &numOfFruits, &snakebirdLength);

    int* heightOfFruits = malloc(sizeof(int) * numOfFruits);

    for (int i = 0; i < numOfFruits; i++) {
        int height;

        scanf("%d", &height);

        heightOfFruits[i] = height;
    }

    int check = 0;

    while (1) {
        check = 0;
        for (int i = 0; i < numOfFruits; i++) {
            if (snakebirdLength >= heightOfFruits[i] && heightOfFruits[i] != -1) {
                snakebirdLength++;
                heightOfFruits[i] = -1;
                check = 1;
            }
        }

        if (check == 0) {
            break;
        }
    }

    printf("%d", snakebirdLength);

    free(heightOfFruits);

    return 0;
}