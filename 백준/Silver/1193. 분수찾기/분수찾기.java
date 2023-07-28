import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        n = sc.nextInt();

        int i = 1;

        while (true) {
            if (n <= i) {
                break;
            }

            n = n - i;
            i++;
        }

        if (i % 2 == 1) {
            System.out.printf("%d/%d", i + 1 - n, n);
        } else {
            System.out.printf("%d/%d", n, i + 1 - n);
        }

        sc.close();
    }
}