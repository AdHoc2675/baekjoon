import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int t; // test count
        int h; // height
        int w; // width
        int n; // customer count

        Scanner sc = new Scanner(System.in);

        t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            h = sc.nextInt();
            w = sc.nextInt();
            n = sc.nextInt();

            int floor = n % h;
            int room = n / h;

            if (floor == 0) {
                System.out.println(h * 100 + room);
            } else {
                System.out.println(floor * 100 + (room + 1));
            }
        }

        sc.close();
    }
}
