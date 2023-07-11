#include <stdio.h>
#include <stdbool.h>

int main()
{
    // 통화의 개수 N
    int callCount;

    // 영식 요금제
    int youngsikPee = 0;
    // 민식 요금제
    int minsikPee = 0;

    int callTime;

    scanf("%d", &callCount);

    for (int i = 0; i < callCount; i++) {
        scanf("%d", &callTime);

        youngsikPee = youngsikPee + (((callTime / 30) + 1) * 10);
        minsikPee = minsikPee + (((callTime / 60) + 1) * 15);
    }

    if (youngsikPee > minsikPee) {
        printf("M %d", minsikPee);
    }
    else if (youngsikPee < minsikPee) {
        printf("Y %d", youngsikPee);
    }
    else {
        printf("Y M %d", youngsikPee);
    }

    return 0;
}