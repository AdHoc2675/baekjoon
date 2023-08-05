import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        int k;

        n = sc.nextInt();

        int[] weight = new int[n];
        int[] height = new int[n];

        for (int i = 0; i < n; i++) {
            weight[i] = sc.nextInt();
            height[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            k = 0;

            for (int j = 0; j < n; j++) {
                if (weight[i] < weight[j] && height[i] < height[j]) {
                    k++;
                }
            }

            System.out.print(k + 1 + " ");
        }

        sc.close();
    }
}
