import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int testCase;
        int inputNumber;
        int[] inputArray = new int[10];

        testCase = s1.nextInt();

        for (int i = 0; i < testCase; i++) {
            for (int j = 0; j < 10; j++) {
                inputNumber = s1.nextInt();

                inputArray[j] = inputNumber;
            }

            Arrays.sort(inputArray);

            System.out.println(inputArray[7]);
        }

        s1.close();
    }
}
