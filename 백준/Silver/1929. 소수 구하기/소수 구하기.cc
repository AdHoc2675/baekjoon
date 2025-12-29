#include <iostream>

using namespace std;

int main()
{
	int M, N;

	cin >> M >> N;

	for (int num = M; num <= N; ++num) {

		if (num < 2) continue; // 1 이하의 수는 소수가 아님
		bool is_prime = true;

		for (int i = 2; i * i <= num; ++i) {
			if (num % i == 0) {
				is_prime = false;
				break;
			}
		}

		if (is_prime) {
			cout << num << "\n";
		}
	}

	return 0;
}