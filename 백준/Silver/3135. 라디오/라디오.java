import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Afrequency, Bfrequency;
        int numOfStoredFrequency;

        Afrequency = sc.nextInt();
        Bfrequency = sc.nextInt();
        numOfStoredFrequency = sc.nextInt();

        ArrayList<Integer> buttonCount = new ArrayList<Integer>();

        buttonCount.add(Math.abs(Afrequency - Bfrequency));

        for (int i = 0; i < numOfStoredFrequency; i++) {
            int input;
            input = sc.nextInt();

            buttonCount.add(Math.abs(input - Bfrequency) + 1);
        }

        int min = 1000;

        for (int i = 0; i < numOfStoredFrequency + 1; i++) {
            if (min > buttonCount.get(i)) {
                min = buttonCount.get(i);
            }
        }

        System.out.print(min);
    }
}
