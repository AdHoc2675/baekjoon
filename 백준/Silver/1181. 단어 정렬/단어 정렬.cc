#include <iostream>
#include <algorithm>

using namespace std;

int cmp(string a, string b) {
	// 길이가 같은 경우에는, 사전순으로
	if (a.length() == b.length()) {
		return a < b;
	}
	// 다른 경우에는, 짧은 것부터
	else {
		return a.length() < b.length();
	}
}

// 범위가 크기때문에 전역변수로 설정
string word[20000];

int main() {
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> word[i];
	}

	sort(word, word + n, cmp);

	for (int i = 0; i < n; i++) {
		// 중복된 경우 한번만 출력
		if (word[i] == word[i - 1]) {
			continue;
		}
		cout << word[i] << "\n";
	}

	return 0;
}