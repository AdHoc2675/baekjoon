import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int numOfTown;

        numOfTown = sc.nextInt();

        int[] moveCost = new int[numOfTown];
        int totalCost = 0;

        for (int i = 0; i < numOfTown; i++) {
            moveCost[i] = sc.nextInt();
            totalCost = totalCost + moveCost[i];
        }

        Arrays.sort(moveCost);

        totalCost = totalCost - moveCost[numOfTown - 1];

        System.out.print(totalCost);

        sc.close();
    }
}
