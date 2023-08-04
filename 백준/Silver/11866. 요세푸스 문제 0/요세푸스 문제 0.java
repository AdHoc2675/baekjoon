import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, k;

        n = sc.nextInt();
        k = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();

        for (int i = 1; i <= n; i++) {
            q.add(i);
        }

        System.out.print("<");

        while (true) {
            if (q.size() <= 1) {
                break;
            }

            for (int i = 1; i < k; i++) {
                int tmp = q.poll();

                q.add(tmp); // 뒤에 다시 넣는다
            }

            System.out.print(q.poll() + ", ");
        }

        System.out.print(q.poll() + ">\n");
    }
}