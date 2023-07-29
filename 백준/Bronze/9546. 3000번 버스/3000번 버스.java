import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase;
        int k;

        testCase = sc.nextInt();

        for (int i = 0; i < testCase; i++) {
            k = sc.nextInt();

            System.out.println((int) (Math.pow(2, k) - 1));
        }

        sc.close();
    }
}
