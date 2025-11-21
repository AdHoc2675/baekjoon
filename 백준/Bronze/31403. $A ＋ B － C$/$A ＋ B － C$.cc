#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str1, str2, str3;
	
	cin >> str1 >> str2 >> str3;

	cout << stoi(str1) + stoi(str2) - stoi(str3) << "\n";
	cout << stoi(str1 + str2) - stoi(str3) << "\n";
	
	return 0;
}