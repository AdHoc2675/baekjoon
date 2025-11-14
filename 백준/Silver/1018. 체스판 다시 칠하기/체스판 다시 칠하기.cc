#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;

	cin >> n >> m;


	vector<vector<char>> board(n, vector<char>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	int answer = 64;

	for (int startY = 0; startY <= n - 8; startY++) {
		for (int startX = 0; startX <= m - 8; startX++) {
			int cntW = 0, cntB = 0;

			for (int y = 0; y < 8; y++) {
				for (int x = 0; x < 8; x++) {
					char current = board[startY + y][startX + x];

					// color check
					if ((y + x) % 2 == 0) {
						if (current != 'W') {
							cntW++;
						}
						else if (current != 'B') {
							cntB++;
						}
					}
					else {
						if (current != 'W') {
							cntB++;
						}
						else if (current != 'B') {
							cntW++;
						}
					}
				}
			}

			int repaintCount = (cntW < cntB) ? cntW : cntB;

			if (repaintCount < answer) {
				answer = repaintCount;
			}
		}
	}

	cout << answer << "\n";

	return 0;
}