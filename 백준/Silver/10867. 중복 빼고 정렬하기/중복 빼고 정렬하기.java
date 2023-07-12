import java.util.Arrays;
import java.util.Scanner;

public class Main { // 제출시 Main
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int n;
        int inputNumber;

        // -1000 ~ 1000의 정수 유무를 판별할 배열
        boolean[] existNum = new boolean[2001];

        Arrays.fill(existNum, false);

        n = s1.nextInt();

        for (int i = 0; i < n; i++) {
            inputNumber = s1.nextInt();

            existNum[inputNumber + 1000] = true;
        }

        for (int i = 0; i < existNum.length; i++) {
            if (existNum[i] == true) {
                System.out.print(i - 1000 + " ");
            }
        }

        s1.close();

    }
}