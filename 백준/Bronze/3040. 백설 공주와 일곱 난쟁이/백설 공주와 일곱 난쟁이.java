import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] hatNum = new int[9];
        int sumOfHatNum = 0;

        for (int i = 0; i < 9; i++) {
            hatNum[i] = sc.nextInt();
            sumOfHatNum = sumOfHatNum + hatNum[i];
        }

        int save = sumOfHatNum;

        for (int i = 0; i < 8; i++) {
            sumOfHatNum = save;

            sumOfHatNum = sumOfHatNum - hatNum[i];

            int secondSave = sumOfHatNum;

            for (int j = i + 1; j < 9; j++) {
                sumOfHatNum = sumOfHatNum - hatNum[j];

                if (sumOfHatNum == 100) {
                    for (int k = 0; k < 9; k++) {
                        if (k != i && k != j) {
                            System.out.println(hatNum[k]);
                        }
                    }

                } else {
                    sumOfHatNum = secondSave;
                }
            }
        }
        sc.close();
    }
}