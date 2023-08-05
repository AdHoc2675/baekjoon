import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        int count = 0;

        n = sc.nextInt();

        while (true) {
            if (n <= 0) {
                break;
            }

            if (n % 5 == 0) {
                count = count + (n / 5);
                n = 0;
            } else {
                n = n - 3;
                count++;
            }
        }

        if (n != 0) {
            System.out.printf("-1");
        } else {
            System.out.printf("%d", count);
        }

        sc.close();
    }
}
