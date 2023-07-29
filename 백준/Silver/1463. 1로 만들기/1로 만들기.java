import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        n = sc.nextInt();

        int[] arr = new int[n + 1];

        // 다이나믹 프로그래밍 사용
        for (int i = 2; i <= n; i++) {
            // 1을 뺀다.
            arr[i] = arr[i - 1] + 1;

            // 2로 나누어지면
            if (i % 2 == 0) {
                if (arr[i] > arr[i / 2] + 1) {
                    arr[i] = arr[i / 2] + 1;
                }
            }

            // 3으로 나누어지면
            if (i % 3 == 0) {
                if (arr[i] > arr[i / 3] + 1) {
                    arr[i] = arr[i / 3] + 1;
                }
            }
        }

        System.out.print(arr[n]);

        sc.close();
    }
}
