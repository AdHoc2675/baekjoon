#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int movieTitle = 666;
    int indexOfMovie = 1;

    while (1) {
        // indexOfMovie가 n과 같으면 movieTitle이 n번째 종말의 숫자가 포함된것
        if (indexOfMovie == n) {
            break;
        }
        movieTitle++;
        int temp = movieTitle;

        while (1) {
            if (temp == 0) {
                break;
            }

            // 마지막 세 자리가 666인지 확인
            if (temp % 1000 == 666) {
                // 종말의 숫자면 indexOfMovie 1 증가
                indexOfMovie++;
                break;
            }
            else {
                // 종말의 숫자가 아니면, 일의 자리수를 없앰
                temp = temp / 10;
            }
        }
    }

    printf("%d", movieTitle);

    return 0;
}