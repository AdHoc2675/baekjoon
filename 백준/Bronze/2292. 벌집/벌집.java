import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        int n; // input

        int roomNum = 1; // room Number
        int passCount = 1; // pass count and answer

        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();

        while (n > roomNum) {
            roomNum = roomNum + 6 * passCount;
            passCount++;
        }

        System.out.println(passCount);

        sc.close();
    }

}