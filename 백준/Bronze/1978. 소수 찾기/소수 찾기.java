import java.util.Scanner;

public class Main { // 백준에서 제출시엔 클래스 명을 Main으로 바꿀것
    public static void main(String[] args) {
        int n;
        int num[] = new int[100];
        int primeCount = 0;
        int primeCheck;

        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            num[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            primeCheck = 0;

            if (num[i] == 2) {
                primeCount++;
            } else if (num[i] > 2) {
                for (int j = 2; j <= num[i]; j++) {
                    if (num[i] % j == 0) {
                        primeCheck++;
                    }
                }
                if (primeCheck == 1) {
                    primeCount++;
                }
            }
        }

        System.out.print(primeCount);
        sc.close();
    }
}