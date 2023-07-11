import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n;
        int m;

        n = sc.nextInt();
        m = sc.nextInt();

        int answer = n * m - 1;

        System.out.print(answer);

        sc.close();
    }
}
