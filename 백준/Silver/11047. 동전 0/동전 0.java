import java.util.Scanner;

public class Main { // 제출시 Main
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, k;
        int numOfRequiredCoin = 0;

        n = sc.nextInt();
        k = sc.nextInt();

        int[] valueOfCoin = new int[n];

        for (int i = 0; i < n; i++) {
            int input;

            input = sc.nextInt();

            valueOfCoin[i] = input;
        }

        int index = n - 1;

        while (true) {
            if (k <= 0) {
                break;
            }

            if (k >= valueOfCoin[index]) {
                k = k - valueOfCoin[index];
                numOfRequiredCoin++;
            } else {
                index--;
            }
        }

        System.out.println(numOfRequiredCoin);

        sc.close();
    }
}
