import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int e, s, m;
        e = sc.nextInt();
        s = sc.nextInt();
        m = sc.nextInt();

        if (e >= 15) {
            e = e % 15;
        }

        if (m >= 19) {
            m = m % 19;
        }

        int num;
        int q = 0;

        while (true) {
            num = 28 * q + s;

            if (num % 15 != e || num % 19 != m) {
                q++;
            } else {
                break;
            }
        }

        System.out.print(num);

        sc.close();
    }
}
