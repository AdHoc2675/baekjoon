#include <stdio.h>

int main() {
    int n, r;
    int arr[11][31] = { 0, };

    scanf("%d %d", &n, &r);

    for (int i = 1; i <= r; i++) {
        arr[1][i] = 1;
    }

    for (int i = 1; i <= n; i++) {
        arr[i][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = i; j <= r; j++) {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j - 1];
        }
    }

    printf("%d", arr[n][r]);

	return 0;
}