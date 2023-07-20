import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;

        str = sc.nextLine();

        int currentStrIndex = 0;
        int tenUnitCounter = 0;
        while (true) {
            for (int i = 0; i < 10; i++) {
                System.out.print(str.charAt(tenUnitCounter + i));
                currentStrIndex++;
                if (currentStrIndex == str.length()) {
                    break;
                }
            }

            if (currentStrIndex == str.length()) {
                break;
            }

            tenUnitCounter = tenUnitCounter + 10;
            System.out.print("\n");
        }

        sc.close();
    }
}
