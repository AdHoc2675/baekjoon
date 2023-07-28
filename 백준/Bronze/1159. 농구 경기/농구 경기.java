import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        n = sc.nextInt();

        sc.nextLine();

        int[] firstChar = new int[26];

        for (int i = 0; i < n; i++) {
            String name;
            name = sc.nextLine();

            firstChar[name.charAt(0) - 'a']++;
        }

        boolean overFive = false;

        for (int i = 0; i < 26; i++) {
            if (firstChar[i] >= 5) {
                overFive = true;
                System.out.printf("%c", (char) (i + 'a'));
            }
        }

        if (overFive == false) {
            System.out.print("PREDAJA");
            ;
        }

        sc.close();
    }
}
