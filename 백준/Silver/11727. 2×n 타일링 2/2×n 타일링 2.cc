#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> dp(n + 1, 0);
	dp[1] = 1; // 1가지: |

	if (n >= 2) {
		dp[2] = 3; // 3가지: ||, =, ㅁ
	}

	for (int i = 3; i <= n; ++i) {
		// f(n) = f(n-1) + 2 * f(n-2)
		// f(n-1)에서 마지막에 |를 붙이는 경우 + f(n-2)에서 마지막에 = 또는 ㅁ을 붙이는 경우(2가지)
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	}

	cout << dp[n] << "\n";
	return 0;
}