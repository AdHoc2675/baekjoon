import java.util.Scanner;

public class Main { // 제출시 Main
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int n = s1.nextInt();

        for (int i = 0; i < n; i++) {
            for (int j = n - i; j < n; j++) {
                System.out.print(" ");
            }
            for (int j = i; j < n; j++) {
                System.out.print("*");
            }
            System.out.print("\n");
        }
    }
}