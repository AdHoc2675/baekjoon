#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--) {
		int N, M;
		cin >> N >> M;

		queue<pair<int, int>> q; // pair<index, priority>
		priority_queue<int> pq;  // max-heap for priorities

		for (int i = 0; i < N; ++i) {
			int priority;
			cin >> priority;
			q.push({i, priority});
			pq.push(priority);
		}

		int print_order = 0;

		while (!q.empty()) {
			int cur_index = q.front().first;
			int cur_priority = q.front().second;
			q.pop();

			if (cur_priority == pq.top()) {
				// Print the document
				pq.pop();
				print_order++;
				if (cur_index == M) {
					cout << print_order << "\n";
					break;
				}
			} else {
				// Requeue the document
				q.push({cur_index, cur_priority});
			}
		}
	}

	return 0;
}