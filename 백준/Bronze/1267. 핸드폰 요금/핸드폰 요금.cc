#include <iostream>

using namespace std;

int main()
{
    // 통화의 개수 N
    int callCount;

    // 영식 요금제
    int youngsikPee = 0;
    // 민식 요금제
    int minsikPee = 0;

    int callTime;

    cin >> callCount;

    for (int i = 0; i < callCount; i++) {
        cin >> callTime;

        youngsikPee = youngsikPee + (((callTime / 30) + 1) * 10);
        minsikPee = minsikPee + (((callTime / 60) + 1) * 15);
    }

    if (youngsikPee > minsikPee) {
        cout << "M " << minsikPee;
    }
    else if (youngsikPee < minsikPee) {
        cout << "Y " << youngsikPee;
    }
    else {
        cout << "Y M " << youngsikPee;
    }

    return 0;
}