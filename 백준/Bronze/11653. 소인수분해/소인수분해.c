#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    while (1) {
        if (n <= 1) {
            break;
        }

        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                n = n / i;
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}