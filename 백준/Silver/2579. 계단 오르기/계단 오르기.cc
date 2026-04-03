#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> stairs(n + 1, 0); // 계단 점수 저장 (1-based index)
	vector<int> dp(n + 1, 0);     // dp[i] = i번째 계단까지의 최대 점수

	for (int i = 1; i <= n; ++i) {
		cin >> stairs[i];
	}

	if (n >= 1) dp[1] = stairs[1]; // 첫 번째 계단 점수

	if (n >= 2) dp[2] = stairs[1] + stairs[2]; // 첫 번째와 두 번째 계단 점수

	for (int i = 3; i <= n; ++i) {
		// dp[i-2] + stairs[i]: i-2에서 한 계단 건너뛰고 i로 올라가는 경우
		// dp[i-3] + stairs[i-1] + stairs[i]: i-3에서 연속된 세 개의 계단을 피하면서 i-1과 i를 밟는 경우
		dp[i] = max(dp[i - 2] + stairs[i], dp[i - 3] + stairs[i - 1] + stairs[i]);
	}
	cout << dp[n] << "\n";
	return 0;
}