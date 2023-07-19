import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numOfFruits;
        int snakebirdLength;

        numOfFruits = sc.nextInt();
        snakebirdLength = sc.nextInt();

        int[] heightOfFruits = new int[numOfFruits];

        for (int i = 0; i < numOfFruits; i++) {
            int height;

            height = sc.nextInt();

            heightOfFruits[i] = height;
        }

        int check = 0;

        while (true) {
            check = 0;
            for (int i = 0; i < numOfFruits; i++) {
                if (snakebirdLength >= heightOfFruits[i] && heightOfFruits[i] != -1) {
                    snakebirdLength++;
                    heightOfFruits[i] = -1;
                    check = 1;
                }
            }

            if (check == 0) {
                break;
            }
        }

        System.out.print(snakebirdLength);

        sc.close();
    }
}
