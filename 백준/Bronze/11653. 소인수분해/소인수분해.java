import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        n = sc.nextInt();

        while (true) {
            if (n <= 1) {
                break;
            }

            for (int i = 2; i <= n; i++) {
                if (n % i == 0) {
                    n = n / i;
                    System.out.println(i);
                    break;
                }
            }
        }
    }
}
