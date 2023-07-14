import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    // 연결 리스트로 그래프 구현
    static ArrayList<ArrayList<Integer>> adjacencyList = new ArrayList<ArrayList<Integer>>();
    // 방문 여부를 체크할 ArrayList
    static ArrayList<Boolean> check = new ArrayList<Boolean>();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, m;

        n = sc.nextInt();
        m = sc.nextInt();

        // 노드의 개수만큼 연결 리스트 생성
        for (int i = 0; i < n + 1; i++) {
            adjacencyList.add(new ArrayList<Integer>());
            check.add(false);
        }

        for (int i = 0; i < m; i++) {
            int u, v;

            u = sc.nextInt();
            v = sc.nextInt();

            // 그래프 추가
            // 방향이 없으므로 양방향으로 추가
            adjacencyList.get(u).add(v);
            adjacencyList.get(v).add(u);
        }

        int count = 0;

        // 모든 인접 리스트를 순회하면서
        for (int i = 1; i <= n; i++) {
            // 방문하지 않은 노드가 있다면
            if (check.get(i) == false) {
                // 해당 노드에서 탐색 진행
                dfs(i);
                // 연결 요소의 수 증가
                count = count + 1;
            }
        }

        System.out.print(count);
    }

    static void dfs(int node) {
        // 해당 노드를 방문했음 처리
        check.set(node, true);

        for (int i = 0; i < adjacencyList.get(node).size(); i++) {
            // 주어진 노드 다음에 연결된 노드
            int next = adjacencyList.get(node).get(i);
            if (check.get(next) == false) {
                dfs(next);
            }
        }
    }
}
