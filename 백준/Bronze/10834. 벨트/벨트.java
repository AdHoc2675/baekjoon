import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m;
        int belt = 0;
        int cur = 1;
        int a, b, s;

        m = sc.nextInt();

        for (int i = 0; i < m; i++) {
            a = sc.nextInt();
            b = sc.nextInt();
            s = sc.nextInt();

            if (s == 1) {
                if (belt == 0) {
                    belt = 1;
                } else if (belt == 1) {
                    belt = 0;
                }
            }

            cur = (int) (cur * (double) b / a);
        }

        System.out.print(belt + " " + cur);

        sc.close();
    }
}
