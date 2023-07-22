#include <stdio.h>

int main()
{
    int in, out;
    int max = 0;
    int current = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &out, &in);

        current = current - out + in;

        if (max < current) {
            max = current;
        }
    }

    printf("%d", max);

    return 0;
}