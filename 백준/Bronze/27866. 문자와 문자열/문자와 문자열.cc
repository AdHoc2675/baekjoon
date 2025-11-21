#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	int index;

	cin >> str >> index;
	cout << str[index - 1] << "\n";

	return 0;
}