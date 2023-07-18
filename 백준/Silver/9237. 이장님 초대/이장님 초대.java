import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numOfSeedlings;

        numOfSeedlings = sc.nextInt();

        Integer[] daysForGrowth = new Integer[numOfSeedlings];

        for (int i = 0; i < numOfSeedlings; i++) {
            int input;
            input = sc.nextInt();

            daysForGrowth[i] = input;
        }

        // 내림차순 정렬
        Arrays.sort(daysForGrowth, Collections.reverseOrder());

        for (int i = 0; i < numOfSeedlings; i++) {
            daysForGrowth[i] = daysForGrowth[i] + i + 1;
        }

        int max = 0;

        for (int i = 0; i < numOfSeedlings; i++) {
            if (max < daysForGrowth[i]) {
                max = daysForGrowth[i];
            }
        }

        System.out.print(max + 1);

        sc.close();
    }
}
