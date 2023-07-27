import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        n = sc.nextInt();

        int[] Aarray = new int[n];
        int[] Barray = new int[n];
        int[] check = new int[n];

        for (int i = 0; i < n; i++) {
            Aarray[i] = sc.nextInt();
        }

        for (int i = 0; i < n; i++) {
            Barray[i] = sc.nextInt();
        }

        Arrays.sort(Aarray);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int temp = 0;
            int idx = 0;
            for (int j = 0; j < n; j++) {
                if (temp < Barray[j] && check[j] == 0) {
                    temp = Barray[j];
                    idx = j;
                }
            }
            check[idx] = 1;
            sum = sum + (Aarray[i] * temp);
        }

        System.out.print(sum);

        sc.close();
    }
}
