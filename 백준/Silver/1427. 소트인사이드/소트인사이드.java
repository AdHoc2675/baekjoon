import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        int[] digit = new int[10];

        n = sc.nextInt();

        int index = 0;

        while (true) {
            if (n <= 0) {
                break;
            }

            digit[index] = n % 10;
            index++;
            n = n / 10;
        }

        Arrays.sort(digit, 0, index);

        for (int i = 0; i < index; i++) {
            System.out.print(digit[index - (i + 1)]);
        }

        sc.close();
    }
}
