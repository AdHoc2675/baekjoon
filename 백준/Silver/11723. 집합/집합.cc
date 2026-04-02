/*
문제
비어있는 공집합 S가 주어졌을 때, 아래 연산을 수행하는 프로그램을 작성하시오.

add x: S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을 무시한다.
remove x: S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는 연산을 무시한다.
check x: S에 x가 있으면 1을, 없으면 0을 출력한다. (1 ≤ x ≤ 20)
toggle x: S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
all: S를 {1, 2, ..., 20} 으로 바꾼다.
empty: S를 공집합으로 바꾼다.
입력
첫째 줄에 수행해야 하는 연산의 수 M (1 ≤ M ≤ 3,000,000)이 주어진다.

둘째 줄부터 M개의 줄에 수행해야 하는 연산이 한 줄에 하나씩 주어진다.

출력
check 연산이 주어질때마다, 결과를 출력한다.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int M;
	cin >> M;

	int S = 0; // 집합 S를 비트마스크로 표현

	while (M--) {
		string command;
		int x = 0; // x는 1 ≤ x ≤ 20

		cin >> command;

		if (command == "add") {
			cin >> x;
			S |= (1 << (x - 1)); // x를 집합에 추가
		}
		else if (command == "remove") {
			cin >> x;
			S &= ~(1 << (x - 1)); // x를 집합에서 제거
		}
		else if (command == "check") {
			cin >> x;
			cout << ((S & (1 << (x - 1))) ? 1 : 0) << "\n"; // x가 집합에 있는지 확인
		}
		else if (command == "toggle") {
			cin >> x;
			S ^= (1 << (x - 1)); // x가 집합에 있으면 제거, 없으면 추가
		}
		else if (command == "all") {
			S = (1 << 20) - 1; // 모든 원소를 집합에 추가
		}
		else if (command == "empty") {
			S = 0; // 집합을 공집합으로 초기화
		}
	}
	return 0;
}