import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int time;
        int aCount = 0, bCount = 0, cCount = 0;

        time = sc.nextInt();

        if (time % 10 != 0) {
            System.out.print("-1");

            return;
        }

        while (true) {
            if (time <= 0) {
                break;
            }

            if (time >= 300) {
                time = time - 300;
                aCount++;
            } else if (time >= 60) {
                time = time - 60;
                bCount++;
            } else {
                time = time - 10;
                cCount++;
            }
        }

        System.out.print(aCount + " " + bCount + " " + cCount);
    }
}
