#include <stdio.h>
#include <stdlib.h>


// 오름차순 정렬
int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2) return -1; 
    if (num1 > num2) return 1;
    return 0;
}

int main()
{
    int n, x;
    int sumPairCount = 0;

    scanf("%d", &n);

    int* arrayVector = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        int input;
        scanf("%d", &input);

        arrayVector[i] = input;
    }

    scanf("%d", &x);

    // 오름차순으로 정렬
    qsort(arrayVector, n, sizeof(int), compare);

    // 합할 두 수의 index를 나타낼 변수
    // 투 포인터 알고리즘을 이용
    // 앞과 뒤부터 포인터를 출발
    int firstNum = 0, secondNum = n - 1;

    while (1) {
        // 두 포인터가 만날 때, 반복 종료
        if (firstNum == secondNum) {
            break;
        }

        // 두 수의 합이 x와 같으면
        if (arrayVector[firstNum] + arrayVector[secondNum] == x) {
            sumPairCount++;
            secondNum--;
        }
        else {
            // 두 수의 합이 x보다 크면
            if (arrayVector[firstNum] + arrayVector[secondNum] > x) {
                // 뒤 포인터를 앞으로 옮겨 합을 줄인다
                secondNum--;
            }
            // 두 수의 합이 x보다 작으면
            else {
                // 앞 포인터를 뒤로 옮겨 합을 늘린다
                firstNum++;
            }
        }
    }

    printf("%d", sumPairCount);

    return 0;
}