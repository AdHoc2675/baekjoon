#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> numbers(N);
	int sum = 0;

	map<int, int> frequency;
	for (int i = 0; i < N; ++i) {
		cin >> numbers[i];
		sum += numbers[i];
		frequency[numbers[i]]++;
	}

	// 산술평균
	double average = static_cast<double>(sum) / N;

	if (round(average) == -0) // -0 처리
		cout << 0 << "\n";
	else
		cout << round(average) << "\n";

	// 중앙값
	sort(numbers.begin(), numbers.end());
	cout << numbers[N / 2] << "\n";

	// 최빈값
	int max_freq = 0;
	for (const auto& pair : frequency) {
		if (pair.second > max_freq) {
			max_freq = pair.second;
		}
	}

	vector<int> modes;
	for (const auto& pair : frequency) {
		if (pair.second == max_freq) {
			modes.push_back(pair.first);
		}
	}

	sort(modes.begin(), modes.end());
	if (modes.size() > 1) {
		cout << modes[1] << "\n"; // 두 번째로 작은 최빈값
	}
	else {
		cout << modes[0] << "\n"; // 유일한 최빈값
	}

	// 범위
	int range = numbers.back() - numbers.front();
	cout << range << "\n";
	return 0;
}