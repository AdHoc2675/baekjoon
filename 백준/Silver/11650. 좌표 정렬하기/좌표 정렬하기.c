#include <stdio.h>
#include <stdlib.h>

struct coordinate {
    int x;
    int y;
} coordinate;

int ascending(const void* a, const void* b)
{
    struct coordinate A = *(struct coordinate*)a;
    struct coordinate B = *(struct coordinate*)b;

    if (A.x > B.x) { // 구조체의 x를 비교. 오름차순 정렬
        return 1;
    }
    else if (A.x == B.x) // x좌표가 같다면,
    {
        if (A.y > B.y) { // y좌표를 비교. 오름차순 정렬
            return 1;
        }
        else {
            // 그게 아니라면 -1반환.
            return -1;
        }
    }
    return -1; // A.x < B.x면 -1
}

int main() {
    int n;

    scanf("%d", &n);

    struct coordinate* coord = malloc(sizeof(struct coordinate) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &coord[i].x, &coord[i].y);
    }

    qsort(coord, n, sizeof(struct coordinate), ascending);

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", coord[i].x, coord[i].y);
    }

    free(coord);
}