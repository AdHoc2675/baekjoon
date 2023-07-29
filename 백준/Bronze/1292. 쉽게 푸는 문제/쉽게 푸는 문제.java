import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[1001];
        int a, b, ans = 0;
        int k = 1;

        for (int i = 1; i <= 1000; i++) {
            for (int j = 1; j <= i; j++) {
                if (k > 1000) {
                    break;
                }
                arr[k] = i;
                k++;
            }
        }

        a = sc.nextInt();
        b = sc.nextInt();

        for (int i = a; i <= b; i++) {
            ans = ans + arr[i];
        }

        System.out.print(ans);

        sc.close();
    }
}
