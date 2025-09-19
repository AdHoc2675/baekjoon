import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            String num = sc.next();

            if (num.equals("0")) {
                break;
            }

            boolean palindrom = true;
            int len = num.length();

            for (int i = 0; i < len / 2; i++) {
                if (num.charAt(i) != num.charAt(len - 1 - i)) {
                    palindrom = false;
                    break;
                }
            }

            if (palindrom) {
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
        }

        sc.close();

    }
}
