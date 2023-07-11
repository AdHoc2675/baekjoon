#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string roomNum;

    // roonNum에 0~9의 자연수가 얼마나 있는지 저장할 배열이다.
    // roomNum에 9가 있을 경우엔 6으로 처리하기 위해 배열의 크기는 10이 아닌 9로 한다.
    int zeroToNine[9] = { 0 };


    cin >> roomNum;

    for (int i = 0; i < roomNum.size(); i++) {
        // roomNum에 9가 있을 경우에는
        if (roomNum[i] == '9') {
            // 6번째 index의 element를 증가시킴으로서 9를 6으로 처리한다
            zeroToNine[6]++;
        }
        else {
            zeroToNine[(int)(roomNum[i] - '0')]++;
        }
    }

    // 9와 6은 돌려 쓸 수 있으므로 실제로 필요한 세트는 절반이 된다. 소수점은 올림한다.
    zeroToNine[6] = (zeroToNine[6] / 2) + (zeroToNine[6] % 2);

    // 배열을 오름차순으로 정렬한다.
    sort(zeroToNine, zeroToNine + 9);

    // 그럼 마지막 index, 즉 8번째 index에 있는 element 값이 곧 필요한 세트의 개수가 된다.
    cout << zeroToNine[8];

    return 0;
}