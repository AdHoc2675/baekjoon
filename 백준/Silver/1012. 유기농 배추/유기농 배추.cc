#include <iostream>
#include <vector>

using namespace std;

void dfs(int x, int y, vector<vector<int>>& field, vector<vector<bool>>& visited) {
	int dx[] = {0, 0, -1, 1}; // 상하좌우
	int dy[] = {-1, 1, 0, 0};

	visited[y][x] = true;

	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < field[0].size() && ny >= 0 && ny < field.size()) {
			if (field[ny][nx] == 1 && !visited[ny][nx]) {
				dfs(nx, ny, field, visited);
			}
		}
	}
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		int M, N, K;
		cin >> M >> N >> K;        
		vector<vector<int>> field(N, vector<int>(M, 0));
		vector<vector<bool>> visited(N, vector<bool>(M, false));

		for (int i = 0; i < K; ++i) {
			int X, Y;
			cin >> X >> Y;
			field[Y][X] = 1; // 배추 위치 표시
		}

		int wormCount = 0;

		for (int y = 0; y < N; ++y) {
			for (int x = 0; x < M; ++x) {
				if (field[y][x] == 1 && !visited[y][x]) {
					dfs(x, y, field, visited);
					wormCount++;
				}
			}
		}

		cout << wormCount << "\n";
	}
	return 0;
}