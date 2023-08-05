#include <stdio.h>
#include <vector>

using namespace std;

vector<int> v[105];
int virus[105];
int ans;

void dfs(int x) {
    for (int i = 0; i < v[x].size(); i++) {
        int k = v[x][i];

        if (virus[k] == 0) {
            virus[k] = 1;
            ans++;
            dfs(k);
        }
    }

    return;
}

int main() {
    int n, m;
    int a, b;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);

        v[a].push_back(b);
        v[b].push_back(a);
    }

    virus[1] = 1;
    dfs(1);

    printf("%d", ans);

    return 0;
}