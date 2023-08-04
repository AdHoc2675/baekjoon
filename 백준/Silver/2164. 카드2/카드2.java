import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        int popOrPush = 0;

        n = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();

        for (int i = 1; i <= n; i++) {
            q.add(i);
        }

        while (true) {
            if (q.size() <= 1) {
                break;
            }

            for (int i = 1; i < n; i++) {
                int temp = q.poll();

                if (popOrPush == 0) {
                    popOrPush = 1;
                } else if (popOrPush == 1) {
                    popOrPush = 0;
                    q.add(temp);
                }
            }
        }

        System.out.print(q.poll());

        sc.close();
    }
}
