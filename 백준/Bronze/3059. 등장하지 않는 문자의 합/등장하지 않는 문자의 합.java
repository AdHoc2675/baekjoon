import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        String str;
        int[] alphabetChecker = new int[26];
        int asciiSum;

        n = sc.nextInt();
        sc.nextLine();

        for (int i = 0; i < n; i++) {
            asciiSum = 0;

            for (int j = 0; j < 26; j++) {
                alphabetChecker[j] = 0;
            }

            str = sc.nextLine();

            for (int j = 0; j < str.length(); j++) {
                alphabetChecker[str.charAt(j) - 'A'] = 1;
            }

            for (int j = 0; j < 26; j++) {
                if (alphabetChecker[j] == 0) {
                    asciiSum = asciiSum + (j + 'A');
                }
            }

            System.out.println(asciiSum);

        }
        sc.close();
    }
}
