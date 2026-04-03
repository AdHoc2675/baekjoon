#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> dp(n + 1, 0);
	dp[1] = 1; // 2x1 타일로 채우는 방법: 1가지

	if (n >= 2) {
		dp[2] = 2; // 2x2 타일로 채우는 방법: 2가지 (1+1, 2)
	}

	for (int i = 3; i <= n; ++i) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007; // f(n) = f(n-1) + f(n-2)
	}
	cout << dp[n] << "\n";
	return 0;
}