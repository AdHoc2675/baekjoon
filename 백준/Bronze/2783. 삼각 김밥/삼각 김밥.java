import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x, y;
        int n;
        int xi, yi;

        x = sc.nextInt();
        y = sc.nextInt();
        n = sc.nextInt();

        float min = (float) x / y;

        for (int i = 0; i < n; i++) {
            xi = sc.nextInt();
            yi = sc.nextInt();

            if (min > (float) xi / yi) {
                min = (float) xi / yi;
            }
        }

        System.out.printf("%.2f", min * 1000);

        sc.close();
    }
}
