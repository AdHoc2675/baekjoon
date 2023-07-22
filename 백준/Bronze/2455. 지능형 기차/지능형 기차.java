import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int in, out;
        int max = 0;
        int current = 0;

        for (int i = 0; i < 4; i++) {
            out = sc.nextInt();
            in = sc.nextInt();

            current = current - out + in;

            if (max < current) {
                max = current;
            }
        }

        System.out.print(max);

        sc.close();
    }
}
