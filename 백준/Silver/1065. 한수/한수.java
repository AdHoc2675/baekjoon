import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();

        int count = 0;
        int result;

        if (n < 100) {
            result = n;
        } else {
            count = 99;

            for (int i = 100; i <= n; i++) {
                int hundred = i / 100; // 백의 자릿수
                int ten = (i / 10) % 10; // 십의 자릿수
                int one = i % 10;

                if ((hundred - ten) == (ten - one)) { // 각 자릿수가 수열을 이루면
                    count++;
                }
            }

            result = count;
        }

        System.out.print(result);

        sc.close();
    }
}
