import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        final long M = 1234567891;
        final long BASE = 31;

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String str = sc.next();

        long result = 0;
        long r = 1;

        for (int i = 0; i < n; i++) {
            int value = str.charAt(i) - 'a' + 1;
            result = (result + (value * r) % M) % M;
            r = (r * BASE) % M;
        }

        System.out.println(result);
        sc.close();
    }
}
