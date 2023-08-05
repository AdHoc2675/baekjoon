import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, r;
        int[][] arr = new int[11][31];

        n = sc.nextInt();
        r = sc.nextInt();

        for (int i = 1; i <= r; i++) {
            arr[1][i] = 1;
        }

        for (int i = 1; i <= n; i++) {
            arr[i][i] = 1;
        }

        for (int i = 2; i <= n; i++) {
            for (int j = i; j <= r; j++) {
                arr[i][j] = arr[i][j - 1] + arr[i - 1][j - 1];
            }
        }

        System.out.print(arr[n][r]);
        sc.close();
    }
}
