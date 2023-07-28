import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;

        str = sc.nextLine();

        char strToChar[] = str.toCharArray();

        for (int i = 0; i < strToChar.length; i++) {
            if (strToChar[i] == 'A') {
                strToChar[i] = 'X';
            } else if (strToChar[i] == 'B') {
                strToChar[i] = 'Y';
            } else if (strToChar[i] == 'C') {
                strToChar[i] = 'Z';
            } else {
                strToChar[i] = (char) (strToChar[i] - 3);
            }
        }

        for (int i = 0; i < strToChar.length; i++) {
            System.out.print(strToChar[i]);
        }

        sc.close();
    }
}
