import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int multitapCount;
        int plugCount;
        int accessablePC = 0;

        multitapCount = sc.nextInt();

        for (int i = 0; i < multitapCount; i++) {
            plugCount = sc.nextInt();

            accessablePC = accessablePC + plugCount;
        }

        accessablePC = accessablePC - (multitapCount - 1);

        System.out.print(accessablePC);
    }
}
