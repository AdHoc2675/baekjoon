import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int testCase;

        testCase = Integer.parseInt(sc.nextLine());
        ;

        for (int i = 0; i < testCase; i++) {
            String input = sc.nextLine();

            String[] array = input.split(" ");
            float num = Float.parseFloat(array[0]);

            for (int j = 1; j < array.length; j++) {
                if (array[j].equals("@")) {
                    num = num * 3;
                }

                else if (array[j].equals("%")) {
                    num = num + 5;
                }

                else if (array[j].equals("#")) {
                    num = num - 7;
                }

            }

            System.out.printf("%.2f\n", num);
        }

        sc.close();
    }
}
