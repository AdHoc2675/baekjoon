#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	unordered_map<string, string> password_map; // 사이트 주소 -> 비밀번호
	
	cin >> N >> M;

	for (int i = 0; i < N; ++i) {
		string site, password;
		cin >> site >> password;
		password_map[site] = password; // 사이트 주소를 키로, 비밀번호를 값으로 저장
	}

	for (int i = 0; i < M; ++i) {
		string query_site;
		cin >> query_site;
		cout << password_map[query_site] << "\n"; // 질의된 사이트 주소에 해당하는 비밀번호 출력
	}
	return 0;
}