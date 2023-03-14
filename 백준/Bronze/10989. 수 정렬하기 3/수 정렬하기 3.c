#include <stdio.h>

int main()
{
    // cin과 cout의 속도를 높이는 코드이다.
    // 다만, scanf, printf와 섞어 사용하면 안되며
    // 싱글 스레드 환경에서만 사용하여야 한다.

    int n; // number count
    int number;

    scanf("%d", &n);

    int numbers[10000] = { 0, };

    /*
    입력받은 수의 개수는 10,000,000 개로 매우 많으나
    입력받는 수의 범위는 10,000보다 작거나 같은 자연수로, 개수에 비해 그 범위가 작다.
    때문에, 배열의 크기를 10,000,000으로 하기보다는
    배열의 크기를 10000으로 하고, 수를 입력 받을 때마다 입력받은 수에 해당하는 값을 배열의 index로 받고
    주소 안에 들어있는 값을 1 증가시키는 식으로 저장하였다.

    출력할 때에는, 오름차순으로, 배열의 index에 있는 값만큼 i+1 을 반복 출력하였다.
    */

    for (int i = 0; i < n; i++) {
        scanf("%d", &number);

        numbers[number - 1]++;
    }

    for (int i = 0; i < 10000; i++) {
        int j = numbers[i];

        for (int k = 0; k < j; k++) {
            printf("%d\n", i + 1);
        }
    }

    return 0;
}