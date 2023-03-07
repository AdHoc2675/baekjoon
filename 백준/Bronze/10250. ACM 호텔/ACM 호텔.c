#include <stdio.h>

int main()
{
    int t; // test count
    int h; // height
    int w; // width
    int n; // customer count

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {

        scanf("%d %d %d", &h, &w, &n);

        int floor = n % h;
        int room = n / h;

        if (floor == 0) {
            int answer = h * 100 + room;
            printf("%d\n", answer);
        }
        else {
            int answer = floor * 100 + (room + 1);
            printf("%d\n", answer);
        }
    }

    return 0;
}