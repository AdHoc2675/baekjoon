#include <iostream>
#include <vector>

using namespace std;

// 한 node와 연결된 node를 저장할 vector. n번째 index는 곧 n번째 node
vector<int> a[1001];
// 방문 여부를 체크할 array.
bool check[1001];

void dfs(int node) {
    // 해당 노드를 방문했음 처리
    check[node] = true;

    for (int i = 0; i < a[node].size(); i++) {
        // 주어진 노드 다음에 연결된 노드
        int next = a[node][i];
        if (check[next] == false) {
            dfs(next);
        }
    }
}
int main() {
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;

        cin >> u >> v;

        // 방향이 없으니 양쪽 노드에 각 노드를 추가해줌
        a[u].push_back(v);
        a[v].push_back(u);
    }

    int count = 0;

    // 모든 인접 리스트를 순회하면서
    for (int i = 1; i <= n; i++) {
        // 방문하지 않은 노드가 있다면
        if (check[i] == false) {
            // 해당 노드에서 탐색 진행
            dfs(i);
            // 연결 요소의 수 증가
            count = count + 1;		
        }
    }
    
    cout << count;

    return 0;
}