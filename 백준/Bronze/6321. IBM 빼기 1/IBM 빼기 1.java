import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;

        n = Integer.parseInt(sc.nextLine());

        for (int i = 0; i < n; i++) {
            String computerName;

            computerName = sc.nextLine();

            System.out.println("String #" + (i + 1));

            for (int j = 0; j < computerName.length(); j++) {
                if (computerName.charAt(j) == 'Z') {
                    System.out.print("A");
                } else {
                    char temp = (char) (computerName.charAt(j) + 1);
                    System.out.print(temp);
                }
            }
            System.out.println("\n");
        }
    }
}
