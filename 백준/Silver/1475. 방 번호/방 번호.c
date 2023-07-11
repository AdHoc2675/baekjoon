#include <stdio.h>
#include <string.h>

int main()
{
    int roomNum;

    // roonNum에 0~9의 자연수가 얼마나 있는지 저장할 배열이다.
    // roomNum에 9가 있을 경우엔 6으로 처리하기 위해 배열의 크기는 10이 아닌 9로 한다.
    int zeroToNine[9] = { 0 };

    scanf("%d", &roomNum);

    while (1) {
        if (roomNum <= 0) {
            break;
        }
        
        // roomNum에 9가 있을 경우에는
        if (roomNum % 10 == 9) {
            // 6번째 index의 element를 증가시킴으로서 9를 6으로 처리한다
            zeroToNine[6]++;
        }
        else {
            zeroToNine[roomNum % 10]++;
        }

        roomNum = roomNum / 10;
    }

    // 9와 6은 돌려 쓸 수 있으므로 실제로 필요한 세트는 절반이 된다. 소수점은 올림한다.
    zeroToNine[6] = (zeroToNine[6] / 2) + (zeroToNine[6] % 2);

    // 배열 내 최댓값을 찾아 변수에 저장한다
    int max = 0;

    for (int i = 0; i <= 8; i++) {
        if (zeroToNine[i] >= max) {
            max = zeroToNine[i];
        }
    }

    // 최댓값에 해당하는 변수를 출력한다.
    printf("%d", max);

    return 0;
}